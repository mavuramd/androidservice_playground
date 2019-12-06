#include "playgroundclient.h"

using namespace android;

int main() {

   ALOGI("Playground: client is now starting");

  sp<IServiceManager> sm = defaultServiceManager();
  sp<IBinder> binder;

  ALOGI("Playground: Search for service");

  do {
    binder = sm->getService(SERVICENAME);
    if(binder != 0){
      ALOGI("Playground: Service found");
      break;
    }
  }while(1);

  sp<ICounter> binderIFace = interface_cast<ICounter>(binder);

  ALOGI("Playground: Going to execute remote method");

  if(binderIFace != 0){
      binderIFace->count();
  } else {
    ALOGE("Playground: NULL POINTER");
    return 1;
  }

  ALOGI("Playground: client is now exiting");

  return 0;
}
