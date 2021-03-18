var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var Alerts = require("FuseJS/Alerts");
var vibration = require('FuseJS/Vibration');
var deviceToast = require("deviceToast");

var items_inq = Observable();

var stsCircleColor1 = Observable();
var APP_STATUS = Observable();
var APP_STATUS_NM = Observable();
var APP_TITLE = Observable();
var APP_USR_NM = Observable();
var APP_DT = Observable();
var AMT = Observable();
var REMARK = Observable();

var APP_NO = Observable();
var USR_NM = Observable();
var APP_DT_H = Observable();
var APP_TITLE = Observable();
var APP_TEXT = Observable();
var RETURN_REMARK = Observable();
var APP_INQ_NO = Observable();
var INQ_AMT = Observable();
var day90 = Observable("false");

var modes = [{
        label: "7 DAYS"
    },
    {
        label: "1 MONTH"
    },
    {
        label: "90 DAYS"
    }
];
var currentMode = Observable(1);
var appr_currentType = Observable(2);

var items_appr_line_inq = Observable();
var items_dtl_inq = Observable();
var remark_list_inq = Observable();

var apprBtn1flag = Observable();
var apprBtn2flag = Observable();
var apprBtn3flag = Observable();
var apprBtn4flag = Observable();

var ok_flag = Observable();
var return_flag = Observable();
var ok_flag_visible = Observable();
var return_flag_visible = Observable();
var return_text = Observable();
var msg_text = Observable();

var return_remark_yn = Observable();
var root_show = Observable("False");
var inq_appr_cnt = Observable(false);

var appr_type = [
    // {
    //     label: "전체보기"
    // },
    {
        label: "결재요청문서"
    },
    {
        label: "결재수정문서"
    },
    {
        label: "결재할문서"
    },
    {
        label: "결재한문서"
    },
    {
        label: "결재반려문서"
    },
    {
        label: "결재완료문서"
    }
];

//var url = "http://123.142.124.166:8080/Fuse_Customer.jsp";
var url = "http://123.142.124.161:8080/Fuse_Customer.jsp";

/* Pull Over Start*/
function endLoading() {
    isLoading.value = false;
    btnRefresh_inq();
}

function reloadHandler() {
    isLoading.value = true;
    setTimeout(endLoading, 1500);
}

var isLoading = Observable(false);
/* Pull Over End*/

/* 새로고침 */
function btnRefresh_inq() {
    items_inq.clear();

    var to_date = new Date();
    var fr_date = new Date();

    if (currentMode.value == 0) {
        fr_date.setDate(new Date().getDate() - 7);
    } else if (currentMode.value == 1) {
        fr_date.setMonth(new Date().getMonth() - 1);
    } else if (currentMode.value == 2) {
        fr_date.setDate(new Date().getDate() - 90);
    }


    if (appr_currentType.value == 0-1) { //전체보기
        appr_status = 'ALL'
    } else if (appr_currentType.value == 1-1) { //결재요청문서
        appr_status = 'REQ'
    } else if (appr_currentType.value == 2-1) { //결재수정문서
        appr_status = 'MODI'
    } else if (appr_currentType.value == 3-1) { // 결재할문서
        appr_status = 'READY'
    } else if (appr_currentType.value == 4-1) { // 결재한문서
        appr_status = 'ALREADY'
    } else if (appr_currentType.value == 5-1) { // 결재반려문서
        appr_status = 'RETURN'
    } else if (appr_currentType.value == 6-1 && currentMode.value == 2) { // 결재완료문서 + 90일
        appr_status = '90DAYS'
    } else if (appr_currentType.value == 6-1 && currentMode.value != 2) { // 결재완료문서 + 90일 외
        appr_status = 'COMPLETE'
    }

    if(appr_status == '90DAYS') {
        day90.value = 'true';
        inq_appr_cnt.value = 'false';
    } else {
        day90.value = 'false';
        var data = {
            V_TYPE: 'C_APPR_S_INQ',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_FR_DT: getDate(fr_date),
            V_TO_DT: getDate(to_date),
            V_APPR_STATUS: appr_status
    };

    fetch(url, {
            method: 'POST',
            headers: {
                "Content-type": "application/json; charset=utf-8"
            },
            body: JSON.stringify(data)
        })
        .then(function (response) {

            status = response.status; // Get the HTTP status code
            response_ok = response.ok; // Is response.status in the 200-range?

            // console.log(status);
            // console.log(response_ok);

            if (status == 500) {
                console.log("DB Failed");
            } else {
                console.log("DB Success");
                return response.json();
            }

        })
        .then(function (responseObject) {
            // console.log(responseObject);

            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);
            var flag = '';

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {

                    var sts_color = '';
                    
                    if (data.resultList[i].APP_STATUS == 'F') { //결재요청문서
                        data.resultList[i].APP_STATUS_NM = '결재요청\n문서';
                        sts_color = '#efb134';
                    } else if (data.resultList[i].APP_STATUS == 'G') { //결재수정문서
                        data.resultList[i].APP_STATUS_NM = '결재수정\n문서';
                        sts_color = '#efb134';
                    } else if (data.resultList[i].APP_STATUS == 'B') { //결재할문서 
                        data.resultList[i].APP_STATUS_NM = '결재할\n문서';
                        sts_color = '#F78DB9';
                    } else if (data.resultList[i].APP_STATUS == 'A') { //결재한문서
                        data.resultList[i].APP_STATUS_NM = '결재한\n문서';
                        sts_color = '#70B988';
                    } else if (data.resultList[i].APP_STATUS == 'E') { //결재반려문서
                        sts_color = '#0000005F';  
                        data.resultList[i].APP_STATUS_NM = '결재반려\n문서';
                    } else if (data.resultList[i].APP_STATUS == 'D') { //결재완료문서
                        sts_color = '#70a0e0';
                        data.resultList[i].APP_STATUS_NM = '결재완료\n문서';
                    } 

                    items_inq.add({
                        APP_STATUS: data.resultList[i].APP_STATUS,
                        APP_STATUS_NM: data.resultList[i].APP_STATUS_NM,
                        APP_TITLE: data.resultList[i].APP_TITLE,
                        APP_USR_NM: data.resultList[i].APP_USR_NM,
                        APP_DT: data.resultList[i].APP_DT,
                        AMT: numberWithCommas(data.resultList[i].AMT),
                        REMARK: data.resultList[i].REMARK,
                        APP_NO: data.resultList[i].APP_NO,
                        APP_INQ_NO: data.resultList[i].APP_INQ_NO,
                        stsCircleColor1: sts_color
                    });
                }

               
            }
            if(items_inq.length == 0) {
                inq_appr_cnt.value = true;
            } else {
                inq_appr_cnt.value = false;
            }

        })
        .catch(function (err) {
            // console.log("catch Error : " + err);
            // console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
    }
}

