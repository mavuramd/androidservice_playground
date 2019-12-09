package com.android.playground;

import android.os.IInterface;

public interface ICounter extends IInterface {
  static final java.lang.String DESCRIPTOR = "ICounter";
  void count();
}
