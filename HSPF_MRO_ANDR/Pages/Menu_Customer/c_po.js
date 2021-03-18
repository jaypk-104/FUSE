var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var Alerts = require("FuseJS/Alerts");
var vibration = require('FuseJS/Vibration');
var deviceToast = require("deviceToast");
var InterApp = require("FuseJS/InterApp");
var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");
if (Environment.ios || Environment.preview) {
    device = "Visible";
}
var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + ("0" + (new Date().getMonth() + 1)).slice(-2));
var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable(week_day);

var url = "http://123.142.124.161:8080/Fuse_Customer_PO.jsp";
//var url = "http://123.142.124.166:8080/Fuse_Customer_PO.jsp";

/*



var g_BP_NM_obs = 'test2';
var g_USR_NM_obs = 'test2_1';

G_BP_CD = 'test2';
G_USR_ID = 'test2_1';

*/

var g_BP_NM_obs = Observable(g_BP_NM);
var g_USR_NM_obs = Observable(g_USR_NM);


var chk_bp_cd_po = Observable("Collapsed");
var chk_bp_cd_appr = Observable("Visible");
var chk_dtl_dlv_dt = Observable("Collapsed");
var chk_bp_cd_req_user = Observable("Collapsed");

// ! SHPAC(05911) / test1_1(test1)
// ! 동아화성(06611) / test2_1(test2)

if (G_BP_CD == '05911' || G_BP_CD == 'test1') {
    chk_bp_cd_po = Observable("Collapsed"); //발주완료 off
    chk_bp_cd_appr = Observable("Visible"); //결재진행 on
    chk_bp_cd_req_user = Observable("Visible"); //요청자  on
} else if (G_BP_CD == '06611' || G_BP_CD == 'test2') {
    chk_bp_cd_po = Observable("Collapsed"); //발주완료 off
    chk_bp_cd_appr = Observable("Visible"); //결재진행 on
    chk_bp_cd_req_user = Observable("Collapsed"); //요청자 off
    chk_dtl_dlv_dt = Observable("Visible");
} else {
    chk_bp_cd_po = Observable("Visible"); //발주완료 on
    chk_bp_cd_appr = Observable("Collapsed"); //결재진행 off
    chk_bp_cd_req_user = Observable("Collapsed"); //요청자 off
}


// # 탭1 - 나의상품검색_start
var myItems = Observable();
var search = Observable();

var BP_ITEM_CD1 = Observable();
var ITEM_CD1 = Observable();
var ITEM_NM1 = Observable();
var SPEC1 = Observable();
var MAKER1 = Observable();
var EA1 = Observable();
var PRICE1 = Observable();
var PO_QTY1 = Observable();
var REMARK1 = Observable();

function tab1_click() {
    console.log('tab1 click');
    search.value = '';
}
// * 통합검색 버튼
function searchBtnClick() {
    myItems.clear();

    if (search.value == undefined || search.value.length < 2) {
        Alerts
            .alert("확인", "검색어를 최소 2자 이상 입력하세요.", "OK")
            .then(function (x) { });
    } else {
        // 정상작동
        var data = {
            V_TYPE: 'PO1_SEARCH',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_SEARCH: search.value,
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
                        myItems.add({
                            IDX1: i + 1,
                            BP_ITEM_CD1: data.resultList[i].BP_ITEM_CD,
                            ITEM_CD1: data.resultList[i].ITEM_CD,
                            ITEM_NM1: data.resultList[i].ITEM_NM,
                            SPEC1: data.resultList[i].SPEC,
                            MAKER1: data.resultList[i].MAKER,
                            EA1: data.resultList[i].UNIT,
                            PRICE1: numberWithCommas(data.resultList[i].PRICE),
                            REMARK1: data.resultList[i].REMARK,
                            PO_QTY1: new Observable(),
                        });
                    }
                }

            })
            .catch(function (err) {
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) { });
            });
    }
}

// * 장바구니담기 버튼
function shopBtnClick(args) {
    var QTY = args.data.PO_QTY1.value;
    var ITEM_CD = args.data.ITEM_CD1;
    var PRICE = args.data.PRICE1;

    //console.log(JSON.stringify(args.data));

    if (QTY == 0 || QTY == undefined) {
        console.log('발주수량을 입력하세요@');
        Alerts
            .alert("확인", "발주수량을 입력하세요.", "OK")
            .then(function (x) { });
    } else {
        var data = {
            V_TYPE: 'PO1_CART',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_ITEM_CD: ITEM_CD,
            V_ORDER_QTY: QTY,
            V_PRICE: PRICE,
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
                    //return response.json();
                }

            })
            .then(function (responseObject) {
                args.data.PO_QTY1.value = '';

                deviceToast.ToastIt('### 장바구니담기 완료 ###');
                vibration.vibrate(0.8);

            })
            .catch(function (err) {
                // Alerts
                //     .alert("Error", "Network Error : " + err, "OK")
                //     .then(function (x) {});
            });

    }
}
// # 탭1 - 나의상품검색_end



// # 탭2 - 장바구니_start

var items_cart = Observable();
var TOTAL_AMT2 = Observable(0);
var BP_ITEM_CD2 = Observable();
var ITEM_CD2 = Observable();
var ITEM_NM2 = Observable();
var SPEC2 = Observable();
var MAKER2 = Observable();
var EA2 = Observable();
var PRICE2 = Observable();
var PO_QTY2 = Observable();
var PO_AMT2 = Observable();
var Check2 = Observable();

// * tab2(장바구니) 클릭
function tab2_click() {
    console.log('장바구니 클릭');
    refresh2Click();
}
// * 새로고침
/* Pull Over Start*/
function endLoading() {
    isLoading.value = false;
    refresh2Click();
}

function reloadHandler() {
    isLoading.value = true;
    setTimeout(endLoading, 1500);
}

var isLoading = Observable(false);
/* Pull Over End*/

