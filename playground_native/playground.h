#ifndef PLAYGROUND_H
#define PLAYGROUND_H

#include <utils/Log.h>

#include <binder/Parcel.h>
#include <binder/IInterface.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>

using namespace android;

#define SERVICENAME String16("Counter")

namespace android {

    class ICounter : public IInterface {
        public:
            DECLARE_META_INTERFACE(Counter)
            virtual void count() = 0;
    };

}
#endif //PLAYGROUND_H
