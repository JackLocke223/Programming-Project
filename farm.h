#ifndef FARM_H
#define FARM_H

#include <string>
#include <iostream>


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
        Animals* animal_array;
        Produce* produce_array;
    public:
        bool win();
        void print_crops();
        void print_animals();
        Farm();
        ~Farm();

};

#endif