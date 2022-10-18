#ifndef SHEEPS_H
#define SHEEPS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include <iostream>
#include <string>

class Sheeps : public Animals {
    protected:
    // int sell_value;
    // int price;
    // string type;
    int age;

    public:
    //void feed();
    //void sell_goods();
    //int get_sell_value();
    //int get_price();
    Sheeps();
    //string get_type();
    ~Sheeps(){};
};


#endif