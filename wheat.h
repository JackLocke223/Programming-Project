#ifndef WHEAT_H
#define WHEAT_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Wheat : public Crops {
    protected:
    static int count_wheat;

    public:
    static int get_count(){return count_wheat;};
    void buy_goods();

};
static int count_wheat = 0;

#endif