#ifndef WHEAT_H
#define WHEAT_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "crops.h"
#include <iostream>
#include <string>

class Wheat : public Crops {
    protected:
    static int count_wheat;
    Wheat *wheat_array_old;
    Wheat *wheat_array_new;

    public:
    static int get_count(){return count_wheat;};
    void buy_goods();
    void feed();
    void sell_goods();

};
static int count_wheat = 0;

#endif