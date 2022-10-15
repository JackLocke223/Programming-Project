#ifndef PIGS_H
#define PIGS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Pigs : public Animals {
    protected:
    static int count_pigs;

    public:
    static int get_count(){return count_pigs;};
    void buy_goods();
};
static int count_pigs = 0;

#endif