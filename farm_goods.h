#ifndef PRODUCE_H
#define PRODUCE_H
//#include "farm.h"
//#include "farmer.h"
#include <iostream>
#include <string>

using namespace std;
/* this cannot be produce because produce is just crops and writing code
will get so damn confusing */
class Farm_goods {
    protected:
    int age;
    int value;
    public:
    int get_age();
    void increase_age();
    virtual void feed() = 0;
    // might be able to make these not abstract
    virtual void buy_goods() = 0;
    virtual void sell_goods() = 0;
    Farm_goods();
    ~Farm_goods();
};


#endif