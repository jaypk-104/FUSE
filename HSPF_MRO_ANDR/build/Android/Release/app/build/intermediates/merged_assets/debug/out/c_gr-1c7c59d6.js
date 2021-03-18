var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var Alerts = require("FuseJS/Alerts");
var qreader = require('Qreader');
var vibration = require('FuseJS/Vibration');
var deviceToast = require("deviceToast");

var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");

if(Environment.ios) {
    device = "Visible";
} 

var txt = Observable();
var barcode = Observable();
var in_dt = Observable();
var in_dt3 = Observable();
var item_cd = Observable();
var item_nm = Observable();

var qty = Observable();
var items1 = Observable();
var items2 = Observable();
var location = Observable();

var gr_list = Observable();
var gr_item_cd = Observable();
var gr_item_nm = Observable();
var gr_qty = Observable();
var gr_unit = Observable();
var gr_po_no = Observable();
var gr_spec = Observable();
var gr_maker = Observable();
var gr_unit2 = Observable();
var gr_po_no2 = Observable();
var gr_spec2 = Observable();
var gr_maker2 = Observable();

var gr_list2 = Observable();
var gr_item_cd2 = Observable();
var gr_item_nm2 = Observable();
var gr_qty2 = Observable();
var dlv_no2 = Observable();

var dtpk1_visible = Observable(false);


var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + ("0" + (new Date().getMonth()+1)).slice(-2));
var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable( week_day );

var camera = require('FuseJS/Camera');
var cameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require('FuseJS/ImageTools');
var isBusy = Observable(false);

var url = "http://123.142.124.161:8080/Fuse_Customer.jsp";
var g_BP_NM_obs = Observable(g_BP_NM);
var g_USR_NM_obs = Observable(g_USR_NM);

/*
var g_BP_NM_obs = 'test';
var g_USR_NM_obs = 'test';

G_BP_CD = '88881';
G_USR_ID = 'custom2';
var url = "http://123.142.124.166:8083/Fuse_Customer.jsp";
*/


/*마스터계정 일경우, 입고등록 else 물품수령*/
var master_text = Observable("입고등록");
// if(G_USR_ID == 'sh7785' || G_USR_ID == 'gumai' || G_USR_ID == 'kyoungwon' || G_USR_ID == 'hjkim' || G_USR_ID == 'hmaster'|| G_USR_ID == 'dmaster'|| G_USR_ID == 'smaster' || G_USR_ID == 'custom2') {
//     master_text.value = "입고등록";
// } else {
//     master_text.value = "입고등록";
// }



/* Pull Over Start*/
function endLoading() {
    isLoading.value = false;
    btnRefresh();
    console.log("end");
}

function reloadHandler() {
    gr_list2.clear();
    isLoading.value = true;
    setTimeout(endLoading, 1500);
}

var isLoading = Observable(false);
/* Pull Over End*/

