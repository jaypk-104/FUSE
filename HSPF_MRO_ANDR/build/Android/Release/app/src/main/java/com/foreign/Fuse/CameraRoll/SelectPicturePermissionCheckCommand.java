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

public class SelectPicturePermissionCheckCommand
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static Object CreateIntent398()
    {
        Intent intent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        intent.setType("image/*");
        return intent;
    }
    
}