/* 원 단위 콤마 */
function numberWithCommas(x) {
    if (x == null || x == 'null') {
        return 0;
    } else {
        return x
            .toString()
            .replace(/\B(?=(\d{3})+(?!\d))/g, ",");
    }
}

function getDate(now) {
    var year = now.getFullYear(); //yyyy
    var month = (1 + now.getMonth()); //M
    month = month >= 10 ?
        month :
        '0' + month; //month 두자리로 저장
    var day = now.getDate(); //d
    day = day >= 10 ?
        day :
        '0' + day; //day 두자리로 저장

    return year + '-' + month + '-' + day;
}
/* 기간필터클릭 */
function cycleClick_inq(arg) {
    getData('cycle');
}
/* 상태필터클릭 */
function typesClick_inq(arg) {
    getData('type');
}



/* 검색 필터 클릭 시 데이터 조회 */
function getData(type) {

    items_inq.clear();

    var to_date = new Date();
    var fr_date = new Date();

    /* 기간필터 */
    if (type == 'cycle') {
        if (currentMode.value == 0) {
            fr_date.setMonth(new Date().getMonth() - 1);
        } else if (currentMode.value == 1) {
            fr_date.setDate(new Date().getDate() - 90);
        } else if (currentMode.value == 2) {
            fr_date.setDate(new Date().getDate() - 7);
        }
    } else {
        if (currentMode.value == 0) {
            fr_date.setDate(new Date().getDate() - 7);
        } else if (currentMode.value == 1) {
            fr_date.setMonth(new Date().getMonth() - 1);
        } else if (currentMode.value == 2) {
            fr_date.setDate(new Date().getDate() - 90);
        }
    }
    /* 상태필터 */

    var appr_status = '';
    // console.log('appr_currentType: ' + appr_currentType.value);
    // console.log('type: ' + type);

    if (type == 'type') {
       
      
        if (appr_currentType.value == 6) { //결재요청문서
            appr_status = 'REQ'
        } else if (appr_currentType.value == 1-1) { //결재수정문서
            appr_status = 'MODI'
        } else if (appr_currentType.value == 2-1) { // 결재할문서
            appr_status = 'READY'
        } else if (appr_currentType.value == 3-1) { // 결재한문서
            appr_status = 'ALREADY'
        } else if (appr_currentType.value == 4-1) { // 결재반려문서
            appr_status = 'RETURN'
        } else if (appr_currentType.value == 5-1 && currentMode.value == 2) { // 결재완료문서 + 90일
            appr_status = '90DAYS'
        } else if (appr_currentType.value == 5-1 && currentMode.value != 2) { // 결재완료문서 + 90일 외
            appr_status = 'COMPLETE'
        }
    } else {
        if (appr_currentType.value == 1-1) { //결재요청문서
            appr_status = 'REQ'
        } else if (appr_currentType.value == 2-1) { //결재수정문서
            appr_status = 'MODI'
        } else if (appr_currentType.value == 3-1) { // 결재할문서
            appr_status = 'READY'
        } else if (appr_currentType.value == 4-1) { // 결재한문서
            appr_status = 'ALREADY'
        } else if (appr_currentType.value == 5-1) { // 결재반려문서
            appr_status = 'RETURN'
        } else if (appr_currentType.value == 6-1 && currentMode.value == 1) { // 결재완료문서 + 90일) 
            appr_status = '90DAYS'
        } else if (appr_currentType.value == 6-1 && currentMode.value != 1) { // 결재완료문서 + 90일 외) 
            appr_status = 'COMPLETE'
     }
    }

    items_inq.clear();

    if(appr_status == '90DAYS') {
        day90.value = 'true';
        inq_appr_cnt.value = false;
    } else {
        day90.value = 'false';
        var data = {
            V_TYPE: 'C_APPR_S_INQ',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_FR_DT: getDate(fr_date),
            V_TO_DT: getDate(to_date),
            V_APPR_STATUS: appr_status
        }; 
    
    
        fetch(url, {
                method: 'POST',
                headers: {
                    "Content-type": "application/json; charset=utf-8"
                },
                body: JSON.stringify(data)
            })
            .then(function (response) {
    
                status = response.status; // Get the HTTP status code
                response_ok = response.ok; // Is response.status in the 200-range?
    
                // console.log(status);
                // console.log(response_ok);
    
                if (status == 500) {
                    console.log("DB Failed");
                } else {
                    console.log("DB Success");
                    return response.json();
                }
    
            })
            .then(function (responseObject) {
                // console.log(responseObject);
    
                var res = JSON.stringify(responseObject);
                var data = JSON.parse(res);
                var flag = '';
    
                if (data.resultList.length > 0) {
                    for (var i = 0; i < data.resultList.length; i++) {
    
                        var sts_color = '';
    
                        if (data.resultList[i].APP_STATUS == 'F') { //결재요청문서
                            data.resultList[i].APP_STATUS_NM = '결재요청\n문서';
                            sts_color = '#efb134';
                        } else if (data.resultList[i].APP_STATUS == 'G') { //결재수정문서
                            data.resultList[i].APP_STATUS_NM = '결재수정\n문서';
                            sts_color = '#efb134';
                        } else if (data.resultList[i].APP_STATUS == 'B') { //결재할문서 
                            data.resultList[i].APP_STATUS_NM = '결재할\n문서';
                            sts_color = '#F78DB9';
                        } else if (data.resultList[i].APP_STATUS == 'A') { //결재한문서
                            data.resultList[i].APP_STATUS_NM = '결재한\n문서';
                            sts_color = '#70B988';
                        } else if (data.resultList[i].APP_STATUS == 'E') { //결재반려문서
                            sts_color = '#0000005F';  
                            data.resultList[i].APP_STATUS_NM = '결재반려\n문서';
                        } else if (data.resultList[i].APP_STATUS == 'D') { //결재완료문서
                            sts_color = '#70a0e0';
                            data.resultList[i].APP_STATUS_NM = '결재완료\n문서';
                        } 
    
                        items_inq.add({
                            APP_STATUS: data.resultList[i].APP_STATUS,
                            APP_STATUS_NM: data.resultList[i].APP_STATUS_NM,
                            APP_TITLE: data.resultList[i].APP_TITLE,
                            APP_USR_NM: data.resultList[i].APP_USR_NM,
                            APP_DT: data.resultList[i].APP_DT,
                            AMT: numberWithCommas(data.resultList[i].AMT),
                            REMARK: data.resultList[i].REMARK,
                            APP_NO: data.resultList[i].APP_NO,
                            APP_INQ_NO: data.resultList[i].APP_INQ_NO,
    
                            stsCircleColor1: sts_color
                        });
                    }
                   
                }
                if(items_inq.length == 0) {
                    inq_appr_cnt.value = true;
                } else {
                    inq_appr_cnt.value = false;
                }
    
            })
            .catch(function (err) {
                // console.log("catch Error : " + err);
                // console.log("DB Failed.");
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) {});
            });
    }
    

}


