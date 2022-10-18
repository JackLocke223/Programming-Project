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
   // static int count_cows;
    //static bool cows_fed();
   // Cows *cow_array_old;
    //Cows *cow_array_new;
    int sell_value;
    int price;
    // string type;
    int age;

    public:
    //static int get_count();
    //void buy_goods();
    //void feed();
    //void sell_goods();
    int get_sell_value();
    int get_price();
    Cows();
    //string get_type();
    ~Cows(){};
};

//static bool cows_fed = false;

#endif