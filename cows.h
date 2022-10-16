#ifndef COWS_H
#define COWS_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "animals.h"
#include <iostream>
#include <string>

class Cows : public Animals {
    protected:
    static int count_cows;
    static bool cows_fed();
    Cows *cow_array_old;
    Cows *cow_array_new;

    public:
    static int get_count(){return count_cows;};
    void buy_goods();
    void feed();
    void sell_goods();
};
static int count_cows = 0;
static bool cows_fed = false;

#endif