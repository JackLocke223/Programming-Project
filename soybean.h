#ifndef SOYBEAN_H
#define SOYBEAN_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include "crops.h"
#include <iostream>
#include <string>

class Soybean : public Crops {
    protected:
    static int count_soybean;
    Soybean *soybean_array_old;
    Soybean *soybean_array_new;

    public:
    static int get_count(){return count_soybean;};
    void buy_goods();
    void feed();
    void sell_goods();

};
static int count_soybean = 0;

#endif