function refresh2Click() {
    console.log('새로고침버튼클릭##');
    items_cart.clear();

    // 정상작동
    var data = {
        V_TYPE: 'PO2_SEARCH',
        V_USR_ID: G_USR_ID,
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
            var total_amt = 0;

            if (data.resultList.length > 0) {

                for (var i = 0; i < data.resultList.length; i++) {
                    items_cart.add({
                        IDX1: i + 1,
                        CART_NO2: data.resultList[i].CART_NO,
                        BP_ITEM_CD2: data.resultList[i].BP_ITEM_CD,
                        ITEM_CD2: data.resultList[i].ITEM_CD,
                        ITEM_NM2: data.resultList[i].ITEM_NM,
                        SPEC2: data.resultList[i].SPEC,
                        MAKER2: data.resultList[i].MAKER,
                        EA2: data.resultList[i].UNIT,
                        PRICE2: numberWithCommas(data.resultList[i].PRICE),
                        PO_QTY2: Observable(numberWithCommas(data.resultList[i].QTY)),
                        PO_AMT2: Observable(numberWithCommas(data.resultList[i].AMOUNT)),
                        Check2: new Observable()
                    });
                    total_amt += Number(data.resultList[i].AMOUNT);
                }
                TOTAL_AMT2.value = numberWithCommas(total_amt);
            } else {
                TOTAL_AMT2.value = 0;
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });
}



// * 총 금액 계산(클릭 시 변경)
function calcTotalAmt() {
    console.log('금액계산@');
    var total_amt = 0; // check y only 
    var total_amt_all = 0; // check n all
    var flag = 'F';

    for (var i = 0; i < items_cart.length; i++) {
        var item = items_cart.getAt(i);
        if (item.Check2.value == 'Y') {
            total_amt += Number(item.PO_AMT2.value.replace(/,/gi, ''));
            flag = 'T';
        } else {
            total_amt_all += Number(item.PO_AMT2.value.replace(/,/gi, ''));
        }

        if (flag == 'T') {
            TOTAL_AMT2.value = numberWithCommas(total_amt);
        } else {
            TOTAL_AMT2.value = numberWithCommas(total_amt_all);
        }
    }
}


// * 발주수량변경(클릭 시 변경)
function changeQty2(args) {
    console.log('발주수량변경');

    var QTY = args.data.PO_QTY2.value.replace(/,/gi, '');
    var PRICE = args.data.PRICE2.replace(/,/gi, '');

    args.data.PO_AMT2.value = numberWithCommas(QTY * PRICE);
    args.data.PO_QTY2.value = numberWithCommas(QTY);

}

// * 개별저장
function saveItem2(args) {
    console.log('item save##');

    // # SWIPE 저장
    if (args.data != null) {
        var jsonArray = new Array();
        var jsonInfo = new Object();

        var QTY = args.data.PO_QTY2.value.replace(/,/gi, '');
        var PRICE = args.data.PRICE2.replace(/,/gi, '');
        var CART_NO = args.data.CART_NO2;

        jsonInfo.CRUD = 'CU';
        jsonInfo.CART_NO = CART_NO;
        jsonInfo.PRICE = PRICE;
        jsonInfo.PO_QTY = QTY;
        jsonArray.push(jsonInfo);

        var data = {
            V_TYPE: 'PO2_SYNC',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_DATA: jsonArray,
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
                }

            })
            .then(function (responseObject) {
                refresh2Click();
                console.log('####수량변경완료');
                deviceToast.ToastIt('### 수량변경완료 ###');
                vibration.vibrate(0.8);
            })
            .catch(function (err) {
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) { });
            });
    } else {
        // # 상단버튼저장

        var flag = 'F';
        var jsonArray = new Array();

        for (var i = 0; i < items_cart.length; i++) {
            var jsonInfo = new Object();
            var item = items_cart.getAt(i);

            if (item.Check2.value == 'Y') {
                flag = 'T';
                jsonInfo.CRUD = 'CU';
                jsonInfo.CART_NO = item.CART_NO2;
                jsonInfo.PRICE = item.PRICE2.replace(/,/gi, '');
                jsonInfo.PO_QTY = item.PO_QTY2.value.replace(/,/gi, '');
                jsonArray.push(jsonInfo);
            }
        }

        if (flag == 'F') {
            console.log('저장할 데이터 선택');
            Alerts
                .alert("확인", "저장할 항목을 선택하세요.", "OK")
                .then(function (x) { });
        } else {

            var data = {
                V_TYPE: 'PO2_SYNC',
                V_USR_ID: G_USR_ID,
                V_BP_CD: G_BP_CD,
                V_DATA: jsonArray,
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
                    }

                })
                .then(function (responseObject) {
                    refresh2Click();
                    console.log('####수량변경완료');
                    deviceToast.ToastIt('### 수량변경완료 ###');
                    vibration.vibrate(0.8);
                })
                .catch(function (err) {
                    Alerts
                        .alert("Error", "Network Error : " + err, "OK")
                        .then(function (x) { });
                });
        }
    }

}
// * 삭제(SWIPE + 상단 Button)
function deleteItem2(args) {

    if (args.data != null) {
        // # SWIPE 삭제
        var jsonArray = new Array();
        var jsonInfo = new Object();

        var CART_NO = args.data.CART_NO2;

        jsonInfo.CRUD = 'CD';
        jsonInfo.CART_NO = CART_NO;
        jsonArray.push(jsonInfo);

        var data = {
            V_TYPE: 'PO2_SYNC',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_DATA: jsonArray,
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
                }

            })
            .then(function (responseObject) {

                items_cart.tryRemove(args.data); //item 삭제
                calcTotalAmt(); //총금액재계산

                console.log('#### 장바구니 품목삭제 완료');
                deviceToast.ToastIt('### 장바구니 품목삭제 완료 ###');
                vibration.vibrate(0.8);
            })
            .catch(function (err) {
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) { });
            });
    } else {
        // # 상단버튼삭제

        var flag = 'F';
        var jsonArray = new Array();

        for (var i = 0; i < items_cart.length; i++) {
            var jsonInfo = new Object();
            var item = items_cart.getAt(i);

            if (item.Check2.value == 'Y') {
                flag = 'T';
                jsonInfo.CRUD = 'PI';
                jsonInfo.CART_NO = item.CART_NO2;
                jsonInfo.ITEM_CD = item.ITEM_CD2;
                jsonInfo.PRICE = item.PRICE2.replace(/,/gi, '');
                jsonInfo.PO_QTY = item.PO_QTY2.value.replace(/,/gi, '');
                jsonInfo.ORD_USR_ID = G_USR_ID;
                jsonInfo.REC_USR_ID = G_USR_ID;

                jsonArray.push(jsonInfo);
            }
        }

        if (flag == 'F') {
            console.log('삭제할 데이터 선택');
            Alerts
                .alert("확인", "삭제할 항목을 선택하세요.", "OK")
                .then(function (x) { });
        } else {

            var data = {
                V_TYPE: 'PO2_SYNC',
                V_USR_ID: G_USR_ID,
                V_BP_CD: G_BP_CD,
                V_DATA: jsonArray,
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
                    }

                })
                .then(function (responseObject) {

                    // items_cart.tryRemove(args.data); //item 삭제
                    //calcTotalAmt(); //총금액재계산
                    refresh2Click() //새로고침

                    console.log('#### 장바구니 품목삭제 완료');
                    deviceToast.ToastIt('### 장바구니 품목삭제 완료 ###');
                    vibration.vibrate(0.8);
                })
                .catch(function (err) {
                    Alerts
                        .alert("Error", "Network Error : " + err, "OK")
                        .then(function (x) { });
                });
        }
    }


    /*
        
            */
}

