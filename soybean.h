#ifndef SOYBEAN_H
#define SOYBEAN_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Soybean : public Crop {
    protected:
    static int count_soybean;

    public:
    static int get_count(){return count_soybean;};
    void buy_goods();

};
static int count_soybean = 0;

#endif