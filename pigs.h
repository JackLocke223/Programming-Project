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
    static bool pigs_fed();

    public:
    Pigs *pig_array_old;
    Pigs *pig_array_new;
    static int get_count(){return count_pigs;};
    void buy_goods();
    void feed();
    void sell_goods();
};
static int count_pigs = 0;
static bool cows_fed = false;

#endif