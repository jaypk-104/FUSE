package com.foreign.Native.Android;

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

public class DatePickerView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static Object Create421()
    {
        return new android.widget.DatePicker(com.apps.hsmro.HSMRO.GetRootActivity());
    }
    
    public static void GetDate422(final UnoObject _this, final Object datePickerHandle,final com.uno.IntArray x)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        x.set(0, datePicker.getYear());
        x.set(1, datePicker.getMonth());
        x.set(2, datePicker.getDayOfMonth());
    }
    
    public static long GetMS423(final int year,final int month,final int day)
    {
        java.util.Calendar c = java.util.Calendar.getInstance();
        c.set(year, month, day);
        return c.getTime().getTime();
    }
    
    public static void Init424(final UnoObject _this, final Object datePickerHandle,final com.foreign.Uno.Action onDateChangedCallback)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        java.util.Calendar c = java.util.Calendar.getInstance();
        
        int y = c.get(java.util.Calendar.YEAR);
        int m = c.get(java.util.Calendar.MONTH);
        int d = c.get(java.util.Calendar.DAY_OF_MONTH);
        
        datePicker.init(y, m, d, new android.widget.DatePicker.OnDateChangedListener() {
        
        	public void onDateChanged(android.widget.DatePicker view, int year, int month, int day) {
        		onDateChangedCallback.run();
        	}
        
        });
    }
    
    public static void SetDate425(final UnoObject _this, final Object datePickerHandle,final int year,final int month,final int day)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        datePicker.updateDate(year, month, day);
    }
    
    public static void SetMaxDate426(final UnoObject _this, final Object datePickerHandle,final long ms)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        datePicker.setMaxDate(ms);
    }
    
    public static void SetMinDate427(final UnoObject _this, final Object datePickerHandle,final long ms)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        datePicker.setMinDate(ms);
    }
    
}
