package com.foreign.Fuse.Alerts;

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
import java.lang.Runnable;
import android.app.AlertDialog;
import com.fuse.Activity;
import android.content.DialogInterface;

public class NativeAlerts
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void AlertNative404(final String title,final String message,final String okButtonLabel,final com.foreign.Uno.Action onOK)
    {
        Runnable r = new Runnable() {
        	@Override
        	public void run() {
        		new AlertDialog.Builder(Activity.getRootActivity())
        			.setMessage(message)
        			.setTitle(title)
        			.setPositiveButton(okButtonLabel, new DialogInterface.OnClickListener()
        			{
        				@Override
        				public void onClick(DialogInterface dialog, int which)
        				{
        					onOK.run();
        				}
        			})
        			.create().show();
        	}
        };
        Activity.getRootActivity().runOnUiThread(r);
    }
    
    public static void ConfirmNative405(final String title,final String message,final String okButtonLabel,final String cancelButtonLabel,final com.foreign.Uno.Action onOK,final com.foreign.Uno.Action onCancel)
    {
        Runnable r = new Runnable() {
        	@Override
        	public void run() {
        		new AlertDialog.Builder(Activity.getRootActivity())
        			.setMessage(message)
        			.setTitle(title)
        			.setPositiveButton(okButtonLabel, new DialogInterface.OnClickListener()
        			{
        				@Override
        				public void onClick(DialogInterface dialog, int which)
        				{
        					onOK.run();
        				}
        			})
        			.setNegativeButton(cancelButtonLabel, new DialogInterface.OnClickListener()
        			{
        				@Override
        				public void onClick(DialogInterface dialog, int which)
        				{
        					onCancel.run();
        				}
        			})
        			.create().show();
        	}
        };
        Activity.getRootActivity().runOnUiThread(r);
    }
    
}
