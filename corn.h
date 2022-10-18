#ifndef CORN_H
#define CORN_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "crops.h"
#include <iostream>
#include <string>

class Corn : public Crops {
    protected:
    static int count_corn;
    Corn *corn_array_old;
    Corn *corn_array_new;

    public:
   
    Corn();
    ~Corn(){};
};
static int count_corn = 0;


#endif