
#ifndef PLAYGROUNDSERVICE_H
#define PLAYGROUNDSERVICE_H

#include "playground.h"

using namespace android;

namespace android {

    class BnCounter : public BnInterface<ICounter> {
        public:
            status_t onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags = 0);
            void     count();
    };

}
#endif //PLAYGROUNDSERVICE_H
