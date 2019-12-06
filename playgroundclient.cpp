#include "playgroundclient.h"

using namespace android;

namespace android {

    void BpCounter::count(){
        Parcel data, reply;
        data.writeInterfaceToken(ICounter::getInterfaceDescriptor());
        data.writeCString("Hello playground Server");
        remote()->transact(1, data, &reply, IBinder::FLAG_ONEWAY);
    }

}
