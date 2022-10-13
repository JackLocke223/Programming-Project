#include "animals.h"
#include <string>
#include <iostream>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"

using namespace std;

Animals::Animals() {
        int cow_hunger = 100;
        int sheep_hunger = 100;
        int pig_hunger = 100;
        int cow_chance_of_death = 0;
        int sheep_chance_of_death = 0;
        int pig_chance_of_death = 0;
}

void Animals::feed() {
    //if (chosen cow) involves do_task
    Animals::cow_hunger= 100;
        //if (chosen sheep) involves do_task
    Animals::sheep_hunger= 100;
        //if (chosen pig) involves do_task
    Animals::pig_hunger= 100;


};
void Animals::die()  {
        // if hunger goes to 0 of cow
        Animals::cow_chance_of_death = 100; // and dies
        Farm::cow_count=cow_count-1;
        // if hunger goes to 0 of sheep
        Animals:: sheep_chance_of_death = 100;// and dies
        Farm::sheep_count=sheep_count-1;
        // if hunger goes to 0 of pig
        Animals:: pig_chance_of_death = 100;// and dies
        Farm::pig_count=pig_count-1;
    ;
}
