#ifndef COWS_H
#define COWS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include <iostream>
#include <string>

class Cows : public Animals {
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
    Cows();
    //string get_type();
    ~Cows(){};
};


#endif