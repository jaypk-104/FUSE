var Observable = require("FuseJS/Observable");
var Lifecycle2 = require('FuseJS/Lifecycle');
var deviceToast = require("deviceToast");
var Alerts = require("FuseJS/Alerts");


var items2 = Observable();
var SUPP_STATUS_NM2 = Observable();
var BP_NM2 = Observable();
var INQ_HOPE_DT2 = Observable();
var SUPP_INQ_DT2 = Observable();
var ITEM_CD2 = Observable();
var ITEM_NM2 = Observable();
var SPEC2 = Observable();
var MAKER2 = Observable();
var INQ_QTY2 = Observable();
var UNIT2 = Observable();
var INQ_PRC2 = Observable();
var INQ_AMT2 = Observable();
var REMARK2 = Observable();
var RMARK_SUPPAD2 = Observable();

var INQ_NO2 = Observable();
var INQ_SEQ2 = Observable();
var INQ_USR_NM = Observable();

var currentMode = Observable(0);
var modes = [
    { label: "7 DAYS" },
    { label: "1 MONTH" },
    { label: "90 DAYS" }
];

var currentType = Observable(0);
var types = [
    { label: "전체보기" },
    { label: "견적접수" },
    { label: "재견적접수" },
    { label: "견적제출" },
    { label: "견적취소" },
    { label: "견적포기" },
    { label: "견적종료" }
];

var dtl_STATUS = Observable();
var dtl_BP_NM = Observable();
var dtl_INQ_NO = Observable();
var dtl_INQ_SEQ = Observable();
var dtl_END_INQ_DT = Observable();
var dtl_SUPP_INQ_DT = Observable();
var dtl_ITEM_CD = Observable();
var dtl_ITEM_NM = Observable();
var dtl_SPEC = Observable();
var dtl_MAKER = Observable();
var dtl_INQ_QTY = Observable();
var dtl_UNIT = Observable();
var dtl_INQ_PRC = Observable();
var dtl_INQ_AMT = Observable();
var dtl_REMARK = Observable();
var dtl_RMARK_SUPPAD = Observable();
var dtl_IMG_FILE_NM = Observable();
var dtl_IMG_FILE_PC = Observable();
var dtl_INQ_USR_NM = Observable();

var img_url2 = Observable();
var stsCircleColor = Observable();
var s_inq02_cnt = Observable(false);

var img_visible_sub = Observable(false);

//var url = "http://123.142.124.166:8080/Fuse_Supplier.jsp";
var url = "http://123.142.124.161:8080/Fuse_Supplier.jsp";


