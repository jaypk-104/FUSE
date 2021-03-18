package com.foreign.Fuse.BackgroundDownload;

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

public class BackgroundDownload
{
    static void debug_log(Object message)
    {
        android.util.Log.d("HSMRO", (message==null ? "null" : message.toString()));
    }

    public static void InitInner407(final com.foreign.Uno.Action_int_int_int onProgress,final com.foreign.Uno.Action_int_String onSucceeded,final com.foreign.Uno.Action_int_String onFailed,final com.foreign.Uno.Action_int onPaused)
    {
        com.fuse.BackgroundDownload.BackgroundDownloader.Init(onProgress, onSucceeded, onFailed, onPaused);
    }
    
    public static void PauseDownloadInner408(final int downloadID)
    {
        com.fuse.BackgroundDownload.BackgroundDownloader.PauseDownload(downloadID);
    }
    
    public static int ResumeDownloadInner409(final int downloadID)
    {
        com.fuse.BackgroundDownload.BackgroundDownloader.ResumeDownload(downloadID);
        return downloadID;
    }
    
    public static int StartDownloadInner410(final String urlStr)
    {
        return com.fuse.BackgroundDownload.BackgroundDownloader.StartDownload(urlStr);
    }
    
    public static void StopDownloadInner411(final int downloadID)
    {
        com.fuse.BackgroundDownload.BackgroundDownloader.StopDownload(downloadID);
    }
    
}
