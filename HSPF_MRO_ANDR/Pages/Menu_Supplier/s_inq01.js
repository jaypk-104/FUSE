var Observable = require("FuseJS/Observable");
var Lifecycle = require('FuseJS/Lifecycle');
var deviceToast = require("deviceToast");
var Alerts = require("FuseJS/Alerts");

var Environment = require('FuseJS/Environment');
var device = Observable("Hidden");

if(Environment.ios) {
    device = "Visible";
} 

var items = Observable();
var ITEM_CD = Observable();
var INQ_QTY = Observable();
var SPEC = Observable();
var UNIT = Observable();
var ITEM_NM = Observable();
var REMARK = Observable();
var INQ_DT = Observable();
var INQ_HOPE_DT = Observable();
var END_INQ_TIME = Observable();
var END_INQ_DT = Observable();
var INQ_PRC = Observable();
var STATUS_NM = Observable();
var BP_NM = Observable();
var USR_NM = Observable();

var REMARK_TOAD = Observable();
var INQ_AMT = Observable(0);
var INQ_NO = Observable();

var IDX = Observable();
var popup1_visible = Observable(false);

var camera = require('FuseJS/Camera');
var cameraRoll = require("FuseJS/CameraRoll");
var ImageTools = require('FuseJS/ImageTools');

var images = Observable();
var imgFileName = Observable("파일명");
var img_visible = Observable(false);
var img_url = Observable();

var POP_ITEM_NM = Observable();
var POP_INQ_QTY = Observable();
var POP_UNIT = Observable();
var POP_SPEC = Observable();

var imgFilePc = Observable();

var loading_visible = Observable(false);
var cancel_remark = Observable();

var clicked_data = null;

var s_inq01_cnt = Observable(false);

var g_DATE_DD = Observable(("0" + new Date().getDate()).slice(-2));
var g_DATE_YM = Observable(new Date().getFullYear() + "." + (
    "0" + (
        new Date().getMonth() + 1
        )
).slice(-2));


var week_eng = new Array('SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT');
var week_kor = new Array('일', '월', '화', '수', '목', '금', '토');
var week_day = week_kor[new Date().getDay()] + ', ' + week_eng[new Date().getDay()]
var g_DATE_DAY = Observable(week_day);

var url = "http://123.142.124.161:8080/Fuse_Supplier.jsp";

// var g_BP_NM_obs = 'test';
// var g_USR_NM_obs = 'test';

// G_BP_CD = '55555';
// G_USR_ID = 'supp1'; ///////////금조부터!!!!!!!!!!!!!!!!!!!!!!!1
var g_BP_NM_obs = Observable(g_BP_NM);
var g_USR_NM_obs = Observable(g_USR_NM);
/* 
var url = "http://123.142.124.166:8080/Fuse_Supplier.jsp";

*/
cancel_type = ''; //견적포기 메모
       
function endLoading() {
    isLoading.value = false;
    btnRefresh();
}

function reloadHandler() {
    isLoading.value = true;
    setTimeout(endLoading, 1500);
}

var isLoading = Observable(false);