/* 검색 필터 클릭 시 데이터 조회 */
function getData(type) {

    items2.clear();

    var to_date = new Date();
    var fr_date = new Date();

    // console.log('currentType: ' + currentType);
    // console.log('currentMode.value: ' + currentMode.value);

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

    if (type == 'type') {
        if (currentType.value == 0) {
            inq_status = 'READY'
        } else if (currentType.value == 1) {
            inq_status = 'RE-READY'
        } else if (currentType.value == 2) {
            inq_status = 'ALREADY'
        } else if (currentType.value == 3) {
            inq_status = 'CANCEL'
        } else if (currentType.value == 4) {
            inq_status = 'GIVEUP'
        } else if (currentType.value == 5) {
            inq_status = 'COMPLETE'
        } else if (currentType.value == 6) {
            inq_status = 'ALL'
        }
    } else {
        if (currentType.value == 1) { //견적접수 A
            inq_status = 'READY'
        } else if (currentType.value == 2) { //재견적접수 B
            inq_status = 'RE-READY'
        } else if (currentType.value == 3) { //견적제출 C
            inq_status = 'ALREADY'
        } else if (currentType.value == 4) { //견적취소 D
            inq_status = 'CANCEL'
        } else if (currentType.value == 5) { //견적포기 F
            inq_status = 'GIVEUP'
        } else if (currentType.value == 6) { //견적종료 E G
            inq_status = 'COMPLETE'
        } else if (currentType.value == 0) { //전체보기
            inq_status = 'ALL'
        }
    }

    console.log('inq_status: ' + inq_status);

    var data = {
        V_TYPE: 'S2',
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
            var res = JSON.stringify(responseObject);
            var data = JSON.parse(res);

            items2.clear();
            for (var i in responseObject.resultList) {
                var data = responseObject.resultList[i];
                var sts_color = '';

                if (data.SUPP_STATUS == 'A') { //견적접수 A
                    sts_color = '#F78DB9';
                } else if (data.SUPP_STATUS == 'B') { //재견적접수 B
                    sts_color = '#F78DB9';
                } else if (data.SUPP_STATUS == 'C') { //견적제출 C
                    sts_color = '#70B988';
                } else if (data.SUPP_STATUS == 'D') { //견적취소 D
                    sts_color = '#efb134';
                } else if (data.SUPP_STATUS == 'F') { //견적포기 F
                    sts_color = '#efb134';
                } else if (data.SUPP_STATUS == 'E' || data.SUPP_STATUS == 'G') { //견적종료 E G
                    sts_color = '#70a0e0';
                } else {
                    sts_color = '#F78DB9';
                }

                items2.add({
                    SUPP_STATUS2: data.SUPP_STATUS,
                    SUPP_STATUS_NM2: data.SUPP_STATUS_NM,
                    BP_NM2: data.BP_NM,
                    INQ_HOPE_DT2: data.INQ_HOPE_DT,
                    SUPP_INQ_DT2: data.SUPP_INQ_DT,
                    END_INQ_DT: data.END_INQ_DT,
                    ITEM_CD2: data.ITEM_CD,
                    ITEM_NM2: data.ITEM_NM,
                    SPEC2: data.SPEC,
                    MAKER2: data.MAKER,
                    INQ_QTY2: numberWithCommas(data.INQ_QTY),
                    UNIT2: data.UNIT,
                    INQ_PRC2: numberWithCommas(data.INQ_PRC),
                    INQ_AMT2: numberWithCommas(data.INQ_AMT),
                    REMARK2: data.REMARK2,
                    RMARK_SUPPAD2: data.RMARK_SUPPAD,

                    INQ_NO2: data.INQ_NO,
                    INQ_SEQ2: data.INQ_SEQ,

                    FILE_NM2: data.FILE_NM,
                    FILE_NM_PC2: data.FILE_NM_PC,

                    INQ_USR_NM: data.INQ_USR_NM,

                    stsCircleColor: sts_color
                });
            }

            if (items2.length == 0) {
                s_inq02_cnt.value = true;
            } else {
                s_inq02_cnt.value = false;
            }
        })
        .catch(function (err) {
            console.log("catch : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });

}

function dtl_imgClick() {
    img_url2.value = "http://123.142.124.161:8080/mro_data/" + dtl_IMG_FILE_PC.value;
    img_visible_sub.value = true;
}

/* 기간필터클릭 */
function cycleClick(arg) {
    getData('cycle');
}
/* 상태필터클릭 */
function typesClick(arg) {
    getData('type');
}



/* ******* 서브메뉴 ******* */
/* SubPage.ux 진입 시 데이터 호출 */
function clicked(arg) {
    var res = JSON.stringify(arg);
    var data = JSON.parse(res);

    router_inq.push("subPage");

    dtl_STATUS.value = arg.data.SUPP_STATUS_NM2;
    dtl_BP_NM.value = arg.data.BP_NM2;
    dtl_INQ_NO.value = arg.data.INQ_NO2;
    dtl_INQ_SEQ.value = arg.data.INQ_SEQ2;
    dtl_END_INQ_DT.value = arg.data.END_INQ_DT;
    dtl_SUPP_INQ_DT.value = arg.data.SUPP_INQ_DT2;
    dtl_ITEM_CD.value = arg.data.ITEM_CD2;
    dtl_ITEM_NM.value = arg.data.ITEM_NM2;
    dtl_SPEC.value = arg.data.SPEC2;
    dtl_MAKER.value = arg.data.MAKER2;
    dtl_INQ_QTY.value = arg.data.INQ_QTY2;
    dtl_UNIT.value = arg.data.UNIT2;
    dtl_INQ_PRC.value = arg.data.INQ_PRC2;
    dtl_INQ_AMT.value = arg.data.INQ_AMT2;
    dtl_REMARK.value = arg.data.REMARK2;
    dtl_RMARK_SUPPAD.value = arg.data.RMARK_SUPPAD2;

    dtl_IMG_FILE_NM.value = arg.data.FILE_NM2;
    dtl_IMG_FILE_PC.value = arg.data.FILE_NM_PC2;

    dtl_INQ_USR_NM.value = arg.data.INQ_USR_NM;

}

/*서브메뉴 back btn*/
function btnBackClick() {
    router_inq.goBack();
}


/* onLaunch */
Lifecycle2.on("enteringForeground", function () {
    getData('open');
});


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
    month = month >= 10
        ? month
        : '0' + month; //month 두자리로 저장
    var day = now.getDate(); //d
    day = day >= 10
        ? day
        : '0' + day; //day 두자리로 저장

    return year + '-' + month + '-' + day;
}

function page2Click() {
    getData('open');
}


module.exports = {
    cycleClick: cycleClick,
    clicked: clicked,
    dtl_imgClick: dtl_imgClick,
    page2Click: page2Click,

    typesClick: typesClick,
    btnBackClick: btnBackClick,

    modes: modes,
    currentMode: currentMode,
    types: types,
    currentType: currentType,
    items2: items2,
    SUPP_STATUS_NM2: SUPP_STATUS_NM2,
    BP_NM2: BP_NM2,
    INQ_HOPE_DT2: INQ_HOPE_DT2,
    SUPP_INQ_DT2: SUPP_INQ_DT2,
    ITEM_CD2: ITEM_CD2,
    ITEM_NM2: ITEM_NM2,
    SPEC2: SPEC2,
    MAKER2: MAKER2,
    INQ_QTY2: INQ_QTY2,
    UNIT2: UNIT2,
    INQ_PRC2: INQ_PRC2,
    INQ_AMT2: INQ_AMT2,
    RMARK_SUPPAD2: RMARK_SUPPAD2,
    REMARK2: REMARK2,
    INQ_NO2: INQ_NO2,
    INQ_SEQ2: INQ_SEQ2,

    dtl_STATUS: dtl_STATUS,
    dtl_BP_NM: dtl_BP_NM,
    dtl_INQ_NO: dtl_INQ_NO,
    dtl_INQ_SEQ: dtl_INQ_SEQ,
    dtl_END_INQ_DT: dtl_END_INQ_DT,
    dtl_SUPP_INQ_DT: dtl_SUPP_INQ_DT,
    dtl_ITEM_CD: dtl_ITEM_CD,
    dtl_ITEM_NM: dtl_ITEM_NM,
    dtl_SPEC: dtl_SPEC,
    dtl_MAKER: dtl_MAKER,
    dtl_INQ_QTY: dtl_INQ_QTY,
    dtl_UNIT: dtl_UNIT,
    dtl_INQ_PRC: dtl_INQ_PRC,
    dtl_INQ_AMT: dtl_INQ_AMT,
    dtl_REMARK: dtl_REMARK,
    dtl_RMARK_SUPPAD: dtl_RMARK_SUPPAD,
    dtl_IMG_FILE_NM: dtl_IMG_FILE_NM,
    dtl_IMG_FILE_PC: dtl_IMG_FILE_PC,
    dtl_INQ_USR_NM: dtl_INQ_USR_NM,

    stsCircleColor: stsCircleColor,
    img_visible_sub: img_visible_sub,
    img_url2: img_url2,

    s_inq02_cnt: s_inq02_cnt
}