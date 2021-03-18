package com.foreign;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import com.google.android.gms.common.api.CommonStatusCodes;
import com.fuse.qreader.BarcodeCaptureActivity;
import com.google.android.gms.vision.barcode.Barcode;

public class QreaderImpl
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static Object Init435()
    {
        com.fuse.Activity.ResultListener l = new com.fuse.Activity.ResultListener() {
            @Override public boolean onResult(int requestCode, int resultCode, android.content.Intent data) {
                return com.foreign.QreaderImpl.OnRecieved436(requestCode, resultCode, data);
            }
        };
        com.fuse.Activity.subscribeToResults(l);
        return l;
    }
    
    public static boolean OnRecieved436(final int requestCode,final int resultCode,final Object data)
    {
        if (requestCode == ExternedBlockHost.callUno_QreaderImpl_RC_BARCODE_CAPTUREGet437()&&resultCode == CommonStatusCodes.SUCCESS && data != null) {
        
        				Barcode barcode = ((Intent)data).getParcelableExtra(BarcodeCaptureActivity.BarcodeObject);
        				if(barcode.displayValue != ""){
        							ExternedBlockHost.callUno_QreaderImpl_Picked438((String)barcode.displayValue);
        				}else{
        								ExternedBlockHost.callUno_QreaderImpl_Cancelled439();
        				}
        }
        else {
        				ExternedBlockHost.callUno_QreaderImpl_Cancelled439();
        }
        
            return (requestCode == ExternedBlockHost.callUno_QreaderImpl_RC_BARCODE_CAPTUREGet437());
    }
    
    public static void ScannerImpl440()
    {
        Activity a = com.fuse.Activity.getRootActivity();
        // Intent intent = new Intent(Intent.ACTION_PICK, android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        Intent intent = new Intent(a, BarcodeCaptureActivity.class);
        a.startActivityForResult(intent, ExternedBlockHost.callUno_QreaderImpl_RC_BARCODE_CAPTUREGet437());
    }
    
}
