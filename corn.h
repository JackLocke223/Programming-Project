#ifndef CORN_H
#define CORN_H

#include "farmer.h"
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
    static int get_count(){return count_corn;};
    void buy_goods();
    void feed();
    void sell_goods();
};
static int count_corn = 0;

#endif