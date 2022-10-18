#ifndef FARM_H
#define FARM_H

#include <string>
#include <iostream>
class Animals;
// #include "farmer.h"
#include "farm_goods.h"
#include "crops.h"
class Cows;
class Sheeps;
class Pigs;
class Wheat;
class Soybean;
class Corn;

using namespace std;

/* this is the parent class that will hold the dyamically allocated arrays of the animals and crops
also contains the control for the user to win the game. 
the time/amount of days that have passed will be stored in this class.
it will contain functions to print the owned animals/crops of the user
*/
class Farm {
    protected:
        int time;
        int bank_account;
        int count_cows;
        int count_pigs;
        int count_sheeps;
        int count_corn;
        int count_wheat;
        int count_soybean;

        /* the arrays storing the produce need to be in the farmer array
        so the buy_goods sell_goods functions can easily access the array
        */
        // new and old arrays are so the arrays can be dynamically increased
        // in size each time the user buys a product and then the old array 
        // copied across (like in the prac exam 3. same code)

        // the arrays that will store the animals and crops contained on the farm
    

    public:
    // made the arrays public so they can be easily accessed.
        Animals *cow_array_old;
        Animals *cow_array_new;
        Animals *sheep_array_old;
        Animals *sheep_array_new;
        Animals *pig_array_old;
        Animals *pig_array_new;
        Crops *wheat_array_old;
        Crops *wheat_array_new;
        Crops* soybean_array_old;
        Crops* soybean_array_new;
        Crops* corn_array_old;
        Crops* corn_array_new;
        
        // void add_money(int value);
        // void take_money(int value);
        void set_time(int new_time);
        int get_time();
        void increase_age();
        //void sleep();
        Farm();
        ~Farm();

        //think about if these need to be pointers;
        void buy_goods(Animals object);
        void buy_goods(Crops object);
        void sell_goods(Animals object);
        void sell_goods(Crops object);
        int get_cow_count();
        int get_sheeps_count();
        int get_pigs_count();
        void feed_cows();
        void feed_sheeps();
        void feed_pigs();
        void feed_corn();
        void feed_soybean();
        void feed_wheat();
        
        
};

#endif
