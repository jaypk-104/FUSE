var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var Alerts = require("FuseJS/Alerts");
var vibration = require('FuseJS/Vibration');
var deviceToast = require("deviceToast");

var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");
if(Environment.ios || Environment.preview) {
    device = "Visible";
} 

var items = Observable();
var stsCircleColor1 = Observable();
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
var currentMode = Observable(2); //1 30days - default
var inq_currentType = Observable(2);

var return_text = Observable();
var line_list = Observable(); //견적단가합의 - 결재자추가, 결재자리스트

var APP_INQ_AMT = Observable(); //결재진행팝업의 변수들
var APP_USR_NM = Observable();
var APP_DT = Observable();
var APP_H = Observable();
var APP_D = Observable();
var APP_INQ_NO = Observable();

var line_list_added = Observable(); //추가된 결의자 목록
var added_seq = Observable();
var added_id = Observable();
var added_nm = Observable();
var added_jikgub = Observable();
var added_dept_nm = Observable();
var chk_line_usr = Observable();


var inq_type = [{
        label: "전체보기"
    },
    {
        label: "견적진행중"
    },
    {
        label: "단가합의대상"
    },
    {
        label: "단가합의완료"
    },
    {
        label: "재견적진행중"
    },
    {
        label: "견적취소"
    },
    {
        label: "견적포기"
    },
    {
        label: "결재진행중"
    },
];

var root_show = Observable("");
var inq_cnt = Observable(false);
var pop_appr = Observable(false); //단가합의 결재자추가 팝업

var addOk = Observable(false);


var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";

var g_BP_NM_obs = Observable(g_BP_NM);
var g_USR_NM_obs = Observable(g_USR_NM);
/*

G_USR_ID = 'maintanance';
var g_BP_NM_obs = 'test';
var g_USR_NM_obs = 'test';
G_BP_CD = '06611';
G_BP_CD = '06611';
G_USR_ID = 'maintanance';
var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";
*/

// smaster
// hsnetw1

var chk_bp_cd = G_BP_CD == '05911' ? Observable("Visible") :  Observable("Hidden") ; //SHPAC(05911)이면 '단가합의' 보이기. 
var chk_bp_cd_swipe = G_BP_CD == '05911' ? Observable("Swipe") :  Observable("None") ; //SHPAC(05911)이면 '단가합의' 보이기. 

if(G_BP_CD == '05911' || G_BP_CD == '06611' || G_BP_CD == '88881' || G_BP_CD == '77777' || G_BP_CD == '06730') {
    chk_bp_cd = Observable("Visible");
    chk_bp_cd_swipe = Observable("Swipe");
} else {
    chk_bp_cd = Observable("Hidden");
    chk_bp_cd_swipe = Observable("None");
}

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

var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + ("0" + (new Date().getMonth()+1)).slice(-2));
var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable( week_day );

