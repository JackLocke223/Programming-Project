#ifndef CORN_H
#define CORN_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

class Corn : public Crop {
    protected:
    static int count_corn;

    public:
    static int get_count(){return count_corn;};
    void buy_goods();

};
static int count_corn = 0;

#endif