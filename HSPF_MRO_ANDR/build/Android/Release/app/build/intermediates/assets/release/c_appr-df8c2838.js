var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var Alerts = require("FuseJS/Alerts");
var vibration = require('FuseJS/Vibration');
var deviceToast = require("deviceToast");

var InterApp = require("FuseJS/InterApp");

var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");
if(Environment.ios || Environment.preview) {
    device = "Visible";
} 

var items = Observable();

var stsCircleColor1 = Observable();
var APP_STATUS = Observable();
var APP_STATUS_NM = Observable();
var APP_TITLE = Observable();
var APP_USR_NM = Observable();
var APP_DT = Observable();
var AMT = Observable();
var REMARK = Observable();

var po_appr_cnt = Observable();

var APP_NO = Observable();
var USR_NM = Observable();
var APP_DT_H = Observable();
var APP_TITLE = Observable();
var APP_PO_AMT = Observable();
var APP_TEXT = Observable();
var RETURN_REMARK = Observable();
var APP_PO_NO = Observable();
var ITEM_DT = Observable();

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
var currentMode = Observable(2);
var appr_currentType = Observable(2);

var items_appr_line = Observable();
var items_dtl = Observable();
var remark_list = Observable();

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
var day90 = Observable("false");

var FILE_NM1 = Observable("");
var FILE_PC1 = Observable("");
var FILE_NM2 = Observable("");
var FILE_PC2 = Observable("");
var FILE_NM3 = Observable("");
var FILE_PC3 = Observable("");


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
    },
];
var po_appr_cnt = Observable(false);

var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + ("0" + (new Date().getMonth() + 1)).slice(-2));
var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable(week_day);

var url = "http://123.142.124.161:8080/Fuse_Customer.jsp";

var g_BP_NM_obs = Observable(g_BP_NM);
var g_USR_NM_obs = Observable(g_USR_NM);
/*
var url = "http://123.142.124.166:8080/Fuse_Customer.jsp";
var g_BP_NM_obs = 'test';
var g_USR_NM_obs = 'test';

G_BP_CD = '88881';
G_USR_ID = 'custom11';
/*

*/
var chk_bp_cd = G_BP_CD == '05911' ? Observable("Visible") : Observable("Hidden"); //SHPAC(05911)이면 '발주결재진행함의 상품등록일' 보이기. 

if (G_BP_CD == '05911' || G_BP_CD == '77777' || G_BP_CD == '88881' ) {
    chk_bp_cd = Observable("Visible");
} else {
    chk_bp_cd = Observable("Hidden");
}

var chk_line_usr = Observable();
var line_list = Observable();
var line_nm = Observable();
var line_id = Observable();

/* Pull Over Start*/
function endLoading() {
    isLoading.value = false;
    btnRefresh();
}

function reloadHandler() {
    isLoading.value = true;
    setTimeout(endLoading, 1500);
}

var isLoading = Observable(false);
/* Pull Over End*/