/* 새로고침 */
function btnRefresh() {
    gr_list2.clear();

    var data = {
        V_TYPE: 'C_GR_S2',
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
                    if (false) {
                        gr_list2.add({
                            gr_item_cd2: '품목코드',
                            gr_item_nm2: '품명',
                            gr_qty2: '수량',
                            dlv_no2: '세금계산서번호'
                        });
                    }
                    gr_list2.add({
                        gr_item_cd2: data.resultList[i].ITEM_CD,
                        gr_item_nm2: data.resultList[i].ITEM_NM,
                        gr_qty2: data.resultList[i].IN_QTY,
                        gr_unit2: data.resultList[i].UNIT,
                        gr_spec2: data.resultList[i].SPEC,
                        gr_maker2: data.resultList[i].MAKER,
                        gr_po_no2: data.resultList[i].ORDER_NO,
                        //dlv_no2: data.resultList[i].DLVY_NO
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

/*입고스캔버튼*/
function scanBar() {
    
    if(Environment.ios) {
        isBusy.value=true;
        gr_list.clear();

        console.log('ios############################');
        camera
        .takePicture(720, 1280)
        .then(function (image) {
            //isBusy.value=true;
    
            ImageTools
                .getBase64FromImage(image)
                .then(function (base64Image) {
    
                    let today = new Date();
                    let time = '' + (
                        today.getMonth() + 1
                    ) + today.getDate() + today.getHours() + today.getMinutes() + today.getSeconds(); // 시
                    
                    console.log(time);
                    //console.log('base64Image' + base64Image);
    
                    var data = {
                        V_TYPE: 'CAM_I',
                        V_TIME: time,
                        V_PGM_TYPE: 'C_GR',
                        V_IMG: base64Image,
                        V_USR_ID: G_USR_ID,
                        V_BP_CD: G_BP_CD
                    };
                    
                    var url = "http://123.142.124.161:8080/Fuse_Scan.jsp"; 
    
                   
                    return fetch(url, {
                            method: "POST",
                            headers: {
                                "Content-type": "application/json; charset=utf-8"
                            },
                            body: JSON.stringify(data)
                        })
                        .then(function (response) {
                            response.json().then(function(json) { 
                                var jsonStr = JSON.stringify(json) + '';
                                console.log(jsonStr);

                                console.log(jsonStr.indexOf('DL'));
                                if(jsonStr.indexOf('DL') == -1) {
                                    console.log('QR코드를 인식할 수 없습니다.');
                                    Alerts
                                    .alert("Error", "QR코드를 인식할 수 없습니다.", "OK")
                                    .then(function (x) {});

                                    isBusy.value=false;

                                } else {
                                    var DLV_NO = jsonStr.substr(jsonStr.indexOf('DL'), 15); 
                                    console.log('DLV_NO@@@@@@@@@@@@' + DLV_NO);

                                    txt.value = DLV_NO;

                                    var data = {
                                        V_TYPE: 'C_GR_S',
                                        V_DLVY_NO: DLV_NO,
                                        V_IN_DT: in_dt.value, //in_dt.value
                                        V_USR_ID: G_USR_ID,
                                    };

                                    /* 입고내역 호출 */
                                    var url = "http://123.142.124.161:8080/Fuse_Customer.jsp"; 

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
                                            var msg = '';
                                            
                                            // item_cd.value = data.ITEM_CD; item_nm.value = data.ITEM_NM; qty.value =
                                            // data.QTY;
                        
                                            if (data.resultList.length > 0 ) {
                                                if (data.resultList[0].FLAG == 'DUP') {
                                                    flag = 'DUP';
                                                } else if (data.resultList[0].FLAG == 'USER') {
                                                    flag = 'USER';
                                                    msg = '청구자: ' + data.resultList[0].ITEM_CD + ', 발주자: ' + data.resultList[0].ITEM_NM;
                                                } else if (data.resultList[0].FLAG == 'SUCCESS') {
                                                    flag = 'SUCCESS';
                                                } 
                        
                                                if (flag == 'SUCCESS') {
                                                    for (var i = 0; i < data.resultList.length; i++) {
                                                        if (false) { //i == 0
                                                            gr_list.add({
                                                                gr_item_cd: '품목코드',
                                                                gr_item_nm: '품명',
                                                                gr_qty: '수량'
                                                            });
                                                        }
                                                        gr_list.add({
                                                            gr_item_cd: data.resultList[i].ITEM_CD,
                                                            gr_item_nm: data.resultList[i].ITEM_NM,
                                                            gr_qty: data.resultList[i].IN_QTY,
                                                            gr_unit: data.resultList[i].UNIT,
                                                            gr_po_no: data.resultList[i].ORDER_NO,
                                                            gr_spec: data.resultList[i].SPEC,
                                                            gr_maker: data.resultList[i].MAKER,
                                                        });
                                                    }
                                                    
                                                    vibration.vibrate(0.8);
                            
                                                } else if (flag == 'USER') {
                                                    Alerts
                                                        .alert("확인", '발주청구한 계정으로 입고가능합니다. \n\n' + msg, "OK")
                                                        .then(function (x) {})
                                                } else if (flag == 'DUP') {
                                                    Alerts
                                                        .alert("확인", '이미 입고 된 거래명세서입니다.', "OK")
                                                        .then(function (x) {})
                                                }
                                            }

                                            isBusy.value=false;
                        
                                            
                                        })
                                        .catch(function (err) {
                                            console.log("catch Error : " + err);
                                            console.log("DB Failed.");
                                            Alerts
                                                .alert("Error", "Network Error : " + err, "OK")
                                                .then(function (x) {});
                                        });
                                }
                            })
                            vibration.vibrate(0.8);
                        })
                        
                        
                });
        })
        .then(function (response) {
            console.log("Got response");
        })
        .catch(function (e) {
            isBusy.value = false;
            console.log("Error?");
            console.log(e);
            
        });
    } else if (Environment.android) {
        console.log('android############################');

        qreader
        .scan()
        .then(function (res) {
            var status = 0;
            var response_ok = false;
            gr_list.clear();

            if(res.indexOf('DL') == -1) {
                console.log('QR코드를 인식할 수 없습니다.');
                Alerts
                .alert("Error", "QR코드를 인식할 수 없습니다.", "OK")
                .then(function (x) {});
               
            }  else {
                
                txt.value = res;

                var data = {
                    V_TYPE: 'C_GR_S',
                    V_DLVY_NO: txt.value,
                    V_IN_DT: in_dt.value, //in_dt.value
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
                        var msg = '';
                        
                        console.log('XXXXXXXXXXXX' + JSON.stringify(data.resultList[0]));
                        // item_cd.value = data.ITEM_CD; item_nm.value = data.ITEM_NM; qty.value =
                        // data.QTY;
    
                        if (data.resultList.length > 0 ) {
                            if (data.resultList[0].FLAG == 'DUP') {
                                flag = 'DUP';
                            } else if (data.resultList[0].FLAG == 'USER') {
                                flag = 'USER';
                                msg = '청구자: ' + data.resultList[0].ITEM_CD + ', 발주자: ' + data.resultList[0].ITEM_NM;
                            } else if (data.resultList[0].FLAG == 'SUCCESS') {
                                flag = 'SUCCESS';
                            } 
    
                            if (flag == 'SUCCESS') {
                                for (var i = 0; i < data.resultList.length; i++) {
                                    if (false) { //i == 0
                                        gr_list.add({
                                            gr_item_cd: '품목코드',
                                            gr_item_nm: '품명',
                                            gr_qty: '수량'
                                        });
                                    }
                                    gr_list.add({
                                        gr_item_cd: data.resultList[i].ITEM_CD,
                                        gr_item_nm: data.resultList[i].ITEM_NM,
                                        gr_qty: data.resultList[i].IN_QTY,
                                        gr_unit: data.resultList[i].UNIT,
                                        gr_po_no: data.resultList[i].ORDER_NO,
                                        gr_spec: data.resultList[i].SPEC,
                                        gr_maker: data.resultList[i].MAKER,
                                    });
                                }
        
                                vibration.vibrate(0.8);
        
                            } else if (flag == 'USER') {
                                Alerts
                                    .alert("확인", '발주청구한 계정으로 입고가능합니다. \n\n' + msg, "OK")
                                    .then(function (x) {})
                            } else if (flag == 'DUP') {
                                Alerts
                                    .alert("확인", '이미 입고 된 거래명세서입니다.', "OK")
                                    .then(function (x) {})
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

            
        });
    }
    
    
};

/*입고전송버튼*/
function sendBtn() {
    if (txt.value == undefined || txt.value == '') {
        Alerts
            .alert("Error", "거래명세서 바코드를 스캔하세요.", "OK")
            .then(function (x) {});
    } else {


        var status = 0;
        var response_ok = false;

        var data = {
            V_TYPE: 'C_GR_I',
            V_DLVY_NO: txt.value,
            V_IN_DT: in_dt.value, //in_dt.value
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

                // item_cd.value = data.ITEM_CD; item_nm.value = data.ITEM_NM; qty.value =
                // data.QTY;

                if (data.resultList[0].FLAG == 'DUP') {
                    flag = 'DUP';
                } else if (data.resultList[0].FLAG == 'SUCCESS') {
                    flag = 'SUCCESS'
                }

                if (flag == 'SUCCESS') {
                    vibration.vibrate(0.8);
                    deviceToast.ToastIt('입고완료');
                    gr_list.clear();
                    txt.value = '';

                } else if (flag == 'DUP') {
                    Alerts
                        .alert("확인", '이미 입고 된 거래명세서입니다.', "OK")
                        .then(function (x) {})
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

};

/*입고등록-초기화*/
function clrBtn() {
    gr_list.clear();
    txt.value = '';
    in_dt.value = getFormatDate(new Date());
}

function removeItem(sender) {
    sender.data.type = 'GC';
    var res = JSON.stringify(sender.data);
    var data = JSON.parse(res);

    Alerts
        .confirm("Confirm", "Do you want to cancel Inbound?", "YES", "NO")
        .then(function (btn) {
            if (btn == true) {
                fetch(url, {
                        method: 'POST',
                        headers: {
                            "Content-type": "application/json; charset=utf-8"
                        },
                        body: JSON.stringify(sender.data)
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

                        if (data.STS == 'YES') {
                            console.log('입고삭제 완료');
                            items1.remove(sender.data);

                            var chg_flag = 'N';

                            for (var i = 0; i < gr_list.length; i++) {
                                var item = gr_list.getAt(i);

                                if (item.gr_item_cd == data.ITEM_CD) {
                                    if (Number(item.gr_qty) - Number(data.QTY) == 0) {
                                        gr_list.remove(item);
                                    } else {
                                        gr_list.replaceAt(i, {
                                            gr_item_cd: item.gr_item_cd,
                                            gr_qty: (Number(item.gr_qty) - Number(data.QTY)).toFixed(2)
                                        });
                                    }
                                    //chg_flag = 'Y';
                                }
                            }

                            vibration.vibrate(0.8);
                        } else {
                            Alerts
                                .alert("Inbound Failed.", data.MSG_TEXT, "NO")
                                .then(function (x) {
                                    console.log(data.MSG_TEXT);
                                })
                        }

                    })
                    .catch(function (err) {
                        Alerts
                            .alert("Error", "Network Error : " + err, "OK")
                            .then(function (x) {});
                    })
            }
        });

}

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

var someDate = Observable(getFormatDate(new Date()));

someDate.onValueChanged(module, function (date) {
    var new_dt = date;
    in_dt.value = getFormatDate(new_dt); //new_dt;
    dtpk1_visible.value = false;
});

function clk_in_dt1() {
    dtpk1_visible.value = true;
}

function backBtn(data) {
    if(dtpk1_visible.value == true) {
        dtpk1_visible.value = false;
    } else {
        txt.value = '';
        router.goto("c_menu");
    }
}

function backBtn_ios(data) {
    if (Environment.ios || Environment.preview) {
        router.goto("c_menu");
    }
}

module.exports = {
    scanBar: scanBar,
    sendBtn: sendBtn,
    btnRefresh: btnRefresh,
    clrBtn: clrBtn,
    deviceToast: deviceToast,

    txt: txt,
    item_cd: item_cd,
    item_nm: item_nm,
    qty: qty,
    location: location,
    gr_list: gr_list,
    gr_item_cd: gr_item_cd,
    gr_item_nm: gr_item_nm,
    gr_qty: gr_qty,
    
    gr_unit: gr_unit,
    gr_po_no: gr_po_no,
    gr_spec: gr_spec,
    gr_maker: gr_maker,
    
    gr_unit2: gr_unit2,
    gr_po_no2: gr_po_no2,
    gr_spec2: gr_spec2,
    gr_maker2: gr_maker2,

    gr_list2: gr_list2,
    gr_item_cd2: gr_item_cd2,
    gr_item_nm2: gr_item_nm2,
    gr_qty2: gr_qty2,
    dlv_no2: dlv_no2,

    minDate: new Date(Date.parse("1950-01-01T00:00:00.000Z")),
    maxDate: new Date(Date.parse("2050-01-01T00:00:00.000Z")),
    someDate: someDate,
    in_dt: in_dt,
    dtpk1_visible: dtpk1_visible,
    clk_in_dt1: clk_in_dt1,

    items1: items1,
    items2: items2,
    removeItem: removeItem,

    vibration: vibration,
    isLoading: isLoading,
    reloadHandler: reloadHandler,

    backBtn:backBtn,
    backBtn_ios:backBtn_ios,
    device:device,
    
    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,
    g_DATE_DAY: g_DATE_DAY,
    g_BP_NM_obs: g_BP_NM_obs,
    g_USR_NM_obs: g_USR_NM_obs,

    master_text: master_text,
    isBusy: isBusy


   
}