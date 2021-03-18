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
import android.content.Intent;
import com.fusetools.camera.Image;
import com.fusetools.camera.ImageStorageTools;
import android.support.v4.content.ContextCompat;

public class CheckPermissionsCommand
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void CheckPermissionsInternal391(final com.foreign.Uno.Action_String onComplete,final com.foreign.Uno.Action_String onFail)
    {
        if (ContextCompat.checkSelfPermission(com.fuse.Activity.getRootActivity(), android.Manifest.permission.READ_EXTERNAL_STORAGE) != com.fuse.Activity.getRootActivity().getPackageManager().PERMISSION_GRANTED)
        {
        	onFail.run("User does not have permission to read");
        }
        else if (ContextCompat.checkSelfPermission(com.fuse.Activity.getRootActivity(), android.Manifest.permission.WRITE_EXTERNAL_STORAGE) != com.fuse.Activity.getRootActivity().getPackageManager().PERMISSION_GRANTED)
        {
        	onFail.run("User does not have permission to write");
        }
        else if (ContextCompat.checkSelfPermission(com.fuse.Activity.getRootActivity(), android.Manifest.permission.CAMERA) != com.fuse.Activity.getRootActivity().getPackageManager().PERMISSION_GRANTED)
        {
        	onFail.run("User does not have permission access the camera");
        }
        else
        {
        	onComplete.run("User has permission to read, write and access camera");
        }
    }
    
}