/* 새로고침 */
function btnRefresh() {

    items.clear();

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
        po_appr_cnt.value = 'false';
    } else {
        day90.value = 'false';
        var data = {
            V_TYPE: 'C_APPR_S',
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
    
    
                        items.add({
                            APP_STATUS: data.resultList[i].APP_STATUS,
                            APP_STATUS_NM: data.resultList[i].APP_STATUS_NM,
                            APP_TITLE: data.resultList[i].APP_TITLE,
                            APP_USR_NM: data.resultList[i].APP_USR_NM,
                            APP_DT: data.resultList[i].APP_DT,
                            AMT: numberWithCommas(data.resultList[i].AMT),
                            REMARK: data.resultList[i].REMARK,
                            APP_NO: data.resultList[i].APP_NO,
                            APP_PO_NO: data.resultList[i].APP_PO_NO,
    
                            stsCircleColor1: sts_color
                        });
                    }
                }
                if (items.length == 0) {
                    po_appr_cnt.value = true;
                } else {
                    po_appr_cnt.value = false;
                }
    
            })
            .catch(function (err) {
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
function cycleClick(arg) {
    getData('cycle');
}
/* 상태필터클릭 */
function typesClick(arg) {
    getData('type');
}



/* 검색 필터 클릭 시 데이터 조회 */
function getData(type) {

    items.clear();

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
    if (type == 'type') {

        /* 전체보기 있음
        if (appr_currentType.value == 6) { //전체보기
            appr_status = 'ALL'
        } else if (appr_currentType.value == 0) { //결재요청문서
            appr_status = 'REQ'
        } else if (appr_currentType.value == 1) { //결재수정문서
            appr_status = 'MODI'
        } else if (appr_currentType.value == 2) { // 결재할문서
            appr_status = 'READY'
        } else if (appr_currentType.value == 3) { // 결재한문서
            appr_status = 'ALREADY'
        } else if (appr_currentType.value == 4) { // 결재반려문서
            appr_status = 'RETURN'
        } else if (appr_currentType.value == 5 && currentMode.value == 2) { // 결재완료문서 + 90일
            appr_status = '90DAYS'
        } else if (appr_currentType.value == 5 && currentMode.value != 2) { // 결재완료문서 + 90일 외
            appr_status = 'COMPLETE'
        }
        */
        // if (appr_currentType.value == 6) { //전체보기
        //     appr_status = 'ALL'



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
    } else { //type = cycle
        /* 전체보기 있음
        if (appr_currentType.value == 0) { //전체보기
            appr_status = 'ALL'
        } else if (appr_currentType.value == 1) { //결재요청문서
            appr_status = 'REQ'
        } else if (appr_currentType.value == 2) { //결재수정문서
            appr_status = 'MODI'
        } else if (appr_currentType.value == 3) { // 결재할문서
            appr_status = 'READY'
        } else if (appr_currentType.value == 4) { // 결재한문서
            appr_status = 'ALREADY'
        } else if (appr_currentType.value == 5) { // 결재반려문서
            appr_status = 'RETURN'
        } else if (appr_currentType.value == 6 && currentMode.value == 1) { // 결재완료문서 + 90일) 
            appr_status = '90DAYS'
        } else if (appr_currentType.value == 6 && currentMode.value != 1) { // 결재완료문서 + 90일 외) 
            appr_status = 'COMPLETE'
        }
        */
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

    items.clear();

    
    var data = {
        V_TYPE: 'C_APPR_S',
        V_USR_ID: G_USR_ID,
        V_BP_CD: G_BP_CD,
        V_FR_DT: getDate(fr_date),
        V_TO_DT: getDate(to_date),
        V_APPR_STATUS: appr_status
    };

    if(appr_status == '90DAYS') {
        day90.value = 'true';
        po_appr_cnt.value = 'false';
    } else {
        day90.value = 'false';
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

                    items.add({
                        APP_STATUS: data.resultList[i].APP_STATUS,
                        APP_STATUS_NM: data.resultList[i].APP_STATUS_NM,
                        APP_TITLE: data.resultList[i].APP_TITLE,
                        APP_USR_NM: data.resultList[i].APP_USR_NM,
                        APP_DT: data.resultList[i].APP_DT,
                        AMT: numberWithCommas(data.resultList[i].AMT),
                        REMARK: data.resultList[i].REMARK,
                        APP_NO: data.resultList[i].APP_NO,
                        APP_PO_NO: data.resultList[i].APP_PO_NO,

                        stsCircleColor1: sts_color
                    });
                }
            }
            if (items.length == 0) {
                po_appr_cnt.value = true;
            } else {
                po_appr_cnt.value = false;
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
    }
    

}


/* ******* 서브메뉴 ******* */
/* SubPage_appr.ux 진입 시 데이터 호출 */

function clicked_appr(arg) {
    var res = JSON.stringify(arg);
    var data = JSON.parse(res);

    router_appr.push("subPage_appr");
    page_name = 'subPage_appr';

    remark_list.clear();
    items_dtl.clear();
    items_appr_line.clear();

    var data = {
        V_TYPE: 'C_APPR_L',
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


                    if (data.resultList[i].APP_REMARK != null) {
                        remark_list.add({
                            USR_NM: data.resultList[i].USR_NM,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                            JIKGUB: data.resultList[i].JIKGUB,
                        });
                    }

                    items_appr_line.add({
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
                V_TYPE: 'C_APPR_H',
                V_BP_CD: G_BP_CD,
                V_APP_NO: arg.data.APP_NO,
                V_USR_ID: G_USR_ID,
            };

            var FILE_YN = '';

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
                        FILE_YN = data.resultList[0].FILE_YN; //첨부파일여부확인
                        for (var i = 0; i < data.resultList.length; i++) {

                            USR_NM.value = data.resultList[i].USR_NM;
                            APP_DT_H.value = data.resultList[i].APP_DT_H;
                            APP_TITLE.value = data.resultList[i].APP_TITLE;
                            APP_TEXT.value = data.resultList[i].APP_TEXT;
                            APP_PO_AMT.value = numberWithCommas(data.resultList[i].PO_AMT);
                            RETURN_REMARK.value = data.resultList[i].RETURN_REMARK;
                            APP_PO_NO.value = data.resultList[i].APP_PO_NO;
                            
                            FILE_NM1.value = (data.resultList[i].FILE_NM1 == null ? 'null' : data.resultList[i].FILE_NM1); //file_nm1로 첨부파일 hidden on off
                            FILE_PC1.value = data.resultList[i].FILE_PC1;
                            
                            FILE_NM2.value = data.resultList[i].FILE_NM2;
                            FILE_PC2.value = data.resultList[i].FILE_PC2;
                            
                            FILE_NM3.value = data.resultList[i].FILE_NM3;
                            FILE_PC3.value = data.resultList[i].FILE_PC3;
                        }
                    }

                    /* 결재품목 SELECT  */
                    /* 결재품목 SELECT  */
                    var data2 = {
                        V_TYPE: 'C_APPR_D',
                        V_BP_CD: G_BP_CD,
                        V_APP_NO: arg.data.APP_NO,
                        V_APP_PO_NO: arg.data.APP_PO_NO,
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
                                    items_dtl.add({
                                        ORDER_SEQ: data.resultList[i].ORDER_SEQ,
                                        ITEM_CD: data.resultList[i].ITEM_CD,
                                        ITEM_NM: data.resultList[i].ITEM_NM,
                                        SPEC: data.resultList[i].SPEC,
                                        MAKER: data.resultList[i].MAKER,
                                        UNIT: data.resultList[i].UNIT,
                                        PRICE: numberWithCommas(data.resultList[i].PRICE),
                                        QTY: numberWithCommas(data.resultList[i].QTY),
                                        AMOUNT: numberWithCommas(data.resultList[i].AMOUNT),
                                        GB_CD_NM: data.resultList[i].GB_CD_NM,
                                        REMARK: data.resultList[i].REMARK,
                                        GB_CD_TEAM: data.resultList[i].GB_CD_TEAM,
                                        GB_CD_LINE: data.resultList[i].GB_CD_LINE,
                                        GB_CD_EQUIP: data.resultList[i].GB_CD_EQUIP,
                                        CURRENT_STOCK: data.resultList[i].CURRENT_STOCK,
                                        SAFE_STOCK: data.resultList[i].SAFE_STOCK,
                                        LACK_STOCK: data.resultList[i].LACK_STOCK,
                                        ITEM_DT: data.resultList[i].ITEM_DT,
                                    });
                                }
                            }

                            /* 첨부파일이 있으면 ALERT */
                            // if (FILE_YN == 'Y') {
                            //     Alerts
                            //         .alert("확인", "첨부파일이 존재하므로 PC버전에서 확인부탁드립니다.", "OK")
                            //         .then(function (x) {});
                            // }



                            /* 결재품목 SELECT  */
                            /* 결재품목 SELECT  */

                        })
                        .catch(function (err) {
                            console.log("catch Error : " + err);
                            console.log("DB Failed.");
                            Alerts
                                .alert("Error", "Network Error : " + err, "OK")
                                .then(function (x) {});
                        });
                    /* 결재품목 SELECT  */
                    /* 결재품목 SELECT  */

                })
                .catch(function (err) {
                    console.log("catch Error : " + err);
                    console.log("DB Failed.");
                    Alerts
                        .alert("Error", "Network Error : " + err, "OK")
                        .then(function (x) {});
                });
            /* 결재상세내용 SELECT  */
            /* 결재상세내용 SELECT  */


        })
        .catch(function (err) {
            console.log("catch Error : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
}


function abdBtn1Click(arg) {

    var data = {
        V_TYPE: 'C_APPR_I',
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
                items_appr_line.clear();
                remark_list.clear();

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

                    if (data.resultList[i].APP_REMARK != null) {
                        remark_list.add({
                            USR_NM: data.resultList[i].USR_NM,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                            JIKGUB: data.resultList[i].JIKGUB,
                        });
                    }
                    items_appr_line.add({
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
            console.log("catch Error : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });

}

/* 결재취소 */
function abdBtn2Click() {
    var data = {
        V_TYPE: 'C_APPR_IC',
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
                items_appr_line.clear();
                remark_list.clear();

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

                    if (data.resultList[i].APP_REMARK != null) {
                        remark_list.add({
                            USR_NM: data.resultList[i].USR_NM,
                            APP_REMARK: data.resultList[i].APP_REMARK,
                            JIKGUB: data.resultList[i].JIKGUB,
                        });
                    }
                    items_appr_line.add({
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
            console.log("catch Error : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
}

/*결재반려*/
function abdBtn3Click() {
    if (return_text.value == null || return_text.value == '' || return_text.value == undefined) {
        root_show.value = "True";
        Alerts.alert("확인", "반려사유를 입력하세요.", "OK").then(function (x) {});
        root_show.value = "True";
    } else {

        var data = {
            V_TYPE: 'C_APPR_R',
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
                    items_appr_line.clear();
                    remark_list.clear();

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

                        if (data.resultList[i].APP_REMARK != null) {
                            remark_list.add({
                                USR_NM: data.resultList[i].USR_NM,
                                APP_REMARK: data.resultList[i].APP_REMARK,
                                JIKGUB: data.resultList[i].JIKGUB,
                            });
                        }
                        items_appr_line.add({
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
                console.log("catch Error : " + err);
                console.log("DB Failed.");
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) {});
            });

    }

}

function line_add_btn() {
    line_list.clear();
    var url = "http://123.142.124.161:8080/Fuse_Customer.jsp";

    var data = {
        V_TYPE: 'C_APPR_LINE_LIST',
        V_BP_CD: G_BP_CD,
        V_APP_NO: APP_NO.value,
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

            console.log(status);
            console.log(response_ok);

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

                    line_list.add({
                        line_nm: data.resultList[i].USR_NM,
                        line_id: data.resultList[i].USR_ID,
                    });

                }
            }
        })
        .catch(function (err) {
            console.log("catch Error : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });

}

function line_ok_btn() {
    var data = {
        V_TYPE: 'C_APPR_LINE_INSERT',
        V_BP_CD: G_BP_CD,
        V_USR_ID: G_USR_ID,
        V_APP_NO: APP_NO.value,
        V_ADD_USR_ID: chk_line_usr.value,
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
                items_appr_line.clear();

                for (var i = 0; i < data.resultList.length; i++) {
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

                    items_appr_line.add({
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
                //root_show.value = "False";
            }

        })
        .catch(function (err) {
            console.log("catch Error : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });
}

Lifecycle.on("enteringForeground", function () {
    console.log("On Launch Test111111111111111");

    btnRefresh();
});

/* 결재진행함 back btn */
function backBtnClick(route) {
    if(page_name == 'c_appr') {
        router.goto("c_menu");
    }
}

/*서브메뉴 back btn - 이미지 버튼*/
function btnBackClick_appr() {
    return_text.value = '';
    page_name = 'c_appr';
    router_appr.goBack();
    //btnRefresh();
}
/*서브메뉴 back btn - 디바이스 뒤로가기*/
function sub_appr_back() {
    return_text.value = '';
    page_name = 'c_appr';
    //btnRefresh();
}
function backBtn_ios(data) {
    if (Environment.ios || Environment.preview) {
        router.goto("c_menu");
    }
}

function open_file1(args) {

    var url = "http://123.142.124.161:8080/mro_data/";

    Alerts.confirm("첨부파일1", FILE_NM1.value + "\n\n다운로드 하시겠습니까?", "YES", "NO").then(function(x) {
        if(x) {
            InterApp.launchUri(url + FILE_PC1.value);
        }
    });

}
function open_file2(args) {

    var url = "http://123.142.124.161:8080/mro_data/";

    Alerts.confirm("첨부파일2", FILE_NM2.value + "\n\n다운로드 하시겠습니까?", "YES", "NO").then(function(x) {
        if(x) {
            InterApp.launchUri(url + FILE_PC2.value);
        }
    });

}
function open_file3(args) {

    var url = "http://123.142.124.161:8080/mro_data/";

    Alerts.confirm("첨부파일3", FILE_NM3.value + "\n\n다운로드 하시겠습니까?", "YES", "NO").then(function(x) {
        if(x) {
            InterApp.launchUri(url + FILE_PC3.value);
        }
    });

}
module.exports = {

    appr_currentType: appr_currentType,
    appr_type: appr_type,
    modes: modes,
    currentMode: currentMode,
    cycleClick: cycleClick,
    typesClick: typesClick,

    items: items,
    remark_list: remark_list,

    stsCircleColor1: stsCircleColor1,
    APP_STATUS: APP_STATUS,
    APP_STATUS_NM: APP_STATUS_NM,
    APP_TITLE: APP_TITLE,
    APP_USR_NM: APP_USR_NM,
    APP_DT: APP_DT,
    APP_PO_AMT: APP_PO_AMT,
    AMT: AMT,
    REMARK: REMARK,
    po_appr_cnt: po_appr_cnt,
    ok_flag: ok_flag,
    return_flag: return_flag,
    ok_flag_visible: ok_flag_visible,
    return_flag_visible: return_flag_visible,

    endLoading: endLoading,
    reloadHandler: reloadHandler,
    isLoading: isLoading,

    clicked_appr: clicked_appr,
    btnBackClick_appr: btnBackClick_appr,

    items_appr_line: items_appr_line,
    items_dtl: items_dtl,

    APP_NO: APP_NO,
    USR_NM: USR_NM,
    APP_DT_H: APP_DT_H,
    APP_TITLE: APP_TITLE,
    APP_TEXT: APP_TEXT,
    RETURN_REMARK: RETURN_REMARK,
    APP_PO_NO: APP_PO_NO,
    ITEM_DT: ITEM_DT,

    abdBtn1Click: abdBtn1Click,
    abdBtn2Click: abdBtn2Click,
    abdBtn3Click: abdBtn3Click,

    apprBtn1flag: apprBtn1flag,
    apprBtn2flag: apprBtn2flag,
    apprBtn3flag: apprBtn3flag,
    apprBtn4flag: apprBtn4flag,

    msg_text: msg_text,
    return_text: return_text,
    root_show: root_show,
    return_remark_yn: return_remark_yn,

    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,
    g_DATE_DAY: g_DATE_DAY,
    g_BP_NM_obs: g_BP_NM_obs,
    g_USR_NM_obs: g_USR_NM_obs,

    chk_bp_cd: chk_bp_cd,
    chk_line_usr: chk_line_usr,

    line_list: line_list,
    line_nm: line_nm,
    line_id: line_id,

    line_add_btn: line_add_btn,
    line_ok_btn: line_ok_btn,
    day90: day90,
    device: device,

    backBtnClick: backBtnClick,
    backBtn_ios: backBtn_ios,
    sub_appr_back: sub_appr_back,

    FILE_NM1: FILE_NM1,
    FILE_PC1: FILE_PC1,
    FILE_NM2: FILE_NM2,
    FILE_PC2: FILE_PC2,
    FILE_NM3: FILE_NM3,
    FILE_PC3: FILE_PC3,

    open_file1: open_file1,
    open_file2: open_file2,
    open_file3: open_file3,
}