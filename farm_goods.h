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
    int sell_value;
    int price;
    string type;
    //string type;
    public:
    // int cow_count;
    // int sheep_count;
    // int pig_count;
    // int wheat_count;
    // int soybean_count;
    // int corn_count;
    int get_age();
    virtual void feed() = 0;
    virtual int get_feed_status() = 0;
    int get_sell_value();
    int get_price();
    //void set_age();
    //void increase_age();
    //virtual void feed() = 0;
    //string get_type();
    // might be able to make these not abstract
    //virtual void buy_goods() = 0;
    //virtual void sell_goods() = 0;
    Farm_goods();
    ~Farm_goods();
};


#endif