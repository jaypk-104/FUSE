package com.foreign.Fuse.CameraRoll;

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
import com.fuse.Activity;
import com.fusetools.camera.Image;
import android.content.Intent;
import com.fusetools.camera.ImageStorageTools;

public class SelectPictureClosure
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void HandleIntent397(final UnoObject _this, final int resultCode,final Object intent,final com.foreign.Uno.Action_String onComplete,final com.foreign.Uno.Action_String onFail)
    {
        Intent i = (Intent)intent;
        switch (resultCode)
        {
        	case android.app.Activity.RESULT_OK:
        		try{
        			Image scratch = ImageStorageTools.createScratchFromUri(i.getData());
        			String ext = scratch.getExtension().toLowerCase();
        			if(ext.equals("jpg") || ext.equals("jpeg") || ext.equals("raw"))
        				scratch.correctOrientationFromExif();
        
        			onComplete.run(scratch.getFilePath());
        		}catch(Exception e){
        			e.printStackTrace();
        			onFail.run(e.getMessage());
        		}
        		return;
        	case android.app.Activity.RESULT_CANCELED:
        		onFail.run("User aborted select");
        		return;
        	default:
        		onFail.run("Picture could not be selected");
        }
    }
    
}
