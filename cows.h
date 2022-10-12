#ifndef COWS_H
#define COWS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Cows : public Animals {
    protected:
    static int count_cows;

    public:
    static int get_count(){return count_cows;};
    void buy_goods();

};
static int count_cows = 0;

#endif