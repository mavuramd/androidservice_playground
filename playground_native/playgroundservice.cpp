#include "playgroundservice.h"

using namespace android;

namespace android {

    status_t BnCounter::onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags){
        CHECK_INTERFACE(ICounter, data, reply);
        ALOGI("Playground: data received is %s\n", data.readCString());
        return OK;
    }

    void BnCounter::count(){
        ALOGI("Playground: BcCounter::count() has been called");
        return;
    }

}
