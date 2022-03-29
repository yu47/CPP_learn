#ifndef __GIFT_PROXY__
#define __GIFT_PROXY__

#include "girl.h"
#include "girt.h"
class GiftProxy : public Gift{
    public:
        GiftProxy(Girl girl) : girl_(girl){}
        
        void GiveGift() override {std::cout<<"send " <<
        girl_.GetName() << " gift " << std::endl;
        }

    private:
        Girl girl_;
};


#endif