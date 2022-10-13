#ifndef SHEEPS_H
#define SHEEPS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Sheeps : public Animals {
    protected:
    static int count_sheeps;

    public:
    static int get_count(){return count_sheeps;};
    void buy_goods();

};
static int count_sheeps = 0;

#endif