// * 상품발주
function order2Click() {
    var flag = 'F';
    var jsonArray = new Array();

    for (var i = 0; i < items_cart.length; i++) {
        var jsonInfo = new Object();
        var item = items_cart.getAt(i);

        if (item.Check2.value == 'Y') {
            flag = 'T';
            jsonInfo.CRUD = 'PI';
            jsonInfo.CART_NO = item.CART_NO2;
            jsonInfo.ITEM_CD = item.ITEM_CD2;
            jsonInfo.PRICE = item.PRICE2.replace(/,/gi, '');
            jsonInfo.PO_QTY = item.PO_QTY2.value.replace(/,/gi, '');
            jsonInfo.ORD_USR_ID = G_USR_ID;
            jsonInfo.REC_USR_ID = G_USR_ID;

            jsonArray.push(jsonInfo);
        }
    }

    if (flag == 'F') {
        console.log('발주할 데이터 선택');
        Alerts
            .alert("확인", "발주할 항목을 선택하세요.", "OK")
            .then(function (x) { });
    } else {

        var data = {
            V_TYPE: 'PO2_SYNC',
            V_USR_ID: G_USR_ID,
            V_BP_CD: G_BP_CD,
            V_DATA: jsonArray,
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
                }

            })
            .then(function (responseObject) {
                refresh2Click();

                console.log('####상품발주완료');
                deviceToast.ToastIt('### 상품발주 완료 ###');
                vibration.vibrate(0.8);

            })
            .catch(function (err) {
                Alerts
                    .alert("Error", "Network Error : " + err, "OK")
                    .then(function (x) { });
            });

    }

}
// # 탭2 - 장바구니_end


// # 탭3 - 상품발주_start
var DEPT_NM1 = Observable();
var USR_NM1 = Observable();
var TELNO1 = Observable();
var HANDTEL1 = Observable();
var BP_ADDR1 = Observable();
var BP_ADDR1 = Observable();
var JIKGUB1 = Observable();

// 정상작동
var data = {
    V_TYPE: 'PO3_SEARCH1',
    V_USR_ID: G_USR_ID,
    V_BP_CD: G_BP_CD,
};

// * tab3(상품발주) 클릭
function tab3_click() {

    // * 1. 발주자정보 불러오기    
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
                DEPT_NM1.value = data.resultList[0].DEPT_NM;
                USR_NM1.value = data.resultList[0].USR_NM;
                TELNO1.value = data.resultList[0].TELNO;
                HANDTEL1.value = data.resultList[0].HANDTEL;
                BP_ADDR1.value = data.resultList[0].BP_ADDR;
                JIKGUB1.value = data.resultList[0].JIKGUB;
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });


    // * 2. 인수자콤보박스 불러오기
    getInsuList();
    // * 3. 발주내역 불러오기
    refresh3Click();
    // selected.onValueChanged(function (newValue) {
    //     console.log('changed@@@@@ : ' + newValue);
    // });

}

var selected = Observable("선택");
var isOpen = Observable(false);
var insu_list = Observable();

var DLVY_ID = Observable();
var DLVY_TEL = Observable();
var DLVY_PHONE = Observable();
var DLVY_ADDR = Observable();
var DLVY_REMARK = Observable();

var CLAIM_NAME = Observable();


// * 인수자 콤보박스 불러오기
function getInsuList() {
    var data = {
        V_TYPE: 'PO3_DLVY_LIST',
        V_BP_CD: G_BP_CD,
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

            insu_list.clear();

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {
                    insu_list.add({
                        DLVY_ID: data.resultList[i].DLVY_ID,
                        DLVY_NM: data.resultList[i].DLVY_NM,
                        DLVY_ADDR: data.resultList[i].DLVY_ADDR,
                        DLVY_TEL: data.resultList[i].DLVY_TEL,
                        DLVY_PHONE: data.resultList[i].DLVY_PHONE,
                        USER_ID: data.resultList[i].USER_ID,
                    });
                }
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });
}




// * 인수자 콤보박스에서 인수자 선택
function clicked(arg) {
    console.log('인수자선택');
    selected.value = arg.data.DLVY_NM;
    DLVY_TEL.value = arg.data.DLVY_TEL;
    DLVY_PHONE.value = arg.data.DLVY_PHONE;
    DLVY_ADDR.value = arg.data.DLVY_ADDR;
    DLVY_ID.value = arg.data.DLVY_ID;
    isOpen.value = false;
}

