#ifndef SHEEPS_H
#define SHEEPS_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Sheeps : public Animals {
    protected:
    static int count_sheeps;
    static bool sheeps_fed();
    Sheeps *sheep_array_old;
    Sheeps *sheep_array_new;

    public:
    static int get_count(){return count_sheeps;};
    void buy_goods();
    void feed();
    void sell_goods();
    bool ready_to_sell();
};
static int count_sheeps = 0;
static bool sheeps_fed = false;

#endif