#ifndef CROPS_H
#define CROPS_H

//#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

class Crops : public Farm_goods {
       protected:
        int hydration;
        //string type;
 public:
        void feed();
        void die();
        Crops();
        //Animals(string _type);
        Crops(string _type, int _hunger);
        void set_age();
        int get_feed_status();

        string get_type();

};

#endif