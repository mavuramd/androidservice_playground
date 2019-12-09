package com.android.playground;

import com.android.playground.ICounter;

import android.os.Parcel;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;

public class ICounterProxy implements ICounter {
  private android.os.IBinder mRemote;

  public ICounterProxy(android.os.IBinder remote){
    mRemote = remote;
  }

  @Override
  public IBinder asBinder() {
      return mRemote;
  }

  @Override
  public void count() {
    android.os.Parcel packet = android.os.Parcel.obtain();
    packet.writeInterfaceToken(DESCRIPTOR);
    packet.writeString("Java client: Hello playground Server");

    android.os.Parcel reply = android.os.Parcel.obtain();

    try {
        mRemote.transact(0, packet, reply, 0);
    } catch(RemoteException e) {
        return;
    }

  }
}
