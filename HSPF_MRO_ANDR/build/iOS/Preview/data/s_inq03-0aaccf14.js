var Observable = require("FuseJS/Observable");
var Lifecycle2 = require('FuseJS/Lifecycle');
var deviceToast = require("deviceToast");
var Alerts = require("FuseJS/Alerts");

var items3 = Observable();
var PO_STATUS_NM = Observable();
var PO_BP_NM = Observable();
var PO_ITEM_CD = Observable();
var PO_ITEM_NM = Observable();
var PO_DT = Observable();
var DLV_HOPE_DT = Observable();
var PO_QTY = Observable();
var PO_UNIT = Observable();
var PO_PRC = Observable();
var PO_NO = Observable();
var PO_SEQ = Observable();

var po_STATUS = Observable();
var po_BP_NM = Observable();
var po_PO_NO = Observable();
var po_PO_SEQ = Observable();
var po_PO_DT = Observable();
var po_DLVY_HOPE_DT = Observable();
var po_DLVY_AVL_DT = Observable();
var po_IN_NO = Observable();
var po_IN_DT = Observable();
var po_ITEM_CD = Observable();
var po_ITEM_NM = Observable();
var po_SPEC = Observable();
var po_MAKER = Observable();
var po_QTY = Observable();
var po_UNIT = Observable();
var po_PRC = Observable();
var po_AMT = Observable();
var po_ORDER_USER_NM = Observable();
var po_ORDER_DEPT_NM = Observable();
var po_REC_USR_NM = Observable();
var po_REC_DEPT_NM = Observable();
var po_CLAIM_NAME = Observable();
var po_DLVY_USR_NM = Observable();
var po_REMARK = Observable();

var po_stsCircleColor = Observable();

var po_currentMode = Observable(0);
var s_inq03_cnt = Observable(false);
var modes = [
    {label: "7 DAYS"},
    {label: "1 MONTH"},
    {label: "90 DAYS"}
];

var po_currentType = Observable(0);
var po_types = [
    {label: "전체보기"},
    {label: "상품발주"},
    {label: "발주접수"}, 
    {label: "거래명세표"},
    {label: "입고완료"},
    {label: "발주취소"}
];


//var url = "http://123.142.124.166:8080/Fuse_Supplier.jsp";
var url = "http://123.142.124.161:8080/Fuse_Supplier.jsp";

