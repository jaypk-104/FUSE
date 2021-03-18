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
import android.provider.MediaStore;
import com.fuse.Activity;
import android.content.Intent;
import com.fusetools.camera.Image;
import com.fusetools.camera.ImageStorageTools;

public class AddPicturePermissionCheckCommand
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void AddToCameraRollInternal395(final String path,final com.foreign.Uno.Action success,final com.foreign.Uno.Action_String reject)
    {
        try{
        	Image p = Image.fromPath(path);
        	Image newImage = ImageStorageTools.copyImage(p.getFile(), ImageStorageTools.getOutputMediaFile(false, p.getFileName()), false);
        	Intent mediaScanIntent = new Intent(Intent.ACTION_MEDIA_SCANNER_SCAN_FILE);
        	mediaScanIntent.setData(newImage.getFileUri());
        	com.fuse.Activity.getRootActivity().sendBroadcast(mediaScanIntent);
        	success.run();
        }catch(Exception e){
        	reject.run(e.getMessage());
        }
    }
    
}