var items_po = Observable();
var TOTAL_AMT3 = Observable(0);
var BP_ITEM_CD3 = Observable();
var ITEM_CD3 = Observable();
var ITEM_NM3 = Observable();
var SPEC3 = Observable();
var MAKER3 = Observable();
var UNIT3 = Observable();
var PRICE3 = Observable();
var PO_QTY3 = Observable();
var PO_AMT3 = Observable();
var PO_CNT3 = Observable(0);
var NEW_YN = Observable();

// * 발주목록 불러오기
function refresh3Click() {
    items_po.clear();

    // 정상작동
    var data = {
        V_TYPE: 'PO3_POLIST',
        V_USR_ID: G_USR_ID,
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
            var total_amt = 0;

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {
                    items_po.add({
                        IDX3: i + 1,
                        ORDER_NO3: data.resultList[i].ORDER_NO,
                        ITEM_CD3: data.resultList[i].ITEM_CD,
                        BP_ITEM_CD3: data.resultList[i].BP_ITEM_CD,
                        ITEM_NM3: data.resultList[i].ITEM_NM,
                        SPEC3: data.resultList[i].SPEC,
                        MAKER3: data.resultList[i].MAKER,
                        UNIT3: data.resultList[i].UNIT,
                        PRICE3: numberWithCommas(data.resultList[i].PRICE),
                        PO_QTY3: Observable(numberWithCommas(data.resultList[i].QTY)),
                        PO_AMT3: Observable(numberWithCommas(data.resultList[i].AMOUNT)),
                        NEW_YN: data.resultList[i].NEW_YN,
                        DLVY_HOPE_DT3_06611: new Observable(""),
                        DLVY_REMARK3_06611: new Observable("")
                    });
                    total_amt += Number(data.resultList[i].AMOUNT);
                }
                PO_CNT3.value = data.resultList.length;
                TOTAL_AMT3.value = numberWithCommas(total_amt);
            } else {
                PO_CNT3.value = 0;
                TOTAL_AMT3.value = 0;
            }

        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });
}


// * 개별삭제
function deleteItem3(args) {
    var jsonArray = new Array();
    var jsonInfo = new Object();

    var ORDER_NO = args.data.ORDER_NO3;

    jsonInfo.CRUD = 'PD';
    jsonInfo.ORDER_NO = ORDER_NO;
    jsonArray.push(jsonInfo);

    var data = {
        V_TYPE: 'PO3_SYNC',
        V_USR_ID: G_USR_ID,
        V_BP_CD: G_BP_CD,
        V_DATA: jsonArray,
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
            }

        })
        .then(function (responseObject) {
            var total_amt = 0;

            items_po.tryRemove(args.data); //item 삭제
            // refresh3Click();
            for (var i = 0; i < items_po.length; i++) {
                var item = items_po.getAt(i);
                total_amt += Number(item.PO_AMT3.value.replace(/,/gi, ''));
            }
            PO_CNT3.value = items_po.length;
            TOTAL_AMT3.value = numberWithCommas(total_amt);

            console.log('#### 발주등록 품목삭제 완료');
            deviceToast.ToastIt('### 발주등록 품목삭제 완료 ###');
            vibration.vibrate(0.8);


        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });
}

// * 납품요청일 date picker start
var dtpk3_visible = Observable(false);
var dtpk3_visible_ios = Observable(false);
var DLVY_HOPE_DT3 = Observable();

function getFormatDate(date) {

    if (typeof (date) == 'object') {
        var year = date.getFullYear(); //yyyy
        var month = (1 + date.getMonth()); //M
        month = month >= 10 ?
            month :
            '0' + month; //month 두자리로 저장
        var day = date.getDate(); //d
        day = day >= 10 ?
            day :
            '0' + day; //day 두자리로 저장

        return year + '-' + month + '-' + day;
    } else if (typeof (date) == 'string') {
        var y = date.substr(0, 4);
        var m = date.substr(4, 2);
        var d = date.substr(6, 2);

        return date;
    }
}
var date = new Date();
date.setDate(date.getDate() + 7);

var someDate = Observable(getFormatDate(date));
var temp_ios_date = Observable("default");

function clk_DLVY_HOPE_DT3() {
    if (Environment.ios || Environment.preview) {
        dtpk3_visible_ios.value = true;
    } else {
        /*안드로이드 캘린더*/
        dtpk3_visible.value = true;
    }
}


someDate.onValueChanged(module, function (date) {
    var new_dt = date;
    DLVY_HOPE_DT3.value = getFormatDate(new_dt); //new_dt;
    dtpk3_visible.value = false;
});

/* ios 캘린더 날짜 바꾸기 */
function pad(n, width) {
    n = n + '';
    return n.length >= width ? n : new Array(width - n.length + 1).join('0') + n;
}

temp_ios_date.onValueChanged(module, function (item) {
    if (item.substring(0, 1) != 'd') {
        var year = item.split(' ')[1].substring(0, 4);
        var month = item.substring(0, 2).replace(/월/g, "");
        var day = item.split(' ')[1].substring(4, 6);

        month = pad(month, 2);
        day = pad(day, 2);

        var date = year + '-' + month + '-' + day;

        if (on_cal_06611.value != 'OFF') {
            // # 동아화성 캘린더 O
            items_po.getAt(on_cal_06611.value).DLVY_HOPE_DT3_06611.value = getFormatDate(date);
            on_cal_06611.value = "OFF";
        } else {
            DLVY_HOPE_DT3.value = getFormatDate(date); //new_dt;
        }
        dtpk3_visible_ios.value = false;

    }
});

// # 동아화성용 캘린더

var dtpk3_visible_06611 = Observable(false);
var DLVY_HOPE_DT3_06611 = Observable();
var on_cal_06611 = Observable("OFF");

function clk_DLVY_HOPE_DT3_06611(args) {
    console.log('동아화성용#####');

    on_cal_06611.value = args.data.IDX3 - 1;
    dtpk3_visible_ios.value = true;

    // if(Environment.ios ||  Environment.preview) {
    //     console.log('here#3!');

    // } else {
    //     /*안드로이드 캘린더*/
    //     dtpk3_visible_06611.value = true;
    // }
}


