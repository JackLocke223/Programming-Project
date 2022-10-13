#ifndef CHICKENS_H
#define CHICKENS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Chickens : public Animals {
    protected:
    static int count_chickens;

    public:
    static int get_count(){return count_chickens;};
    void buy_goods();

};
static int count_chickens = 0;

#endif