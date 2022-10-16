#ifndef CROPS_H
#define CROPS_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

class Crops : public Farm_goods {
    protected:
        int wheat_hydration;
        int soybean_hydration;
        int corn_hydration;
        int wheat_price;
        int soybean_price;
        int corn_price;
 public:
        Crops();
        void water();
        void die();
};

#endif