/* ios 캘린더 날짜 바꾸기 */
function pad(n, width) {
    n = n + '';
    return n.length >= width ? n : new Array(width - n.length + 1).join('0') + n;
}
// * 납품요청일 date picker end


// * 발주수량변경(클릭 시 변경)
function changeQty3(args) {
    console.log('발주수량변경3');

    var QTY = args.data.PO_QTY3.value.replace(/,/gi, '');
    var PRICE = args.data.PRICE3.replace(/,/gi, '');

    args.data.PO_AMT3.value = numberWithCommas(QTY * PRICE);
    args.data.PO_QTY3.value = numberWithCommas(QTY);

    var total_amt = 0;

    for (var i = 0; i < items_po.length; i++) {
        var item = items_po.getAt(i);
        total_amt += Number(item.PO_AMT3.value.replace(/,/gi, ''));
    }
    TOTAL_AMT3.value = numberWithCommas(total_amt);
}


// * 발주완료
function po_ok_click3() {
    var flag = '';
    if (selected.value == '선택') {
        flag = 'F';
        console.log('인수자를 선택하세요.');
        Alerts
            .alert("확인", "인수자를 선택하세요.", "OK")
            .then(function (x) { });
    } else if (PO_CNT3.value == 0) {
        flag = 'F';
        console.log('발주항목없음');
        Alerts
            .alert("확인", "발주내역이 없습니다.", "OK")
            .then(function (x) { });
    } else {
        flag = 'T';
        Alerts.confirm("확인", "발주완료 하시겠습니까?\n납품요청일: " + DLVY_HOPE_DT3.value, "아니오", "예").then(function (x) {
            if (x == false) { //! x == false  = 예

                var jsonArray = new Array();

                for (var i = 0; i < items_po.length; i++) {
                    var jsonInfo = new Object();
                    var item = items_po.getAt(i);
                    jsonInfo.CRUD = 'PFD';
                    jsonInfo.MST_ORDER_NO = 'test'; //채번받을번호
                    jsonInfo.ORDER_NO = item.ORDER_NO3;
                    jsonInfo.ORD_USR_ID = G_USR_ID;
                    jsonInfo.PO_QTY = item.PO_QTY3.value.replace(/,/gi, '');
                    jsonInfo.PO_AMT = item.PO_AMT3.value.replace(/,/gi, '');
                    console.log('발주금액 : '+ item.PO_AMT3.value.replace(/,/gi, ''));
                    jsonInfo.ITEM_CD = item.ITEM_CD3;
                    jsonInfo.DLVY_NAME = selected.value;
                    jsonInfo.DLVY_ADDR = DLVY_ADDR.value;
                    jsonInfo.DLVY_TEL = DLVY_TEL.value;
                    jsonInfo.DLVY_PHONE = DLVY_PHONE.value;
                    jsonInfo.DLVY_ID = DLVY_ID.value;
                    jsonInfo.DLVY_HOPE_DT = DLVY_HOPE_DT3.value;
                    jsonInfo.REMARK = DLVY_REMARK.value;

                    jsonArray.push(jsonInfo);
                }

                var data = {
                    V_TYPE: 'PO3_SYNC',
                    V_USR_ID: G_USR_ID,
                    V_BP_CD: G_BP_CD,
                    V_DATA: jsonArray,
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
                        }

                    })
                    .then(function (responseObject) {
                        console.log('#### 발주완료');
                        deviceToast.ToastIt('### 발주완료 ###');
                        vibration.vibrate(0.8);
                        DLVY_REMARK.value = ''; //비고초기화
                        refresh3Click();

                    })
                    .catch(function (err) {
                        Alerts
                            .alert("Error", "Network Error : " + err, "OK")
                            .then(function (x) { });
                    });
            }
        });
    }
}

var items_appr_line = Observable();
// var APPR_DT3 = Observable(new Date().getFullYear() + "-" + ("0" + (new Date().getMonth() + 1)).slice(-2));
var APPR_DT3 = Observable(getFormatDate(new Date()));
var APP_H3 = Observable();
var APP_D3 = Observable();
var apprPopup = Observable("Hidden");

