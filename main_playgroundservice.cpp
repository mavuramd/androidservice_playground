#include "playgroundservice.h"

using namespace android;

int main() {

  ALOGI("Playground: Service is now starting");

  sp<IServiceManager> sm = defaultServiceManager();

  sm->addService(SERVICENAME,new BnCounter());

  ProcessState::self()->startThreadPool();
  ALOGI("Playground: Service is now running");
  IPCThreadState::self()->joinThreadPool();
  return 0;
}
