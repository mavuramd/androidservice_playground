
#ifndef PLAYGROUNDCLIENT_H
#define PLAYGROUNDCLIENT_H

#include "playground.h"

using namespace android;

namespace android {

    class BpCounter : public BpInterface<ICounter> {
        public:
          BpCounter(const android::sp<android::IBinder>& impl)
                : android::BpInterface<ICounter>(impl)
        {
        }

        void     count();
    };

}
#endif //PLAYGROUNDCLIENT_H