var inq_visible_yn = Observable("Hidden");
var inq_visible_yn1 = Observable("Hidden");
var inq_visible_yn2 = Observable("Hidden");
var inq_visible_yn3_donga = Observable("Hidden");

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
    var inq_status = '';

    if (inq_currentType.value == 0) { //전체보기
        inq_status = 'ALL'
    } else if (inq_currentType.value == 1) { // 견적진행중
        inq_status = 'A'
    } else if (inq_currentType.value == 2) { // 단가합의대상
        inq_status = 'B'
    } else if (inq_currentType.value == 3) { // 단가합의완료
        inq_status = 'D'
    } else if (inq_currentType.value == 4) { //재견적진행중
        inq_status = 'C'
    } else if (inq_currentType.value == 5) { //견적취소
        inq_status = 'E'
    } else if (inq_currentType.value == 6) { //견적포기
        inq_status = 'F'
    } else if (inq_currentType.value == 7) { //결재진행중
        inq_status = 'H'
    }

   
    var data = {
        V_TYPE: 'C_INQ_S',
        V_USR_ID: G_USR_ID,
        V_BP_CD: G_BP_CD,
        V_FR_DT: getDate(fr_date),
        V_TO_DT: getDate(to_date),
        V_INQ_STATUS: inq_status
    };

    console.log(url);
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
            console.log(responseObject);

            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);
            var flag = '';

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {
                    
                    inq_visible_yn.value = "Hidden"; //쩜쩜쩜
                    inq_visible_yn1.value = "Hidden"; //재견적요청
                    inq_visible_yn2.value = "Hidden"; //단가합의
                    inq_visible_yn3_donga.value = "Hidden"; //결재진행 - 동아화성

                    var sts_color = '';
                    if (data.resultList[i].INQ_STATUS == 'A') { //견적진행중
                        sts_color = '#70B988';
                        data.resultList[i].INQ_STATUS_NM = '견적\n진행중';
                    } else if (data.resultList[i].INQ_STATUS == 'B') { //단가합의대상
                        sts_color = '#F78DB9';
                        data.resultList[i].INQ_STATUS_NM = '단가합의\n대상';
                        inq_visible_yn.value = "Visible";
                        inq_visible_yn1.value = "Visible";

                        if(G_BP_CD == '88881' || G_BP_CD == '06611') { //동아화성일 경우 '단가합의' -> '결재진행'
                            inq_visible_yn3_donga.value = "Visible";
                        } else {
                            inq_visible_yn2.value = "Visible";
                        }
                        
                        if(G_BP_CD == '77777') { //77777일 경우 '단가합의', '결재진행' 둘다 보이게.
                            inq_visible_yn3_donga.value = "Visible";
                            inq_visible_yn2.value = "Visible";
                        }

                    } else if (data.resultList[i].INQ_STATUS == 'D') { //단가합의완료
                        sts_color = '#70a0e0';
                        inq_visible_yn.value = "Hidden"; //쩜쩜쩜
                        data.resultList[i].INQ_STATUS_NM = '단가합의\n완료';
                    } else if (data.resultList[i].INQ_STATUS == 'C') { //재견적진행중
                        sts_color = '#84e0a1';
                        data.resultList[i].INQ_STATUS_NM = '재견적\n진행중';
                    } else if (data.resultList[i].INQ_STATUS == 'E') { //견적취소
                        sts_color = '#efcf8f';
                        data.resultList[i].INQ_STATUS_NM = '견적취소';
                        inq_visible_yn.value = "Visible";
                        inq_visible_yn1.value = "Visible";
                    } else if (data.resultList[i].INQ_STATUS == 'F') { //견적포기
                        sts_color = '#efb134';
                        data.resultList[i].INQ_STATUS_NM = '견적포기';
                        inq_visible_yn.value = "Visible";
                        inq_visible_yn1.value = "Visible";
                    } else if (data.resultList[i].INQ_STATUS == 'H') { //결재진행중
                        sts_color = '#37b25e';
                        data.resultList[i].INQ_STATUS_NM = '결재\n진행중';
                    } else if (data.resultList[i].INQ_STATUS == 'I') { //결재반려
                        sts_color = '#d89308';
                        data.resultList[i].INQ_STATUS_NM = '결재반려';
                    }
                    
                    items.add({
                        INQ_STATUS_NM: data.resultList[i].INQ_STATUS_NM,
                        INQ_USR_NM: data.resultList[i].INQ_USR_NM,
                        INQ_DT: data.resultList[i].INQ_DT,
                        INQ_HOPE_DT: data.resultList[i].INQ_HOPE_DT,
                        ITEM_CD: data.resultList[i].ITEM_CD,
                        ITEM_NM: data.resultList[i].ITEM_NM,
                        SPEC: data.resultList[i].SPEC,
                        MAKER: data.resultList[i].MAKER,
                        INQ_QTY: numberWithCommas(data.resultList[i].INQ_QTY),
                        INQ_PRC: numberWithCommas(data.resultList[i].INQ_PRC),
                        INQ_AMT: numberWithCommas(data.resultList[i].INQ_AMT),
                        INQ_NO: data.resultList[i].INQ_NO,
                        
                        REMARK_ADTOCUST: data.resultList[i].REMARK_ADTOCUST,
                        root_show: "False", 

                        inq_visible_yn: inq_visible_yn.value,
                        inq_visible_yn1: inq_visible_yn1.value,
                        inq_visible_yn2: inq_visible_yn2.value,
                        inq_visible_yn3_donga: inq_visible_yn3_donga.value,

                        stsCircleColor1: sts_color
                    });
                }
            }
            if(items.length == 0) {
                inq_cnt.value = true;
            } else {
                inq_cnt.value = false;
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

    var inq_status = '';
    /*
    if (inq_currentType.value == 0) { //전체보기
        inq_status = 'ALL'
    } else if (inq_currentType.value == 1) { // 견적진행중
        inq_status = 'A'
    } else if (inq_currentType.value == 2) { // 단가합의대상
        inq_status = 'B'
    } else if (inq_currentType.value == 3) { // 단가합의완료
        inq_status = 'D'
    } else if (inq_currentType.value == 4) { //재견적진행중
        inq_status = 'C'
    } else if (inq_currentType.value == 5) { //견적취소
        inq_status = 'E'
    } else if (inq_currentType.value == 6) { //견적포기
        inq_status = 'F'
    } else if (inq_currentType.value == 7) { //결재진행중
        inq_status = 'H'
    }
*/


    if (type == 'type') {
        if (inq_currentType.value == 7) { //전체보기
            inq_status = 'ALL'
        } else if (inq_currentType.value == 0) { // 견적진행중
            inq_status = 'A'
        } else if (inq_currentType.value == 1) { // 단가합의대상
            inq_status = 'B'
        } else if (inq_currentType.value == 2) { // 단가합의완료
            inq_status = 'D'
        } else if (inq_currentType.value == 3) { //재견적진행중
            inq_status = 'C'
        } else if (inq_currentType.value == 4) { //견적취소
            inq_status = 'E'
        } else if (inq_currentType.value == 5) { //견적포기
            inq_status = 'F'
        } else if (inq_currentType.value == 6) { //결재진행중
            inq_status = 'H'
        }
    } else {
        if (inq_currentType.value == 0) { //전체보기
            inq_status = 'ALL'
        } else if (inq_currentType.value == 1) { // 견적진행중
            inq_status = 'A'
        } else if (inq_currentType.value == 2) { // 단가합의대상
            inq_status = 'B'
        } else if (inq_currentType.value == 3) { // 단가합의완료
            inq_status = 'D'
        } else if (inq_currentType.value == 4) { //재견적진행중
            inq_status = 'C'
        } else if (inq_currentType.value == 5) { //견적취소
            inq_status = 'E'
        } else if (inq_currentType.value == 6) { //견적포기
            inq_status = 'F'
        } else if (inq_currentType.value == 7) { //결재진행중
            inq_status = 'H'
        }
    }

    items.clear();

    var data = {
        V_TYPE: 'C_INQ_S',
        V_USR_ID: G_USR_ID,
        V_BP_CD: G_BP_CD,
        V_FR_DT: getDate(fr_date),
        V_TO_DT: getDate(to_date),
        V_INQ_STATUS: inq_status
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
            console.log(responseObject);

            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);
            var flag = '';

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {

                    var sts_color = '';
                    
                    inq_visible_yn.value = "Hidden"; //쩜쩜쩜
                    inq_visible_yn1.value = "Hidden"; //재견적요청
                    inq_visible_yn2.value = "Hidden"; //단가합의
                    inq_visible_yn3_donga.value = "Hidden"; //결재진행 - 동아화성

                    if (data.resultList[i].INQ_STATUS == 'A') { //견적진행중
                        sts_color = '#70B988';
                        data.resultList[i].INQ_STATUS_NM = '견적\n진행중';
                    } else if (data.resultList[i].INQ_STATUS == 'B') { //단가합의대상
                        sts_color = '#F78DB9';
                        data.resultList[i].INQ_STATUS_NM = '단가합의\n대상';
                        inq_visible_yn.value = "Visible";
                        inq_visible_yn1.value = "Visible";
                        
                        if(G_BP_CD == '88881' || G_BP_CD == '06611' || G_BP_CD == '77777') { //동아화성일 경우 '단가합의' -> '결재진행'
                            inq_visible_yn3_donga.value = "Visible";
                        } else {
                            inq_visible_yn2.value = "Visible";
                        }

                        if(G_BP_CD == '77777') { //77777이면 단가합의, 결재진행 둘 다 보이게.
                            inq_visible_yn3_donga.value = "Visible";
                            inq_visible_yn2.value = "Visible";
                        }
                        
                    } else if (data.resultList[i].INQ_STATUS == 'D') { //단가합의완료
                        sts_color = '#70a0e0';
                        data.resultList[i].INQ_STATUS_NM = '단가합의\n완료';
                    } else if (data.resultList[i].INQ_STATUS == 'C') { //재견적진행중
                        sts_color = '#84e0a1';
                        data.resultList[i].INQ_STATUS_NM = '재견적\n진행중';
                    } else if (data.resultList[i].INQ_STATUS == 'E') { //견적취소
                        sts_color = '#efcf8f';
                        data.resultList[i].INQ_STATUS_NM = '견적취소';
                        inq_visible_yn.value = "Visible";
                        inq_visible_yn1.value = "Visible";
                    } else if (data.resultList[i].INQ_STATUS == 'F') { //견적포기
                        sts_color = '#efb134';
                        data.resultList[i].INQ_STATUS_NM = '견적포기';
                        inq_visible_yn.value = "Visible";
                        inq_visible_yn1.value = "Visible";
                    } else if (data.resultList[i].INQ_STATUS == 'H') { //결재진행중
                        sts_color = '#37b25e';
                        data.resultList[i].INQ_STATUS_NM = '결재\n진행중';
                    } else if (data.resultList[i].INQ_STATUS == 'I') { //결재반려
                        sts_color = '#d89308';
                        data.resultList[i].INQ_STATUS_NM = '결재반려';
                    } 

                    items.add({
                        INQ_STATUS_NM: data.resultList[i].INQ_STATUS_NM,
                        INQ_USR_NM: data.resultList[i].INQ_USR_NM,
                        INQ_DT: data.resultList[i].INQ_DT,
                        INQ_HOPE_DT: data.resultList[i].INQ_HOPE_DT,
                        ITEM_CD: data.resultList[i].ITEM_CD,
                        ITEM_NM: data.resultList[i].ITEM_NM,
                        SPEC: data.resultList[i].SPEC,
                        MAKER: data.resultList[i].MAKER,
                        INQ_QTY: numberWithCommas(data.resultList[i].INQ_QTY),
                        INQ_PRC: numberWithCommas(data.resultList[i].INQ_PRC),
                        INQ_AMT: numberWithCommas(data.resultList[i].INQ_AMT),
                        INQ_NO: data.resultList[i].INQ_NO,
                        REMARK_ADTOCUST: data.resultList[i].REMARK_ADTOCUST,
                        root_show: "False",

                        inq_visible_yn: inq_visible_yn.value,
                        inq_visible_yn1: inq_visible_yn1.value,
                        inq_visible_yn2: inq_visible_yn2.value,
                        
                        inq_visible_yn3_donga: inq_visible_yn3_donga.value,

                        stsCircleColor1: sts_color
                    });
                }
            }

            if(items.length == 0) {
                inq_cnt.value = true;
            } else {
                inq_cnt.value = false;
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

function abdYesClick(arg) {
    var INQ_NO = arg.data.INQ_NO; 

    console.log(arg.data.INQ_NO);
    console.log('yes click');

    var data = {
        V_TYPE: 'C_INQ_I',
        V_USR_ID: G_USR_ID,
        V_BP_CD: G_BP_CD,
        V_INQ_NO: INQ_NO
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
        console.log(responseObject);

        btnRefresh();
        deviceToast.ToastIt('단가합의완료');
    })
    .catch(function (err) {
        console.log("catch Error : " + err);
        console.log("DB Failed.");
        Alerts
            .alert("Error", "Network Error : " + err, "OK")
            .then(function (x) {});
    });
}