/* ******* 서브메뉴 ******* */
/* SubPage_appr.ux 진입 시 데이터 호출 */

function clicked_appr_inq(arg) {
    var res = JSON.stringify(arg);
    var data = JSON.parse(res);
    //console.log(JSON.stringify(arg.data));

    router_appr_inq.push("subPage_appr_inq");
    page_name = 'subPage_appr_inq';

    remark_list_inq.clear();
    items_appr_line_inq.clear();
    items_dtl_inq.clear();

    var data = {
        V_TYPE: 'C_APPR_L_INQ',
        V_BP_CD: G_BP_CD,
        V_APP_NO: arg.data.APP_NO,
        V_USR_ID: G_USR_ID,
    };

    fetch(url, {
            method: 'POST',
            headers: {
                "Content-type": "application/json; charset=utf-8"
            },
            body: JSON.stringify(data)
        })
        .then(function (response) {

            status = response.status; // Get the HTTP status code
            response_ok = response.ok; // Is response.status in the 200-range?

            if (status == 500) {
                console.log("DB Failed");
            } else {
                console.log("DB Success");
                return response.json();
            }

        })
        .then(function (responseObject) {

            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {
                    /*결재/반려아이콘*/
                    var flag_while = '';
                    var flag_visible = '';
                    var flag_while_return = '';
                    var flag_visible_return = '';

                    if (data.resultList[i].APP_STATUS == 'F' || data.resultList[i].APP_STATUS == 'A' || data.resultList[i].APP_STATUS == 'D') {
                        flag_while = true;
                        flag_visible = "Visible";
                        flag_while_return = false;
                        flag_visible_return = "Hidden";
                    } else if (data.resultList[i].APP_STATUS == 'E') { //반려
                        if (data.resultList[i].APP_REMARK != null) { //remark가 있을 때 == 반려자일때!
                            flag_while = false;
                            flag_visible = "Hidden";
                            flag_while_return = true;
                            flag_visible_return = "Visible";
                        } else if (data.resultList[i].APP_DT != '') { // 결재 했는데 반려당한사람
                            flag_while = true;
                            flag_visible = "Visible";
                            flag_while_return = false;
                            flag_visible_return = "Hidden";
                        } else { //결재도 안하고 반려당한사람
                            flag_while = false;
                            flag_visible = "Hidden";
                            flag_while_return = true;
                            flag_visible_return = "Hidden";
                        }
                    } else {
                        flag_while = true;
                        flag_visible = "Hidden";
                        flag_while_return = false;
                        flag_visible_return = "Hidden";
                    }

                   
                    if(data.resultList[i].APP_REMARK != null) {
                        remark_list_inq.add({
                            USR_NM: data.resultList[i].USR_NM,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                        });
                    }

                    items_appr_line_inq.add({
                        APP_USR_TYPE: '(' + data.resultList[i].APP_USR_TYPE + ')',
                        USR_NM: data.resultList[i].USR_NM,
                        JIKGUB: data.resultList[i].JIKGUB,
                        APP_USR_ID: data.resultList[i].APP_USR_ID,
                        APP_DT: data.resultList[i].APP_DT,
                        APP_STATUS: data.resultList[i].APP_STATUS,
                        ok_flag: flag_while,
                        ok_flag_visible: flag_visible,
                        return_flag: flag_while_return,
                        return_flag_visible: flag_visible_return,
                    });

                    if (G_USR_ID == data.resultList[i].APP_USR_ID) {

                        if (data.resultList[i].APP_STATUS == 'B') { //결재할 문서
                            apprBtn1flag.value = true; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = true; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = false;
                        } else if (data.resultList[i].APP_STATUS == 'A') { //결재한 문서

                            if (data.resultList[i + 1].APP_STATUS == 'B') { //다음 결재자가 결재대기상태 일 때
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = true; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소
                            } else {
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = false; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소
                            }

                            return_remark_yn.value = false;
                        } else if (data.resultList[i].APP_STATUS == 'E') { //결재반려
                            apprBtn1flag.value = false; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = false; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = true;
                        } else if (data.resultList[i].APP_STATUS == 'D') { //결재완료
                            apprBtn1flag.value = false; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = false; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = false;
                        }

                    }
                }
                APP_NO.value = data.resultList[0].APP_NO;
            }

            /* 결재상세내용 SELECT  */
            /* 결재상세내용 SELECT  */

            var data1 = {
                V_TYPE: 'C_APPR_H_INQ',
                V_BP_CD: G_BP_CD,
                V_APP_NO: arg.data.APP_NO,
                V_USR_ID: G_USR_ID,
            };

            fetch(url, {
                    method: 'POST',
                    headers: {
                        "Content-type": "application/json; charset=utf-8"
                    },
                    body: JSON.stringify(data1)
                })
                .then(function (response) {

                    status = response.status; // Get the HTTP status code
                    response_ok = response.ok; // Is response.status in the 200-range?

                    if (status == 500) {
                        console.log("DB Failed");
                    } else {
                        console.log("DB Success");
                        return response.json();
                    }

                })
                .then(function (responseObject) {

                    var res = JSON.stringify(responseObject);
                    var data = JSON.parse(res);
                    var flag = '';

                    if (data.resultList.length > 0) {
                        for (var i = 0; i < data.resultList.length; i++) {

                            USR_NM.value = data.resultList[i].USR_NM;
                            APP_DT_H.value = data.resultList[i].APP_DT_H;
                            APP_TITLE.value = data.resultList[i].APP_TITLE;
                            APP_TEXT.value = data.resultList[i].APP_TEXT;
                            RETURN_REMARK.value = data.resultList[i].RETURN_REMARK;
                            APP_INQ_NO.value = data.resultList[i].APP_INQ_NO;
                            INQ_AMT.value = arg.data.AMT; 
                        }
                    }

                    /* 결재품목 SELECT  */
                    /* 결재품목 SELECT  */
                    var data2 = {
                        V_TYPE: 'C_APPR_D_INQ',
                        V_BP_CD: G_BP_CD,
                        V_APP_NO: arg.data.APP_NO,
                        V_APP_INQ_NO: arg.data.APP_INQ_NO,
                        V_USR_ID: G_USR_ID,
                    };

                    fetch(url, {
                            method: 'POST',
                            headers: {
                                "Content-type": "application/json; charset=utf-8"
                            },
                            body: JSON.stringify(data2)
                        })
                        .then(function (response) {

                            status = response.status; // Get the HTTP status code
                            response_ok = response.ok; // Is response.status in the 200-range?

                            if (status == 500) {
                                console.log("DB Failed");
                            } else {
                                console.log("DB Success");
                                return response.json();
                            }

                        })
                        .then(function (responseObject) {

                            var res = JSON.stringify(responseObject);
                            var data = JSON.parse(res);
                            var flag = '';

                            if (data.resultList.length > 0) {
                                for (var i = 0; i < data.resultList.length; i++) {
                                    items_dtl_inq.add({
                                        ORDER_SEQ: i+1,
                                        ITEM_CD: data.resultList[i].ITEM_CD,
                                        ITEM_NM: data.resultList[i].ITEM_NM,
                                        SPEC: data.resultList[i].SPEC,
                                        MAKER: data.resultList[i].MAKER,
                                        UNIT: data.resultList[i].UNIT,
                                        PRICE: numberWithCommas(data.resultList[i].PRICE),
                                        QTY: numberWithCommas(data.resultList[i].QTY),
                                        AMOUNT: numberWithCommas(data.resultList[i].AMOUNT),
                                    });
                                }
                            }

                            /* 결재품목 SELECT  */
                            /* 결재품목 SELECT  */

                        })
                        .catch(function (err) {
                            Alerts
                                .alert("Error", "Network Error : " + err, "OK")
                                .then(function (x) {});
                        });
                    /* 결재품목 SELECT  */
                    /* 결재품목 SELECT  */

                })
                .catch(function (err) {
                    Alerts
                        .alert("Error", "Network Error : " + err, "OK")
                        .then(function (x) {});
                });
            /* 결재상세내용 SELECT  */
            /* 결재상세내용 SELECT  */


        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
}
/*서브메뉴 back btn*/
function btnBackClick_appr_inq() {
    return_text.value = '';
    router_appr_inq.goBack();
    btnRefresh_inq();
}

/* 발주 결재*/
function abdBtn1Click1(arg) {
    console.log('결재메모: !!!!!!!!!!!!!!!!!!!!!!' + msg_text.value);
}

function abdBtn1Click_inq(arg) {

    var data = {
        V_TYPE: 'C_APPR_I_INQ',
        V_USR_ID: G_USR_ID,
        V_APP_NO: APP_NO.value,
        V_REMARK: msg_text.value
    };

    fetch(url, {
            method: 'POST',
            headers: {
                "Content-type": "application/json; charset=utf-8"
            },
            body: JSON.stringify(data)
        })
        .then(function (response) {

            status = response.status; // Get the HTTP status code
            response_ok = response.ok; // Is response.status in the 200-range?

            if (status == 500) {
                console.log("DB Failed");
            } else {
                console.log("DB Success");
                return response.json();
            }

        })
        .then(function (responseObject) {

            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);
            var flag = '';


            if (data.resultList.length > 0) {
                items_appr_line_inq.clear();
                remark_list_inq.clear();

                for (var i = 0; i < data.resultList.length; i++) {

                    /*결재/반려아이콘*/
                    var flag_while = '';
                    var flag_visible = '';
                    var flag_while_return = '';
                    var flag_visible_return = '';

                    if (data.resultList[i].APP_STATUS == 'F' || data.resultList[i].APP_STATUS == 'A' || data.resultList[i].APP_STATUS == 'D') {
                        flag_while = true;
                        flag_visible = "Visible";
                        flag_while_return = false;
                        flag_visible_return = "Hidden";
                    } else if (data.resultList[i].APP_STATUS == 'E') { //반려
                        if (data.resultList[i].APP_REMARK != null) { //remark가 있을 때 == 반려자일때!
                            flag_while = false;
                            flag_visible = "Hidden";
                            flag_while_return = true;
                            flag_visible_return = "Visible";
                        } else if (data.resultList[i].APP_DT != '') { // 결재 했는데 반려당한사람
                            flag_while = true;
                            flag_visible = "Visible";
                            flag_while_return = false;
                            flag_visible_return = "Hidden";
                        } else { //결재도 안하고 반려당한사람
                            flag_while = false;
                            flag_visible = "Hidden";
                            flag_while_return = true;
                            flag_visible_return = "Hidden";
                        }
                    } else {
                        flag_while = true;
                        flag_visible = "Hidden";
                        flag_while_return = false;
                        flag_visible_return = "Hidden";
                    }

                    if(data.resultList[i].APP_REMARK != null) {
                        remark_list_inq.add({
                            USR_NM: data.resultList[i].USR_NM,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                        });
                    }
                    items_appr_line_inq.add({
                        APP_USR_TYPE: '(' + data.resultList[i].APP_USR_TYPE + ')',
                        USR_NM: data.resultList[i].USR_NM,
                        JIKGUB: data.resultList[i].JIKGUB,
                        APP_USR_ID: data.resultList[i].APP_USR_ID,
                        APP_DT: data.resultList[i].APP_DT,
                        APP_STATUS: data.resultList[i].APP_STATUS,
                        APP_REMARK: data.resultList[i].APP_REMARK,
                        ok_flag: flag_while,
                        ok_flag_visible: flag_visible,
                        return_flag: flag_while_return,
                        return_flag_visible: flag_visible_return,
                    });


                    if (G_USR_ID == data.resultList[i].APP_USR_ID) {

                        if (data.resultList[i].APP_STATUS == 'B') { //결재할 문서
                            apprBtn1flag.value = true; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = true; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = false;
                        } else if (data.resultList[i].APP_STATUS == 'A') { //결재한 문서

                            if (data.resultList[i + 1].APP_STATUS == 'B') { //다음 결재자가 결재대기상태 일 때
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = true; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소
                            } else {
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = false; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소
                            }

                            return_remark_yn.value = false;
                        } else if (data.resultList[i].APP_STATUS == 'E') { //결재반려
                            apprBtn1flag.value = false; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = false; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = true;
                        } else if (data.resultList[i].APP_STATUS == 'D') { //결재완료
                            apprBtn1flag.value = false; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = false; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = false;
                        }

                    }
                }
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });

}

/* 결재취소 */
function abdBtn2Click_inq() {
    var data = {
        V_TYPE: 'C_APPR_IC_INQ',
        V_USR_ID: G_USR_ID,
        V_APP_NO: APP_NO.value
    };

    fetch(url, {
            method: 'POST',
            headers: {
                "Content-type": "application/json; charset=utf-8"
            },
            body: JSON.stringify(data)
        })
        .then(function (response) {

            status = response.status; // Get the HTTP status code
            response_ok = response.ok; // Is response.status in the 200-range?

            if (status == 500) {
                console.log("DB Failed");
            } else {
                console.log("DB Success");
                return response.json();
            }

        })
        .then(function (responseObject) {

            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);
            var flag = '';


            if (data.resultList.length > 0) {
                items_appr_line_inq.clear();
                remark_list_inq.clear();

                for (var i = 0; i < data.resultList.length; i++) {
                    /*결재/반려아이콘*/
                    var flag_while = '';
                    var flag_visible = '';
                    var flag_while_return = '';
                    var flag_visible_return = '';

                    if (data.resultList[i].APP_STATUS == 'F' || data.resultList[i].APP_STATUS == 'A' || data.resultList[i].APP_STATUS == 'D') {
                        flag_while = true;
                        flag_visible = "Visible";
                        flag_while_return = false;
                        flag_visible_return = "Hidden";
                    } else if (data.resultList[i].APP_STATUS == 'E') { //반려
                        if (data.resultList[i].APP_REMARK != null) { //remark가 있을 때 == 반려자일때!
                            flag_while = false;
                            flag_visible = "Hidden";
                            flag_while_return = true;
                            flag_visible_return = "Visible";
                        } else if (data.resultList[i].APP_DT != '') { // 결재 했는데 반려당한사람
                            flag_while = true;
                            flag_visible = "Visible";
                            flag_while_return = false;
                            flag_visible_return = "Hidden";
                        } else { //결재도 안하고 반려당한사람
                            flag_while = false;
                            flag_visible = "Hidden";
                            flag_while_return = true;
                            flag_visible_return = "Hidden";
                        }
                    } else {
                        flag_while = true;
                        flag_visible = "Hidden";
                        flag_while_return = false;
                        flag_visible_return = "Hidden";
                    }

                    if(data.resultList[i].APP_REMARK != null) {
                        remark_list_inq.add({
                            USR_NM: data.resultList[i].USR_NM,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                        });
                    }
                    items_appr_line_inq.add({
                        APP_USR_TYPE: '(' + data.resultList[i].APP_USR_TYPE + ')',
                        USR_NM: data.resultList[i].USR_NM,
                        JIKGUB: data.resultList[i].JIKGUB,
                        APP_USR_ID: data.resultList[i].APP_USR_ID,
                        APP_DT: data.resultList[i].APP_DT,
                        APP_STATUS: data.resultList[i].APP_STATUS,
                        APP_REMARK: data.resultList[i].APP_REMARK,
                        ok_flag: flag_while,
                        ok_flag_visible: flag_visible,
                        return_flag: flag_while_return,
                        return_flag_visible: flag_visible_return,
                    });

                    if (G_USR_ID == data.resultList[i].APP_USR_ID) {
                        if (data.resultList[i].APP_STATUS == 'B') { //결재할 문서
                            apprBtn1flag.value = true; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = true; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = false;
                        } else if (data.resultList[i].APP_STATUS == 'A') { //결재한 문서

                            if (data.resultList[i + 1].APP_STATUS == 'B') { //다음 결재자가 결재대기상태 일 때
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = true; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소
                            } else {
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = false; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소
                            }

                            return_remark_yn.value = false;
                        } else if (data.resultList[i].APP_STATUS == 'E') { //결재반려
                            apprBtn1flag.value = false; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = false; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = true;
                        } else if (data.resultList[i].APP_STATUS == 'D') { //결재완료
                            apprBtn1flag.value = false; //결재
                            apprBtn2flag.value = false; //결재취소
                            apprBtn3flag.value = false; //반려
                            apprBtn4flag.value = false; //반려취소

                            return_remark_yn.value = false;
                        }

                    }
                }
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
}

/*결재반려*/
function abdBtn3Click_inq() {
    if (return_text.value == null || return_text.value == '' || return_text.value == undefined) {
        root_show.value = "True";
        Alerts.alert("확인", "반려사유를 입력하세요.", "OK").then(function (x) {});
        root_show.value = "True";
    } else {

        var data = {
            V_TYPE: 'C_APPR_R_INQ',
            V_USR_ID: G_USR_ID,
            V_APP_NO: APP_NO.value,
            V_RETURN_TXT: return_text.value
        };

        fetch(url, {
                method: 'POST',
                headers: {
                    "Content-type": "application/json; charset=utf-8"
                },
                body: JSON.stringify(data)
            })
            .then(function (response) {

                status = response.status; // Get the HTTP status code
                response_ok = response.ok; // Is response.status in the 200-range?

                if (status == 500) {
                    console.log("DB Failed");
                } else {
                    console.log("DB Success");
                    return response.json();
                }

            })
            .then(function (responseObject) {


                var res = JSON.stringify(responseObject);
                var data = JSON.parse(res);
                var flag = '';


                if (data.resultList.length > 0) {
                    items_appr_line_inq.clear();
                    remark_list_inq.clear();

                    for (var i = 0; i < data.resultList.length; i++) {
                        /*결재/반려아이콘*/
                        var flag_while = '';
                        var flag_visible = '';
                        var flag_while_return = '';
                        var flag_visible_return = '';

                        if (data.resultList[i].APP_STATUS == 'F' || data.resultList[i].APP_STATUS == 'A' || data.resultList[i].APP_STATUS == 'D') {
                            flag_while = true;
                            flag_visible = "Visible";
                            flag_while_return = false;
                            flag_visible_return = "Hidden";
                        } else if (data.resultList[i].APP_STATUS == 'E') { //반려
                            if (data.resultList[i].APP_REMARK != null) { //remark가 있을 때 == 반려자일때!
                                flag_while = false;
                                flag_visible = "Hidden";
                                flag_while_return = true;
                                flag_visible_return = "Visible";
                            } else if (data.resultList[i].APP_DT != '') { // 결재 했는데 반려당한사람
                                flag_while = true;
                                flag_visible = "Visible";
                                flag_while_return = false;
                                flag_visible_return = "Hidden";
                            } else { //결재도 안하고 반려당한사람
                                flag_while = false;
                                flag_visible = "Hidden";
                                flag_while_return = true;
                                flag_visible_return = "Hidden";
                            }
                        } else {
                            flag_while = true;
                            flag_visible = "Hidden";
                            flag_while_return = false;
                            flag_visible_return = "Hidden";
                        }

                        if(data.resultList[i].APP_REMARK != null) {
                            remark_list_inq.add({
                                USR_NM: data.resultList[i].USR_NM,
                                APP_REMARK: data.resultList[i].APP_REMARK,
                            });
                        }

                        items_appr_line_inq.add({
                            APP_USR_TYPE: '(' + data.resultList[i].APP_USR_TYPE + ')',
                            USR_NM: data.resultList[i].USR_NM,
                            JIKGUB: data.resultList[i].JIKGUB,
                            APP_USR_ID: data.resultList[i].APP_USR_ID,
                            APP_DT: data.resultList[i].APP_DT,
                            APP_STATUS: data.resultList[i].APP_STATUS,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                            ok_flag: flag_while,
                            ok_flag_visible: flag_visible,
                            return_flag: flag_while_return,
                            return_flag_visible: flag_visible_return,
                        });

                        if (G_USR_ID == data.resultList[i].APP_USR_ID) {
                            if (data.resultList[i].APP_STATUS == 'B') { //결재할 문서
                                apprBtn1flag.value = true; //결재
                                apprBtn2flag.value = false; //결재취소
                                apprBtn3flag.value = true; //반려
                                apprBtn4flag.value = false; //반려취소

                                return_remark_yn.value = false;
                            } else if (data.resultList[i].APP_STATUS == 'A') { //결재한 문서

                                if (data.resultList[i + 1].APP_STATUS == 'B') { //다음 결재자가 결재대기상태 일 때
                                    apprBtn1flag.value = false; //결재
                                    apprBtn2flag.value = true; //결재취소
                                    apprBtn3flag.value = false; //반려
                                    apprBtn4flag.value = false; //반려취소
                                } else {
                                    apprBtn1flag.value = false; //결재
                                    apprBtn2flag.value = false; //결재취소
                                    apprBtn3flag.value = false; //반려
                                    apprBtn4flag.value = false; //반려취소
                                }

                                return_remark_yn.value = false;
                            } else if (data.resultList[i].APP_STATUS == 'E') { //결재반려
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = false; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소

                                return_remark_yn.value = true;
                            } else if (data.resultList[i].APP_STATUS == 'D') { //결재완료
                                apprBtn1flag.value = false; //결재
                                apprBtn2flag.value = false; //결재취소
                                apprBtn3flag.value = false; //반려
                                apprBtn4flag.value = false; //반려취소

                                return_remark_yn.value = false;
                            }
                        }
                    }
                    root_show.value = "False";
                }


            })
            .catch(function (err) {
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) {});
            });

    }

}

Lifecycle.on("enteringForeground", function () {
    btnRefresh_inq();
})

function subappr_back_inq() {
    btnBackClick_appr_inq();
}

module.exports = {
    appr_currentType: appr_currentType,
    appr_type: appr_type,
    modes: modes,
    currentMode: currentMode,
    cycleClick_inq: cycleClick_inq,
    typesClick_inq: typesClick_inq,

    items_inq: items_inq,
    remark_list_inq: remark_list_inq,

    stsCircleColor1: stsCircleColor1,
    APP_STATUS: APP_STATUS,
    APP_STATUS_NM: APP_STATUS_NM,
    APP_TITLE: APP_TITLE,
    APP_USR_NM: APP_USR_NM,
    APP_DT: APP_DT,
    AMT: AMT,
    REMARK: REMARK,
    inq_appr_cnt: inq_appr_cnt,
    ok_flag: ok_flag,
    return_flag: return_flag,
    ok_flag_visible: ok_flag_visible,
    return_flag_visible: return_flag_visible,

    endLoading: endLoading,
    reloadHandler: reloadHandler,
    isLoading: isLoading,

    clicked_appr_inq: clicked_appr_inq,
    btnBackClick_appr_inq: btnBackClick_appr_inq,

    

    items_appr_line_inq: items_appr_line_inq,
    items_dtl_inq: items_dtl_inq,

    APP_NO: APP_NO,
    USR_NM: USR_NM,
    APP_DT_H: APP_DT_H,
    APP_TITLE: APP_TITLE,
    APP_TEXT: APP_TEXT,
    RETURN_REMARK: RETURN_REMARK,
    APP_INQ_NO: APP_INQ_NO,
    INQ_AMT: INQ_AMT,

    abdBtn1Click_inq: abdBtn1Click_inq,
    abdBtn2Click_inq: abdBtn2Click_inq,
    abdBtn3Click_inq: abdBtn3Click_inq,

    apprBtn1flag: apprBtn1flag,
    apprBtn2flag: apprBtn2flag,
    apprBtn3flag: apprBtn3flag,
    apprBtn4flag: apprBtn4flag,

    msg_text: msg_text,
    return_text: return_text,
    root_show: root_show,
    return_remark_yn: return_remark_yn,

    subappr_back_inq: subappr_back_inq,

    inq_appr_cnt: inq_appr_cnt,
    day90: day90
}