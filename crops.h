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

        int hydration;
        int price;


 public:
 
        void water();
        void die();
};

#endif