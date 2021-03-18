package com.foreign.Fuse.Camera;

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
import com.fusetools.camera.Image;
import android.os.Build;
import android.support.v4.content.FileProvider;
import java.io.File;
import android.net.Uri;
import android.util.Log;
import android.content.Intent;

public class TakePictureCommand
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static Object CreateImage393()
    {
        try {
        	return Image.create();
        } catch(Exception e) {
        	e.printStackTrace();
        	return null;
        }
    }
    
    public static Object CreateIntent394(final Object photo)
    {
        Image p = (Image)photo;
        try {
        	Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        
        	//FileProvider way for Marshmallow+ (API 23)
        	if (Build.VERSION.SDK_INT > Build.VERSION_CODES.LOLLIPOP) {
        
        		File photoFile = p.getFile();
        		if (photoFile != null) {
        			Uri photoURI = FileProvider.getUriForFile(
        				com.fuse.Activity.getRootActivity(),
        				"com.apps.hsmro.camera_file_provider",
        				photoFile);
        			intent.putExtra(MediaStore.EXTRA_OUTPUT, photoURI);
        		} else {
        			return null;
        		}
        	} else {
        		intent.putExtra(MediaStore.EXTRA_OUTPUT, p.getFileUri());
        	}
        
        	return intent;
        } catch (Exception e) {
        	e.printStackTrace();
        	return null;
        }
    }
    
}