// * 결재진행 버튼클릭
function appr_click3() {
    console.log('결재진행###');
    var flag = '';

    if (selected.value == '선택') {
        flag = 'F';
        console.log('인수자를 선택하세요.');
        Alerts
            .alert("확인", "인수자를 선택하세요.", "OK")
            .then(function (x) { });

    } else if ((G_BP_CD == '05911' || G_BP_CD == 'test1') &&
        (CLAIM_NAME.value == '' || CLAIM_NAME.value == null)) {
        flag = 'F';
        console.log('요청자를 입력하세요.');
        Alerts
            .alert("확인", "요청자를 입력하세요.", "OK")
            .then(function (x) { });
    } else if (PO_CNT3.value == 0) {
        flag = 'F';
        console.log('발주항목없음');
        Alerts
            .alert("확인", "발주내역이 없습니다.", "OK")
            .then(function (x) { });

    } else {
        flag = 'T';
        //! 결재진행팝업 보이기
        Alerts.confirm("확인", "결재진행 하시겠습니까?\n납품요청일: " + DLVY_HOPE_DT3.value, "아니오", "예").then(function (x) {
            if (x == false) { //! x == false  = 예
                apprPopup.value = "Visible";

                items_appr_line.clear();
                APP_H3.value = '';
                APP_D3.value = '';

                //! 결의자리스트 콤보 불러오기
                getApprList();

                //! SHPAC/test1 일 때만 NEW_YN 확인해서 결재라인(+협조) 추가. 나머지 고객사는 본인만 결재추가함.
                var flag_new_item = 'N';

                if ((G_BP_CD == '05911' || G_BP_CD == 'test1')) {
                    for (var i = 0; i < items_po.length; i++) {
                        var item = items_po.getAt(i);
                        if (item.NEW_YN == 'Y') {
                            flag_new_item = 'Y';
                            break;
                        } else {
                            flag_new_item = 'N';
                        }
                    }

                    var data = {
                        V_TYPE: 'PO3_APPR_BEFORE',
                        V_USR_ID: G_USR_ID,
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

                            if (status == 500) {
                                console.log("DB Failed");
                            } else {
                                console.log("DB Success");
                                return response.json();
                            }

                        }).then(function (responseObject) {
                            var res = JSON.stringify(responseObject);
                            var data = JSON.parse(res);

                            if (data.resultList.length > 0) {
                                for (var i = 0; i < data.resultList.length; i++) {
                                    // ! 가장 처음 본인 추가(모든 고객사 동일)
                                    if (i == 0) {
                                        items_appr_line.add({
                                            APPR_USR_TYPE3: '결재',
                                            APPR_USR_ID3: G_USR_ID,
                                            APPR_USR_NM3: USR_NM1.value,
                                            APPR_JIKGUB3: JIKGUB1.value,
                                            APPR_DEPT_NM3: DEPT_NM1.value,
                                            APP_SEQ: 1
                                        });
                                    }

                                    console.log('### flag_new_item : ' + flag_new_item);

                                    // ! SHPAC(05911) or test1(test1) 일때만 중간라인결재 추가 + 마지막 협조 추가
                                    if ((G_BP_CD == '05911' || G_BP_CD == 'test1') && flag_new_item == 'Y') {
                                        items_appr_line.add({
                                            APPR_USR_TYPE3: '결재',
                                            APPR_USR_ID3: data.resultList[i].USR_ID,
                                            APPR_USR_NM3: data.resultList[i].USR_NM,
                                            APPR_JIKGUB3: data.resultList[i].JIKGUB,
                                            APPR_DEPT_NM3: data.resultList[i].DEPT_NM,
                                            APP_SEQ: items_appr_line.length + 1
                                        });


                                        // ! 가장 마지막 협조자 추가
                                        // ! test1
                                        if (G_BP_CD == 'test1' && i == data.resultList.length - 1) {
                                            items_appr_line.add({
                                                APPR_USR_TYPE3: '협조',
                                                APPR_USR_ID3: 'test1_3',
                                                APPR_USR_NM3: '구매담당',
                                                APPR_JIKGUB3: '사원',
                                                APPR_DEPT_NM3: '구매',
                                                APP_SEQ: items_appr_line.length + 1
                                            });
                                        }

                                        // ! 마지막 협조자 추가
                                        // ! SHPAC
                                        if (G_BP_CD == '05911' && i == data.resultList.length - 1) {
                                            items_appr_line.add({
                                                APPR_USR_TYPE3: '협조',
                                                APPR_USR_ID3: 'sh7785',
                                                APPR_USR_NM3: '이건우',
                                                APPR_JIKGUB3: '대리',
                                                APPR_DEPT_NM3: '구매팀',
                                                APP_SEQ: items_appr_line.length + 1
                                            });
                                        }

                                    }
                                }

                            }
                        })
                        .catch(function (err) {
                            Alerts
                                .alert("Error", "Network Error : " + err, "OK")
                                .then(function (x) { });
                        });
                    // ! shpac, test1 외 나머지 고객사는 결재라인에 본인만 추가
                } else {
                    items_appr_line.add({
                        APPR_USR_TYPE3: '결재',
                        APPR_USR_ID3: G_USR_ID,
                        APPR_USR_NM3: USR_NM1.value,
                        APPR_JIKGUB3: JIKGUB1.value,
                        APPR_DEPT_NM3: DEPT_NM1.value,
                        APP_SEQ: 1
                    });
                }
            }
        });
    }
}


var selected2 = Observable("결의자추가");
var isOpen2 = Observable(false);
var appr_list = Observable();
var ADD_APPR_USR_ID = Observable();
var ADD_APPR_USR_NM = Observable();
var ADD_APPR_JIKGUB = Observable();
var ADD_APPR_DEPT_NM = Observable();

// * 결의자 콤보박스 불러오기
function getApprList() {

    var data = {
        V_TYPE: 'PO3_APPR_LIST',
        V_BP_CD: G_BP_CD,
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

            appr_list.clear();

            if (data.resultList.length > 0) {
                for (var i = 0; i < data.resultList.length; i++) {
                    appr_list.add({
                        ADD_APPR_USR_ID: data.resultList[i].USR_ID,
                        ADD_APPR_USR_NM: data.resultList[i].USR_NM,
                        ADD_APPR_JIKGUB: data.resultList[i].JIKGUB,
                        ADD_APPR_DEPT_NM: data.resultList[i].DEPT_NM,
                    });
                }
            }
        })
        .catch(function (err) {
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) { });
        });
}

// * 결의자 콤보박스에서 결의자 선택
function clicked2(arg) {
    console.log('결의자선택#####');
    var flag_dup = '';
    var hyupjo_idx = 0; // 협조자 순번

    for (var i = 0; i < items_appr_line.length; i++) {
        var item = items_appr_line.getAt(i);
        if (item.APPR_USR_ID3 == arg.data.ADD_APPR_USR_ID) {
            flag_dup = 'F';
            break;
        } else {
            flag_dup = 'T';
            if (item.APPR_USR_TYPE3 == '협조') {
                hyupjo_idx = i;
            }
        }
    }
    // items_appr_line.forEach(function(data, index) {
    //     console.log('기존라인: ' + data.APPR_USR_ID3);
    //     console.log('추가할항목: ' + arg.data.ADD_APPR_USR_ID);

    //     if(data.APPR_USR_ID3 == arg.data.ADD_APPR_USR_ID) {
    //         console.log('결재라인에 존재함');
    //         flag_dup = 'F';
    //         return 0;
    //     } else {
    //         flag_dup = 'T';
    //     }
    // });

    if (flag_dup == 'T') {
        var new_item = {
            APPR_USR_TYPE3: '결재',
            APPR_USR_ID3: arg.data.ADD_APPR_USR_ID,
            APPR_USR_NM3: arg.data.ADD_APPR_USR_NM,
            APPR_JIKGUB3: arg.data.ADD_APPR_JIKGUB,
            APPR_DEPT_NM3: arg.data.ADD_APPR_DEPT_NM,
        };

        console.log('hyupjo_idx: ' + hyupjo_idx);

        if (hyupjo_idx == 0) {
            // ! 협조자가 없으면 제일 뒤에 추가
            items_appr_line.add(new_item);
        } else {
            // ! 협조자가 있으면 협조 앞에 추가
            items_appr_line.insertAt(hyupjo_idx, new_item);
        }

        // selected2.value = arg.data.ADD_APPR_NM;
        isOpen2.value = false;
        vibration.vibrate(0.8);

    } else {
        console.log('alert !!! 결재라인에 존재함');
        deviceToast.ToastIt('### 이미 결재라인에 존재합니다. ###');
        vibration.vibrate(0.8);
    }
}