function btnRefresh(obj) {

    // var self = this;

    // const getCircularReplacer = () => {
    //     const seen = new WeakSet();
    //     return (key, value) => {
    //       if (typeof value === "object" && value !== null) {
    //         if (seen.has(value)) {
    //           return;
    //         }
    //         seen.add(value);
    //       }
    //       return value;
    //     };
    //   };
      
    //   console.log(JSON.stringify(self, getCircularReplacer()));

    var data = {
        V_TYPE: 'S',
        V_BP_CD: G_BP_CD
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

            items.clear();
            for (var i in responseObject.resultList) {
                var data = responseObject.resultList[i];
                console.log(data);
                items.add({
                    INQ_NO: data.INQ_NO,
                    INQ_SEQ: data.INQ_SEQ,
                    ITEM_CD: data.ITEM_CD,
                    UNIT: data.UNIT,
                    SPEC: data.SPEC,
                    INQ_QTY: numberWithCommas(data.INQ_QTY),
                    ITEM_NM: data.ITEM_NM,
                    REMARK: data.REMARK,
                    INQ_DT: data.INQ_DT,
                    INQ_HOPE_DT: data.INQ_HOPE_DT,
                    END_INQ_DT: data.END_INQ_DT,
                    END_INQ_TIME: data.END_INQ_TIME,
                    RMARK_SUPPAD: data.RMARK_SUPPAD,
                    TOTAL_PRC: "0",
                    IDX: i,
                    MAKER: data.MAKER,
                    STATUS_NM: data.STATUS_NM,
                    BP_NM: data.BP_NM,
                    USR_NM: data.USR_NM,

                    FILE_NM: data.FILE_NM,
                    FILE_NM_PC: data.FILE_NM_PC
                });
            }

            if (items.length == 0) {
                s_inq01_cnt.value = true;
            } else {
                s_inq01_cnt.value = false;
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

/*견적팝업*/
function sendBtn(obj) {
    popup1_visible.value = true;

    var res = JSON.stringify(obj);
    var data = JSON.parse(res);

    INQ_PRC.value = '';
    INQ_AMT.value = 0;
    REMARK_TOAD.value = '';
    images.clear();

    clicked_data = obj.data;

    POP_ITEM_NM.value = clicked_data.ITEM_NM;
    POP_INQ_QTY.value = clicked_data.INQ_QTY;
    POP_UNIT.value = clicked_data.UNIT;
    POP_SPEC.value = clicked_data.SPEC;

    images.add(
        {imgFileName: clicked_data.FILE_NM, imgFilePc: clicked_data.FILE_NM_PC}
    );
}

/* 견적제출 */
function okBtn(obj) {

    var V_INQ_NO = clicked_data.INQ_NO;
    var V_INQ_SEQ = clicked_data.INQ_SEQ;
    var V_INQ_PRC = INQ_PRC.value;
    var V_REMARK_TOAD = REMARK_TOAD.value;

    var IDX = clicked_data.IDX;

    var data = {
        V_TYPE: 'U',
        V_BP_CD: G_BP_CD,
        V_INQ_NO: V_INQ_NO,
        V_INQ_SEQ: V_INQ_SEQ,
        V_INQ_PRC: V_INQ_PRC,
        V_REMARK_TOAD: V_REMARK_TOAD
    };

    if (INQ_PRC.value == '') {
        Alerts
            .alert("Error", "견적단가를 입력하세요.", "확인")
            .then(function (x) {});
    } else {
        console.log('V_INQ_PRC:::' + V_INQ_PRC);
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
                }

            })
            .then(function (responseObject) {

                popup1_visible.value = false;
                
                var msg = '';

                for (var i = 0; i < items.length; i++) {
                    var item = items.getAt(i);

                    if (item.IDX == IDX) {
                        items.remove(item);
                        msg = '[' + item.ITEM_NM + '] \n견적제출완료'
                        deviceToast.ToastIt(msg);
                    }
                }

                if (items.length == 0) {
                    s_inq01_cnt.value = true;
                } else {
                    s_inq01_cnt.value = false;
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

/* 팝업닫기 */
function cancelBtn() {
    POP_ITEM_NM.value = '';
    POP_INQ_QTY.value = '';
    POP_UNIT.value = '';
    POP_SPEC.value = '';

    INQ_PRC.value = '';
    INQ_AMT.value = 0;
    REMARK_TOAD.value = '';

    images.clear();

    popup1_visible.value = false;

}

function numberWithCommas(x) {
    return x
        .toString()
        .replace(/\B(?=(\d{3})+(?!\d))/g, ",");
}

/* 팝업단가변경 */
function changeprc(obj) {
    if (isNaN(INQ_PRC.value) == true) {
        INQ_PRC.value = INQ_PRC
            .value
            .slice(0, -1);
    } else if (INQ_PRC.value.charAt(0) == '0') {
        //300console.log("here");
        INQ_PRC.value = INQ_PRC
            .value
            .slice(1);
    } else {
        var chg_INQ_PRC = Number(INQ_PRC.value);
        var qty_temp = clicked_data
            .INQ_QTY
            .replace(',', '');

        INQ_AMT.value = numberWithCommas(chg_INQ_PRC * qty_temp);
    }
}

function imgClick() {
    img_url.value = "http://123.142.124.161:8080/mro_data/" + images
        .getAt(0)
        .imgFilePc;

    popup1_visible.value = false;
    img_visible.value = true;
}

function imgClick2() {
    console.log('click2');
    //popup1_visible.value = true; img_visible.value = false;
}

Lifecycle.on("enteringForeground", function () {
    console.log("On Launch Test111111111111111");

    var data = {
        V_TYPE: 'S',
        V_BP_CD: G_BP_CD
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

            items.clear();
            for (var i in responseObject.resultList) {
                var data = responseObject.resultList[i];
                console.log(data);
                items.add({
                    INQ_NO: data.INQ_NO,
                    INQ_SEQ: data.INQ_SEQ,
                    ITEM_CD: data.ITEM_CD,
                    UNIT: data.UNIT,
                    SPEC: data.SPEC,
                    INQ_QTY: numberWithCommas(data.INQ_QTY),
                    ITEM_NM: data.ITEM_NM,
                    REMARK: data.REMARK,
                    INQ_DT: data.INQ_DT,
                    INQ_HOPE_DT: data.INQ_HOPE_DT,
                    END_INQ_DT: data.END_INQ_DT,
                    END_INQ_TIME: data.END_INQ_TIME,
                    RMARK_SUPPAD: data.RMARK_SUPPAD,
                    TOTAL_PRC: "0",
                    IDX: i,
                    MAKER: data.MAKER,
                    STATUS_NM: data.STATUS_NM,
                    BP_NM: data.BP_NM,
                    USR_NM: data.USR_NM,

                    FILE_NM: data.FILE_NM,
                    FILE_NM_PC: data.FILE_NM_PC
                });
            }

            if (items.length == 0) {
                s_inq01_cnt.value = true;
            } else {
                s_inq01_cnt.value = false;
            }
        })
        .catch(function (err) {
            console.log("catch Error : " + err);
            console.log("DB Failed.");
            Alerts
                .alert("Error", "Network Error : " + err, "OK")
                .then(function (x) {});
        });

});

function startLoading() {
    isBusy.activate();
    setTimeout(function () {
        isBusy.deactivate();
    }, 4000);
}

function abdYesClick(args) {
    console.log('cancel_type; ' + cancel_type);
    console.log('cancel_remark; ' + cancel_remark);

    var data = {
        V_TYPE: 'C',
        V_BP_CD: G_BP_CD,
        V_INQ_NO: args.data.INQ_NO,
        V_INQ_SEQ: args.data.INQ_SEQ,
        V_INQ_TYPE: cancel_type,
        V_INQ_REMARK: cancel_remark.value
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
            }

        })
        .then(function (responseObject) {
            var msg = '';

            for (var i = 0; i < items.length; i++) {
                var item = items.getAt(i);
                console.log("here: " + i);

                if (item.IDX == args.data.IDX) {
                    items.remove(item);
                    msg = '[' + item.ITEM_NM + '] \n견적포기완료'
                    deviceToast.ToastIt(msg);
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

function backBtn(data) {

    if (Environment.ios || Environment.preview) {
        console.log('backkkkkk 33333');

        Alerts
            .confirm("확인", "로그아웃 하시겠습니까?", "YES", "NO")
            .then(function (btn) {
                if (btn == true) {
                    console.log('2.main_yn? : ' + main_yn);
                    router.goto("login");
                    main_yn = "Y";
                }
            });

    } else {
        //이미지팝업에서 뒤로가기 클릭 시, 로그아웃X 이미지 닫기.
        if (img_visible.value == true) {
            img_visible.value = false;
            popup1_visible.value = true;
        } else {
            Alerts
                .confirm("확인", "로그아웃 하시겠습니까?", "YES", "NO")
                .then(function (btn) {
                    if (btn == true) {
                        console.log('2.main_yn? : ' + main_yn);
                        router.goto("login");
                        main_yn = "Y";
                    }
                })
        }
    }
}

function test(arg) {
    console.log('testttt');
    console.log();
}

module.exports = {
    btnRefresh: btnRefresh,
    changeprc: changeprc,
    sendBtn: sendBtn,
    okBtn: okBtn,
    cancelBtn: cancelBtn,
    deviceToast: deviceToast,
    startLoading: startLoading,
    abdYesClick: abdYesClick,
    test: test,
    items: items,
    ITEM_CD: ITEM_CD,
    INQ_QTY: INQ_QTY,
    UNIT: UNIT,
    SPEC: SPEC,
    ITEM_NM: ITEM_NM,
    REMARK: REMARK,
    INQ_DT: INQ_DT,
    INQ_HOPE_DT: INQ_HOPE_DT,
    END_INQ_TIME: END_INQ_TIME,
    END_INQ_DT: END_INQ_DT,
    INQ_PRC: INQ_PRC,
    REMARK_TOAD: REMARK_TOAD,
    INQ_AMT: INQ_AMT,
    IDX: IDX,
    INQ_NO: INQ_NO,
    STATUS_NM: STATUS_NM,
    BP_NM: BP_NM,
    USR_NM: USR_NM,

    POP_ITEM_NM: POP_ITEM_NM,
    POP_INQ_QTY: POP_INQ_QTY,
    POP_UNIT: POP_UNIT,
    POP_SPEC: POP_SPEC,

    popup1_visible: popup1_visible,

    imgClick: imgClick,
    imgClick2: imgClick2,
    camera: camera,
    cameraRoll: cameraRoll,

    images: images,
    imgFileName: imgFileName,
    imgFilePc: imgFilePc,
    img_visible: img_visible,
    img_url: img_url,

    loading_visible: loading_visible,
    s_inq01_cnt: s_inq01_cnt,

    endLoading: endLoading,
    reloadHandler: reloadHandler,
    isLoading: isLoading,

    g_DATE_DD: g_DATE_DD,
    g_DATE_YM: g_DATE_YM,
    g_DATE_DAY: g_DATE_DAY,
    g_BP_NM_obs: g_BP_NM_obs,
    g_USR_NM_obs: g_USR_NM_obs,

    backBtn: backBtn,
    cancel_remark: cancel_remark,
    device: device
}





