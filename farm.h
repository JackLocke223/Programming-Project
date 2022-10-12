#ifndef FARM_H
#define FARM_H

#include <string>
#include <iostream>
#include "animals.h"
#include "farmer.h"
#include "cows.h"


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
        int cow_count;
        int sheep_count;
        int pig_count;
        int wheat_count;
        int soybean_count;
        int corn_count;
        /* the arrays storing the produce need to be in the farmer array
        so the buy_goods sell_goods functions can easily access the array
        */
        // new and old arrays are so the arrays can be dynamically increased
        // in size each time the user buys a product and then the old array 
        // copied across (like in the prac exam 3. same code)

        // the arrays that will store the animals and crops contained on the farm
        Animals** animal_array;
        Cows *cow_array_old;
        Cows *cow_array_new;
        Sheep* sheep_array_old;
        Sheep* sheep_array_new;
        Pig* pig_array_old;
        Pig* pig_array_new;
        Produce** produce_array;
        Wheat* wheat_array_old;
        Wheat* wheat_array_new;
        Soybean* soybean_array_old;
        Soybean* soybean_array_new;
        Corn* corn_array_old;
        Corn* corn_array_new;


    public:
        bool win();
        void print_crops();
        void print_animals();
        Farm();
        ~Farm();

};

#endif