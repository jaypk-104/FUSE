package com.foreign.Fuse.Vibration;

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
import android.os.Vibrator;
import android.app.Activity;
import android.content.Context;

public class AndroidVibrator
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void Done402(final UnoObject _this, final UnoObject permission)
    {
        Activity a = com.fuse.Activity.getRootActivity();
        Vibrator v = (Vibrator)a.getSystemService(Context.VIBRATOR_SERVICE);
        v.vibrate((long)(ExternedBlockHost.callUno_Fuse_Vibration_AndroidVibrator__secondsGet403(_this) * 1000));
    }
    
}