// * 추가된 결의자 삭제
function remove_line(arg) {
    if (items_appr_line.indexOf(arg.data) == 0) {
        console.log('본인삭제 xx');
        deviceToast.ToastIt('### 첫번째 결의자(본인)는 삭제할 수 없습니다.###');
    } else if (arg.data.APPR_USR_TYPE3 == '협조') {
        console.log('협조자삭제 xx');
        deviceToast.ToastIt('### 협조자는 삭제할 수 없습니다 ###');
    } else {
        items_appr_line.tryRemove(arg.data); //item 삭제
        vibration.vibrate(0.8);
    }
}


// * 결재요청 버튼클릭
function appr_ok_click3() {
    console.log('결재요청');
    console.log(APP_H3.value);
    console.log(APP_D3.value);

    var flag = '';
    if (APP_H3.value == '' || APP_H3.value == undefined) {
        console.log('제목을 입력하세요');
        Alerts
            .alert("확인", "제목을 입력하세요", "OK")
            .then(function (x) { });
    } else if (APP_D3.value == '' || APP_D3.value == undefined) {
        console.log('내용을 입력하세요');
        Alerts
            .alert("확인", "내용을 입력하세요", "OK")
            .then(function (x) { });
    } else if (items_appr_line.length == 1) {
        console.log('본인 외 결재자를 추가하세요.');
        Alerts
            .alert("확인", "본인 외 결재자를 추가하세요.", "OK")
            .then(function (x) { });
    } else {
        Alerts.confirm("확인", "결재요청 하시겠습니까?", "아니오", "예").then(function (x) {
            if (x == false) { //! x == false  = 예
                var jsonArray = new Array();
                var jsonArray_line = new Array();

                for (var i = 0; i < items_po.length; i++) {
                    var jsonInfo = new Object();
                    var item = items_po.getAt(i);
                    jsonInfo.CRUD = 'PF';
                    jsonInfo.MST_ORDER_NO = 'test'; //채번받을번호
                    jsonInfo.ORDER_NO = item.ORDER_NO3;
                    jsonInfo.ORD_USR_ID = G_USR_ID;

                    // # 동아화성. 품목 개별 납품요청일
                    if ((item.DLVY_HOPE_DT3_06611.value.length) > 0 && (G_BP_CD == '06611' || G_BP_CD == 'test2')) {
                        jsonInfo.DLVY_HOPE_DT = item.DLVY_HOPE_DT3_06611.value;
                    } else {
                        jsonInfo.DLVY_HOPE_DT = DLVY_HOPE_DT3.value;
                    }

                    // # 동아화성. 품목 개별 비고
                    if ((item.DLVY_REMARK3_06611.value.length > 0) && (G_BP_CD == '06611' || G_BP_CD == 'test2')) {
                        jsonInfo.REMARK = item.DLVY_REMARK3_06611.value;
                    } else {
                        jsonInfo.REMARK = DLVY_REMARK.value;
                    }
                    //jsonInfo.DLVY_HOPE_DT = DLVY_HOPE_DT3.value;
                    //jsonInfo.REMARK = DLVY_REMARK.value;
                    jsonInfo.PO_QTY = item.PO_QTY3.value.replace(/,/gi, '');
                    jsonInfo.PO_AMT = item.PO_AMT3.value.replace(/,/gi, '');
                    jsonInfo.ITEM_CD = item.ITEM_CD3;

                    jsonInfo.DLVY_NAME = selected.value;
                    jsonInfo.DLVY_ADDR = DLVY_ADDR.value;
                    jsonInfo.DLVY_TEL = DLVY_TEL.value;
                    jsonInfo.DLVY_PHONE = DLVY_PHONE.value;
                    jsonInfo.DLVY_ID = DLVY_ID.value;
                    jsonInfo.CLAIM_NAME = CLAIM_NAME.value;
                    console.log('요청자명: ' + CLAIM_NAME.value);

                    jsonArray.push(jsonInfo);
                }

                for (var i = 0; i < items_appr_line.length; i++) {
                    var jsonInfo = new Object();
                    var item = items_appr_line.getAt(i);
                    jsonInfo.CRUD = 'I';
                    jsonInfo.APPR_USR_TYPE = item.APPR_USR_TYPE3;
                    jsonInfo.APPR_USR_ID = item.APPR_USR_ID3;
                    jsonInfo.APP_TITLE = APP_H3.value;
                    jsonInfo.APP_TEXT = APP_D3.value;

                    jsonArray_line.push(jsonInfo);
                }

                var data = {
                    V_TYPE: 'PO3_SYNC',
                    V_USR_ID: G_USR_ID,
                    V_BP_CD: G_BP_CD,
                    V_DATA: jsonArray,
                    V_LINE: jsonArray_line,
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
                        }

                    })
                    .then(function (responseObject) {
                        console.log('#### 결재요청완료');
                        deviceToast.ToastIt('### 결재요청완료 ###');
                        vibration.vibrate(0.8);

                        DLVY_REMARK.value = ''; //비고초기화
                        CLAIM_NAME.value = ''; //요청자명초기화
                        selected.value = '선택'; //인수자 초기화
                        DLVY_TEL.value = ''; //인수전화번호 초기화
                        DLVY_PHONE.value = ''; //인수폰번호 초기화
                        DLVY_ADDR.value = ''; //인수배송지주소 초기화

                        apprPopup.value = "Hidden";
                        refresh3Click();
                    })
                    .catch(function (err) {
                        Alerts
                            .alert("Error", "Network Error : " + err, "OK")
                            .then(function (x) { });
                    });
            }
        });
    }
}