function btnTest1(obj) {

    var to_date = new Date();
    var fr_date = new Date();

    var type = '';

    /* 기간필터 */
    if (type == 'cycle') {
        if(po_currentMode.value == 0) {
            fr_date.setMonth(new Date().getMonth() - 1);
        } else if(po_currentMode.value == 1) {
            fr_date.setDate(new Date().getDate() - 90);
        } else if(po_currentMode.value == 2) {
            fr_date.setDate(new Date().getDate() - 7);
        } 
    } else {
        if(po_currentMode.value == 0) {
            fr_date.setDate(new Date().getDate() - 7);
        } else if(po_currentMode.value == 1) {
            fr_date.setMonth(new Date().getMonth() - 1);
        } else if(po_currentMode.value == 2) {
            fr_date.setDate(new Date().getDate() - 90);
        } 
    }

    /* 상태필터 */
    var po_status = '';

    if(type == 'type') {
        if(po_currentType.value == 0) {
            po_status = 'PO1'
        } else if(po_currentType.value == 1 ) {
            po_status = 'PO2'
        } else if(po_currentType.value == 2 ) {
            po_status = 'TAX'
        } else if(po_currentType.value == 3) {
            po_status = 'GR'
        } else if(po_currentType.value == 4) {
            po_status = 'CANCEL'
        } else if(po_currentType.value == 5) {
            po_status = 'ALL'
        }
    } else {
        if(po_currentType.value == 0) {
            po_status = 'ALL'
        } else if(po_currentType.value == 1 ) {
            po_status = 'PO1'
        } else if(po_currentType.value == 2) {
            po_status = 'PO2'
        } else if(po_currentType.value == 3) {
            po_status = 'TAX'
        } else if(po_currentType.value == 4) {
            po_status = 'GR'
        } else if(po_currentType.value == 5) {
            po_status = 'CANCEL'
        }
    }


    var data = {
        V_TYPE: 'S3',
        V_BP_CD: G_BP_CD,
        V_FR_DT: getDate(fr_date), 
        V_TO_DT: getDate(to_date),
        V_PO_STATUS : po_status
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

            items3.clear();
            for (var i in responseObject.resultList) {
                var data = responseObject.resultList[i];
                var sts_color = '';

                if(data.STATUS_CD == 'R') { //상품발주
                    sts_color = '#F78DB9';
                } else if(data.STATUS_CD == 'I') {  //발주접수
                    sts_color = '#70B988';
                } else if(data.STATUS_CD == 'PD' || data.STATUS_CD == 'P') {  //명세부분생성, 명세생성
                    sts_color = '#70a0e0';
                } else if(data.STATUS_CD == 'D' || data.STATUS_CD == 'O') {  //부분입고, 입고완료
                    sts_color = '#efb134';
                } else if(data.STATUS_CD == 'C') {  //발주취소
                    sts_color = '#0000005F';
                } else {
                    sts_color = '#56CCB4';
                }

                items3.add({
                    PO_NO: data.PO_NO,
                    PO_SEQ: data.PO_SEQ,
                    PO_STATUS_NM: data.STATUS,
                    PO_BP_NM: data.BP_NM,
                    PO_ITEM_CD: data.ITEM_CD,
                    PO_ITEM_NM: data.ITEM_NM,
                    PO_DT: data.ORDER_DT,
                    DLVY_HOPE_DT: data.DLVY_HOPE_DT,
                    DLVY_AVL_DT: data.DLVY_AVL_DT,
                    PO_QTY: numberWithCommas(data.ORDER_QTY),
                    PO_UNIT: data.UNIT,
                    PO_PRC: numberWithCommas(data.PRICE),
                    PO_SPEC: data.SPEC,
                    ORDER_USR_ID: data.ORDER_USR_ID,
                    ORDER_USER_NM: data.ORDER_USER_NM,
                    ORDER_DEPT_NM: data.ORDER_DEPT_NM,
                    REC_USR_ID: data.REC_USR_ID,
                    REC_USR_NM: data.REC_USR_NM,
                    REC_DEPT_NM: data.REC_DEPT_NM,
                    IN_DT: data.IN_DT,
                    IN_NO: data.IN_NO,
                    REMARK: data.REMARK,
                    DLVY_USR_NM: data.DLVY_USR_NM,
                    CLAIM_NAME: data.CLAIM_NAME,
                    PO_NO: data.ORDER_NO,
                    PO_SEQ: data.ORDER_SEQ,
                    PO_AMOUNT: data.AMOUNT,
                    PO_MAKER: data.MAKER,

                    po_stsCircleColor: sts_color
                });
                
            }
            if(items3.length == 0) {
                s_inq03_cnt.value = true;
            } else {
                s_inq03_cnt.value = false;
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

/* 검색 필터 클릭 시 데이터 조회 */
function getData(type) {
    items3.clear();
    
    var to_date = new Date();
    var fr_date = new Date();

    /* 기간필터 */
    if (type == 'cycle') {
        if(po_currentMode.value == 0) {
            fr_date.setMonth(new Date().getMonth() - 1);
        } else if(po_currentMode.value == 1) {
            fr_date.setDate(new Date().getDate() - 90);
        } else if(po_currentMode.value == 2) {
            fr_date.setDate(new Date().getDate() - 7);
        } 
    } else {
        if(po_currentMode.value == 0) {
            fr_date.setDate(new Date().getDate() - 7);
        } else if(po_currentMode.value == 1) {
            fr_date.setMonth(new Date().getMonth() - 1);
        } else if(po_currentMode.value == 2) {
            fr_date.setDate(new Date().getDate() - 90);
        } 
    }
    /* 상태필터 */
    var po_status = '';

    if(type == 'type') {
        if(po_currentType.value == 0) {
            po_status = 'PO1'
        } else if(po_currentType.value == 1 ) {
            po_status = 'PO2'
        } else if(po_currentType.value == 2 ) {
            po_status = 'TAX'
        } else if(po_currentType.value == 3) {
            po_status = 'GR'
        } else if(po_currentType.value == 4) {
            po_status = 'CANCEL'
        } else if(po_currentType.value == 5) {
            po_status = 'ALL'
        }
    } else {
        if(po_currentType.value == 0) {
            po_status = 'ALL'
        } else if(po_currentType.value == 1 ) {
            po_status = 'PO1'
        } else if(po_currentType.value == 2) {
            po_status = 'PO2'
        } else if(po_currentType.value == 3) {
            po_status = 'TAX'
        } else if(po_currentType.value == 4) {
            po_status = 'GR'
        } else if(po_currentType.value == 5) {
            po_status = 'CANCEL'
        }
    }

    var data = {
        V_TYPE: 'S3',
        V_BP_CD: G_BP_CD,
        V_FR_DT: getDate(fr_date), 
        V_TO_DT: getDate(to_date),
        V_PO_STATUS: po_status
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

            items3.clear();
            for (var i in responseObject.resultList) {
                var data = responseObject.resultList[i];
                var sts_color = '';

                if(data.STATUS_CD == 'R') { //상품발주
                    sts_color = '#F78DB9';
                } else if(data.STATUS_CD == 'I') {  //발주접수
                    sts_color = '#70B988';
                } else if(data.STATUS_CD == 'PD' || data.STATUS_CD == 'P') {  //명세부분생성, 명세생성
                    sts_color = '#70a0e0';
                } else if(data.STATUS_CD == 'D' || data.STATUS_CD == 'O') {  //부분입고, 입고완료
                    sts_color = '#efb134';
                } else if(data.STATUS_CD == 'C') {  //발주취소
                    sts_color = '#0000005F';
                } else {
                    sts_color = '#56CCB4';
                }

                
                if(data.STATUS_CD == 'PD') {
                    data.STATUS = '거래\n명세표\n부분생성';
                } else if (data.STATUS_CD == 'P') {
                    data.STATUS = '거래\n명세표\n생성';
                }

                items3.add({
                    PO_NO: data.PO_NO,
                    PO_SEQ: data.PO_SEQ,
                    PO_STATUS_NM: data.STATUS,
                    PO_BP_NM: data.BP_NM,
                    PO_ITEM_CD: data.ITEM_CD,
                    PO_ITEM_NM: data.ITEM_NM,
                    PO_DT: data.ORDER_DT,
                    DLVY_HOPE_DT: data.DLVY_HOPE_DT,
                    DLVY_AVL_DT: data.DLVY_AVL_DT,
                    PO_QTY: numberWithCommas(data.ORDER_QTY),
                    PO_UNIT: data.UNIT,
                    PO_PRC: numberWithCommas(data.PRICE),
                    PO_SPEC: data.SPEC,
                    PO_MAKER: data.MAKER,
                    ORDER_USR_ID: data.ORDER_USR_ID,
                    ORDER_USER_NM: data.ORDER_USER_NM,
                    ORDER_DEPT_NM: data.ORDER_DEPT_NM,
                    REC_USR_ID: data.REC_USR_ID,
                    REC_USR_NM: data.REC_USR_NM,
                    REC_DEPT_NM: data.REC_DEPT_NM,
                    IN_DT: data.IN_DT,
                    IN_NO: data.IN_NO,
                    REMARK: data.REMARK,
                    DLVY_USR_NM: data.DLVY_USR_NM,
                    CLAIM_NAME: data.CLAIM_NAME,
                    PO_NO: data.ORDER_NO,
                    PO_SEQ: data.ORDER_SEQ,
                    PO_AMOUNT: data.AMOUNT,
                    PO_MAKER: data.MAKER,
                    

                    po_stsCircleColor: sts_color
                });
            }

            if(items3.length == 0) {
                s_inq03_cnt.value = true;
            } else {
                s_inq03_cnt.value = false;
            }
        })
        .catch(function (err) {
            console.log("catch : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });

}

/* 기간필터클릭 */
function poCycleClick(arg) {
    getData('cycle');
}
/* 상태필터클릭 */
function poTypesClick(arg) {
   getData('type');
}


/* ******* 서브메뉴 ******* */
/* SubPage.ux 진입 시 데이터 호출 */
function clicked_po(arg) {
    var res = JSON.stringify(arg);
    var data = JSON.parse(res);

    router_po.push("subPage_po");

    if(arg.data.PO_STATUS_NM == '거래\n명세표\n부분생성'){
        arg.data.PO_STATUS_NM = '거래명세표부분생성';
    } else if(arg.data.PO_STATUS_NM == '거래\n명세표\n생성'){
        arg.data.PO_STATUS_NM = '거래명세표생성';
    }

    po_STATUS.value = arg.data.PO_STATUS_NM;
    po_BP_NM.value = arg.data.PO_BP_NM;
    po_PO_NO.value = arg.data.PO_NO;
    po_PO_SEQ.value = arg.data.PO_SEQ;
    po_PO_DT.value = arg.data.PO_DT;
    po_DLVY_HOPE_DT.value = arg.data.DLVY_HOPE_DT;
    po_DLVY_AVL_DT.value = arg.data.DLVY_AVL_DT;
    po_IN_NO.value = arg.data.IN_NO;
    po_IN_DT.value = arg.data.IN_DT;
    po_ITEM_CD.value = arg.data.PO_ITEM_CD;
    po_ITEM_NM.value = arg.data.PO_ITEM_NM;
    po_SPEC.value = arg.data.PO_SPEC;
    po_MAKER.value = arg.data.PO_MAKER;
    po_QTY.value = arg.data.PO_QTY;
    po_UNIT.value = arg.data.PO_UNIT;
    po_PRC.value = arg.data.PO_PRC;
    //po_AMT.value = numberWithCommas(arg.data.PO_AMOUNT);
    
    po_ORDER_USER_NM.value = arg.data.ORDER_USER_NM;
    po_ORDER_DEPT_NM.value = arg.data.ORDER_DEPT_NM;
    po_REC_USR_NM.value = arg.data.REC_USR_NM;
    po_REC_DEPT_NM.value = arg.data.REC_DEPT_NM;
    po_CLAIM_NAME.value = arg.data.CLAIM_NAME;
    po_DLVY_USR_NM.value = arg.data.DLVY_USR_NM;
    po_REMARK.value = arg.data.REMARK;
    
    /*
    if(arg.data.SUPP_STATUS2 == 'C') {
        console.log("견적접수");
        stsCircleColor = '#70B988';
    } else if (arg.data.SUPP_STATUS2 == 'G') {
        console.log("미낙찰");
        stsCircleColor = '#0000005F';
    } else if (arg.data.SUPP_STATUS2 == 'B'){
        console.log("재견적접수");
        stsCircleColor = '#F9D768';
    } else {
        stsCircleColor = '#F78DB9';
    }
    */
}

/*서브메뉴 back btn*/
function btnBackClick_po() {
    router_po.goBack();
}


/* onLaunch */
Lifecycle2.on("enteringForeground", function () {
    getData('open');
});


/* 원 단위 콤마 */
function numberWithCommas(x) {
    if(x == null || x == 'null') {
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

    return  year + '-' + month +'-' + day;
}

function page2Click() {
    getData('open');
}


module.exports = {
    poCycleClick: poCycleClick,
    clicked_po: clicked_po,
    page2Click: page2Click,
    
    poTypesClick: poTypesClick,
    btnBackClick_po: btnBackClick_po,
    btnTest1: btnTest1,

    modes: modes,
    po_currentMode: po_currentMode,
    po_types: po_types,
    po_currentType: po_currentType,
    items3: items3,
    po_stsCircleColor: po_stsCircleColor,

    po_STATUS: po_STATUS,
    po_BP_NM: po_BP_NM,
    po_PO_NO: po_PO_NO,
    po_PO_SEQ: po_PO_SEQ,
    po_PO_DT: po_PO_DT,
    po_DLVY_HOPE_DT: po_DLVY_HOPE_DT,
    po_DLVY_AVL_DT: po_DLVY_AVL_DT,
    po_IN_NO: po_IN_NO,
    po_IN_DT: po_IN_DT,
    po_ITEM_CD: po_ITEM_CD,
    po_ITEM_NM: po_ITEM_NM,
    po_SPEC: po_SPEC,
    po_MAKER: po_MAKER,
    po_QTY: po_QTY,
    po_UNIT: po_UNIT,
    po_PRC: po_PRC,
    po_AMT: po_AMT,
    po_ORDER_USER_NM: po_ORDER_USER_NM,
    po_ORDER_DEPT_NM: po_ORDER_DEPT_NM,
    po_REC_USR_NM: po_REC_USR_NM,
    po_REC_DEPT_NM: po_REC_DEPT_NM,
    po_CLAIM_NAME: po_CLAIM_NAME,
    po_DLVY_USR_NM: po_DLVY_USR_NM,
    po_REMARK: po_REMARK,
    s_inq03_cnt: s_inq03_cnt,
}