/* 재견적요청 yes 버튼*/
function abdReClick(arg) {
    var INQ_NO = arg.data.INQ_NO; 

    var data = {
        V_TYPE: 'C_INQ_R',
        V_USR_ID: G_USR_ID,
        V_BP_CD: G_BP_CD,
        V_INQ_NO: INQ_NO,
        V_REMARK: return_text.value
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
        console.log(responseObject);
        return_text.value = '';

        btnRefresh();
        deviceToast.ToastIt('재견적 요청완료');
    })
    .catch(function (err) {
        console.log("catch Error : " + err);
        console.log("DB Failed.");
        Alerts
            .alert("Error", "Network Error : " + err, "OK")
            .then(function (x) {});
    });
   
}
/* 결재진행 yes 버튼 */
function apprYesClick(arg) {
    console.log('결재진행 yes');
    pop_appr.value = true;
    line_list_added.clear();

    APP_INQ_NO.value = arg.data.INQ_NO;
    APP_INQ_AMT.value = arg.data.INQ_AMT;
    APP_USR_NM.value = g_USR_NM_obs.value;
    APP_DT.value = getDate(new Date());

    APP_H.value = '';
    APP_D.value = '';


    
    console.log('결재진행팝업진입');

    var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";

    var data = {
        V_TYPE: 'C_APPR_LINE_LIST_INQ_ADD',
        V_BP_CD: G_BP_CD,
        V_USR_ID: G_USR_ID
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

                    line_list_added.add({
                        added_seq: 1,
                        added_id: data.resultList[i].USR_ID,
                        added_nm: data.resultList[i].USR_NM,
                        added_jikgub: data.resultList[i].JIKGUB,
                        added_dept_nm: data.resultList[i].DEPT_NM,

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


function backBtn_ios() {
    router.goto("c_menu");
}

/* 결의자추가버튼 클릭 */
function addBtn2() {
    console.log('결의자추가');

    line_list.clear();
    var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";

    var data = {
        V_TYPE: 'C_APPR_LINE_LIST_INQ',
        V_BP_CD: G_BP_CD,
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

/* 결의자추가 - 추가버튼 클릭 */
function line_ok_btn() {
    var flag = '';
    chk_line_usr.value == '';

    for (var i = 0; i < line_list_added.length; i++) {
        var item = line_list_added.getAt(i);
        if (item.added_id == chk_line_usr.value) {
            flag = 'F';
            break;        
        } else {
            flag = 'T'
        }
    }

    if(flag == 'F') { 
        console.log('이미 결재라인에 존재합니다.');

        Alerts
        .alert("확인", "이미 결재라인에 존재합니다.", "확인")
        .then(function (x) {});
    } else {
        var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";

        var data = {
            V_TYPE: 'C_APPR_LINE_LIST_INQ_ADD',
            V_BP_CD: G_BP_CD,
            V_USR_ID: chk_line_usr.value
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
    
                        line_list_added.add({
                            added_seq: line_list_added.length + 1,
                            added_id: data.resultList[i].USR_ID,
                            added_nm: data.resultList[i].USR_NM,
                            added_jikgub: data.resultList[i].JIKGUB,
                            added_dept_nm: data.resultList[i].DEPT_NM,
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
    
}

/* 최종으로!! 결재요청버튼 클릭 */
function apprReqClick() {
    console.log('결재요청');
    console.log(APP_INQ_NO.value);
    console.log(APP_INQ_AMT.value);
    console.log(APP_DT.value);
    console.log(APP_H.value.length);
    console.log(APP_D.value.length);
    console.log(JSON.stringify(line_list_added));

    var line = new Array();

    if(line_list_added.length <= 1) {
        addOk.value = "false";
        console.log('결의자를 추가하세요.');
        Alerts
                .alert("확인", "결의자를 추가하세요.", "OK")
                .then(function (x) {});
    } else if(APP_H.value.length == 0) {
        addOk.value = "false";
        console.log('제목을 입력하세요.');
        Alerts
                .alert("확인", "제목을 입력하세요", "OK")
                .then(function (x) {});
    } else if(APP_D.value.length == 0) {
        addOk.value = "false";
        console.log('내용을 입력하세요.');
        Alerts
                .alert("확인", "내용을 입력하세요", "OK")
                .then(function (x) {});
    } else {
        
        for (var i = 0; i < line_list_added.length; i++) {
            var item = line_list_added.getAt(i);
            line.push(item.added_id);
        }
    
        var url = "http://123.142.124.161:8080/Fuse_Customer_INQ.jsp";
    
        var data = {
            V_TYPE: 'C_APPR_LINE_LIST_INSERT',
            V_BP_CD: G_BP_CD,
            V_USR_ID: G_USR_ID,
            V_INQ_NO: APP_INQ_NO.value,
            V_APP_DT: APP_DT.value,
            V_APP_H: APP_H.value,
            V_APP_D: APP_D.value,
    
            V_LINES: line
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
                addOk.value = "true";
                vibration.vibrate(0.8);
                deviceToast.ToastIt('견적결재 등록완료');
    
                btnRefresh();
    
                // console.log('return app_no ' + data.resultList[0].APP_NO);
    
                // //결재라인 사람별로 insert!!!!
                // var data = {
                //     V_TYPE: 'C_APPR_LINE_LIST_INSERT2',
                //     V_BP_CD: G_BP_CD,
                //     V_USR_ID: G_USR_ID,
                //     V_INQ_NO: data.resultList[0].APP_NO,
                //     V_LINES: APP_DT.value,
                //     V_APP_H: APP_H.value,
                //     V_APP_D: APP_D.value,
                // };
                
                // fetch(url, {
                //         method: 'POST',
                //         headers: {
                //             "Content-type": "application/json; charset=utf-8"
                //         },
                //         body: JSON.stringify(data)
                //     })
                //     .then(function (response) {
            
                //         status = response.status; // Get the HTTP status code
                //         response_ok = response.ok; // Is response.status in the 200-range?
            
                //         console.log(status);
                //         console.log(response_ok);
            
                //         if (status == 500) {
                //             console.log("DB Failed");
                //         } else {
                //             console.log("DB Success");
                //             return response.json();
                //         }
            
                //     })
                //     .then(function (responseObject) {
            
                //         var res = JSON.stringify(responseObject);
                //         var data = JSON.parse(res);
            
                //         console.log('return app_no ' + data.resultList[0].APP_NO);
            
                        
                //     })
                //     .catch(function (err) {
                //         console.log("catch Error : " + err);
                //         console.log("DB Failed.");
                //         Alerts
                //             .alert("Error", "Network Error : " + err, "OK")
                //             .then(function (x) {});
                //     });
    
                
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

function remove_line(arg) {
    console.log('라인삭제');
    console.log(arg);
    console.log(JSON.stringify(arg));

    for (var i = 0; i < line_list_added.length; i++) {
        var item = line_list_added.getAt(i);
        console.log('1' + item.added_id );
        console.log('2' + arg.data.added_id );

        if(arg.data.added_id == G_USR_ID) {
            console.log('본인삭제 xx');
            
            Alerts
                .alert("확인", "첫번째 결의자(본인)은 삭제할 수 없습니다.", "OK")
                .then(function (x) {});
        } else {
            if (item.added_id == arg.data.added_id) {
                line_list_added.remove(item);
            }
        }
    }
}
Lifecycle.on("enteringForeground", function () {
    btnRefresh();
});

module.exports = {
    inq_currentType: inq_currentType,
    inq_type: inq_type,

    modes: modes,
    currentMode: currentMode,
    cycleClick: cycleClick,
    typesClick: typesClick,
    
    items: items,
    return_text: return_text,
    root_show: root_show,
    
    stsCircleColor1: stsCircleColor1,
    endLoading: endLoading,
    reloadHandler: reloadHandler,
    isLoading: isLoading,
    
    abdYesClick: abdYesClick,
    abdReClick: abdReClick,
    apprYesClick: apprYesClick,

    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,
    g_DATE_DAY: g_DATE_DAY,
    g_BP_NM_obs: g_BP_NM_obs,
    g_USR_NM_obs: g_USR_NM_obs,

    inq_cnt:inq_cnt,
    chk_bp_cd: chk_bp_cd,
    chk_bp_cd_swipe: chk_bp_cd_swipe,

    inq_visible_yn: inq_visible_yn,
    inq_visible_yn1: inq_visible_yn1,
    inq_visible_yn2: inq_visible_yn2,
    inq_visible_yn3_donga: inq_visible_yn3_donga,

    
    backBtn_ios:backBtn_ios,
    pop_appr: pop_appr,

    addBtn2: addBtn2,
    line_list: line_list,
    addOk: addOk, //결재요청완료!

    APP_INQ_AMT: APP_INQ_AMT,
    APP_USR_NM: APP_USR_NM,
    APP_DT: APP_DT,
    APP_H: APP_H,
    APP_D: APP_D,
    APP_INQ_NO: APP_INQ_NO,

    apprReqClick: apprReqClick,
    line_list_added: line_list_added,
    added_id: added_id,
    added_nm: added_nm,
    added_jikgub: added_jikgub,
    added_dept_nm: added_dept_nm,
    added_seq: added_seq,

    line_ok_btn: line_ok_btn,
    chk_line_usr: chk_line_usr,
    remove_line: remove_line

}