// # 탭3 - 상품발주_end

// * 원단위콤마
function numberWithCommas(x) {
    if (x == null || x == 'null') {
        return 0;
    } else {
        return x
            .toString()
            .replace(/\B(?=(\d{3})+(?!\d))/g, ",");
    }
}

// * iOS 뒤로가기
function backBtn_ios(data) {
    if (Environment.ios || Environment.preview) {
        router.goto("c_menu");
    }
}

// * 뒤로가기
function backBtnClick(route) {
    if (dtpk3_visible.value == true) {
        dtpk3_visible.value = false;
    } else {
        router.goto("c_menu");
    }
}

module.exports = {
    tab1_click: tab1_click,
    deviceToast: deviceToast,
    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,
    g_DATE_DAY: g_DATE_DAY,
    g_BP_NM_obs: g_BP_NM_obs,
    g_USR_NM_obs: g_USR_NM_obs,
    backBtn_ios: backBtn_ios,
    backBtnClick: backBtnClick,
    device: device,

    /* 탭1 - 나의상품검색 */
    search: search,
    searchBtnClick: searchBtnClick,

    myItems: myItems,
    BP_ITEM_CD1: BP_ITEM_CD1,
    ITEM_CD1: ITEM_CD1,
    ITEM_NM1: ITEM_NM1,
    SPEC1: SPEC1,
    MAKER1: MAKER1,
    EA1: EA1,
    PRICE1: PRICE1,
    PO_QTY1: PO_QTY1,
    REMARK1: REMARK1,
    shopBtnClick: shopBtnClick,


    /* 탭2 - 장바구니 */
    tab2_click: tab2_click,
    endLoading: endLoading,
    reloadHandler: reloadHandler,
    isLoading: isLoading,

    refresh2Click: refresh2Click,
    TOTAL_AMT2: TOTAL_AMT2,
    items_cart: items_cart,
    BP_ITEM_CD2: BP_ITEM_CD2,
    ITEM_CD2: ITEM_CD2,
    ITEM_NM2: ITEM_NM2,
    SPEC2: SPEC2,
    MAKER2: MAKER2,
    EA2: EA2,
    PRICE2: PRICE2,
    PO_QTY2: PO_QTY2,
    PO_AMT2: PO_AMT2,
    Check2: Check2,

    calcTotalAmt: calcTotalAmt,
    order2Click: order2Click,
    changeQty2: changeQty2,
    saveItem2: saveItem2,
    deleteItem2: deleteItem2,

    /* 탭3 - 상품발주 */

    tab3_click: tab3_click,
    refresh3Click: refresh3Click,
    DEPT_NM1: DEPT_NM1,
    USR_NM1: USR_NM1,
    TELNO1: TELNO1,
    HANDTEL1: HANDTEL1,
    BP_ADDR1: BP_ADDR1,
    JIKGUB1: JIKGUB1,

    isOpen: isOpen,
    selected: selected,
    toggleOpen: function () {
        isOpen.value = !isOpen.value;
    },
    insu_list: insu_list,
    clicked: clicked,
    DLVY_TEL: DLVY_TEL,
    DLVY_PHONE: DLVY_PHONE,
    DLVY_ADDR: DLVY_ADDR,
    DLVY_REMARK: DLVY_REMARK,
    DLVY_ID: DLVY_ID,
    CLAIM_NAME: CLAIM_NAME,

    items_po: items_po,
    TOTAL_AMT3: TOTAL_AMT3,
    BP_ITEM_CD3: BP_ITEM_CD3,
    ITEM_CD3: ITEM_CD3,
    ITEM_NM3: ITEM_NM3,
    SPEC3: SPEC3,
    MAKER3: MAKER3,
    UNIT3: UNIT3,
    PRICE3: PRICE3,
    PO_QTY3: PO_QTY3,
    PO_AMT3: PO_AMT3,
    PO_CNT3: PO_CNT3,
    NEW_YN: NEW_YN,

    deleteItem3: deleteItem3,

    minDate: new Date(Date.parse("1950-01-01T00:00:00.000Z")),
    maxDate: new Date(Date.parse("2050-01-01T00:00:00.000Z")),
    someDate: someDate,
    DLVY_HOPE_DT3: DLVY_HOPE_DT3,
    clk_DLVY_HOPE_DT3: clk_DLVY_HOPE_DT3,
    dtpk3_visible: dtpk3_visible,
    dtpk3_visible_ios: dtpk3_visible_ios,

    po_ok_click3: po_ok_click3,
    appr_click3: appr_click3,
    changeQty3: changeQty3,

    items_appr_line: items_appr_line,
    APPR_DT3: APPR_DT3,

    appr_list: appr_list,
    ADD_APPR_USR_ID: ADD_APPR_USR_ID,
    ADD_APPR_USR_NM: ADD_APPR_USR_NM,
    ADD_APPR_JIKGUB: ADD_APPR_JIKGUB,
    ADD_APPR_DEPT_NM: ADD_APPR_DEPT_NM,

    isOpen2: isOpen2,
    selected2: selected2,
    getApprList: getApprList,
    toggleOpen2: function () {
        isOpen2.value = !isOpen2.value;
    },
    clicked2: clicked2,
    remove_line: remove_line,
    appr_ok_click3: appr_ok_click3,

    APP_H3: APP_H3,
    APP_D3: APP_D3,
    apprPopup: apprPopup,

    chk_bp_cd_po: chk_bp_cd_po,
    chk_bp_cd_appr: chk_bp_cd_appr,
    chk_bp_cd_req_user: chk_bp_cd_req_user,
    chk_dtl_dlv_dt: chk_dtl_dlv_dt,

    temp_ios_date: temp_ios_date,

    clk_DLVY_HOPE_DT3_06611: clk_DLVY_HOPE_DT3_06611,
    DLVY_HOPE_DT3_06611: DLVY_HOPE_DT3_06611,
    on_cal_06611: on_cal_06611
}