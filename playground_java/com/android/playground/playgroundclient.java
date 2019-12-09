package com.android.playground;

import android.os.IBinder;
import android.os.ServiceManager;
import android.util.Log;

public class playgroundclient {

	public static void main(String[] args) {
    Log.i("Playgroundclient", "Java client is now starting");
		IBinder binder = ServiceManager.getService("ICounter");
		ICounter counter = new ICounterProxy(binder);
    Log.i("Playgroundclient", "Java client going to execute remote method");
		counter.count();
    Log.i("Playgroundclient", "Java client exiting");
	}
}
