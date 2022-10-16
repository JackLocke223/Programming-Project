#ifndef FARM_H
#define FARM_H

#include <string>
#include <iostream>
class Animals;
//#include "farmer.h"
#include "Farm_goods.h"
class Cows;
class Sheeps;
class Pigs;
#include "wheat.h"
#include "soybean.h"
#include "corn.h"



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

        /* the arrays storing the produce need to be in the farmer array
        so the buy_goods sell_goods functions can easily access the array
        */
        // new and old arrays are so the arrays can be dynamically increased
        // in size each time the user buys a product and then the old array 
        // copied across (like in the prac exam 3. same code)

        // the arrays that will store the animals and crops contained on the farm
        

        int print_column;
        int count_of_printable;

    public:
    // made the arrays public so they can be easily accessed.
        Animals** animal_array;
        Cows *cow_array_old;
        Cows *cow_array_new;
        Sheeps* sheep_array_old;
        Sheeps* sheep_array_new;
        Pigs *pig_array_old;
        Pigs *pig_array_new;
        Farm_goods** farm_goods_array;
        Wheat* wheat_array_old;
        Wheat* wheat_array_new;
        Soybean* soybean_array_old;
        Soybean* soybean_array_new;
        Corn* corn_array_old;
        Corn* corn_array_new;
        int cow_count;
        int sheep_count;
        int pig_count;
        int wheat_count;
        int soybean_count;
        int corn_count;
        bool win();
        void print_crops();
        void print_animals(char animal_type);
        void add_money(int value);
        void take_money(int value);
        void set_time(int new_time);
        int get_time();
        Farm();
        ~Farm();
};

#endif
