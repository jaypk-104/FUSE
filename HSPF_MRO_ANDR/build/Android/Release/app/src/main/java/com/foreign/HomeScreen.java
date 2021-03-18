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

public class HomeScreen
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void ExitAppFinish433()
    {
        android.app.Activity a = com.apps.hsmro.HSMRO.GetRootActivity();
        a.finish();
    }
    
    public static void ExitAppIntent434()
    {
        android.content.Intent callIntent = new android.content.Intent(android.content.Intent.ACTION_MAIN);
        callIntent.addCategory(android.content.Intent.CATEGORY_HOME);
        callIntent.setFlags(android.content.Intent.FLAG_ACTIVITY_NEW_TASK);
        
        android.app.Activity a = com.apps.hsmro.HSMRO.GetRootActivity();
        a.startActivity(callIntent);
    }
    
}
