#include "animals.h"
#include <string>
#include <iostream>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"

using namespace std;

Animals::Animals() : Farm_goods() {
        int cow_hunger = 100;
        int sheep_hunger = 100;
        int pig_hunger = 100;
        int cow_chance_of_death = 0;
        int sheep_chance_of_death = 0;
        int pig_chance_of_death = 0;
}

Animals::Animals(string _type) : Farm_goods() {
        int cow_hunger = 100;
        int sheep_hunger = 100;
        int pig_hunger = 100;
        int cow_chance_of_death = 0;
        int sheep_chance_of_death = 0;
        int pig_chance_of_death = 0;
        type = _type;
        age = 1;
}

/*void Animals::feed() {
    //if (chosen cow) involves do_task
    Animals::cow_hunger= 100;
        //if (chosen sheep) involves do_task
    Animals::sheep_hunger= 100;
        //if (chosen pig) involves do_task
    Animals::pig_hunger= 100;


}; */

void Animals::set_age() {
        age = age +1;
        cout << "animals set age" << endl;
    }

void Animals::die()  {
        // if hunger goes to 0 of cow
        Animals::cow_chance_of_death = 100; // and dies
        cow_count=cow_count-1;
        // if hunger goes to 0 of sheep
        Animals:: sheep_chance_of_death = 100;// and dies
        sheep_count=sheep_count-1;
        // if hunger goes to 0 of pig
        Animals:: pig_chance_of_death = 100;// and dies
        pig_count=pig_count-1;
    ;
}
string Animals::get_type() {
    return type;
};

/*void Animals::sell_goods() {
    return;
}
void Animals::buy_goods() {
    return;
}

void Farm_goods::buy_goods(){return;}
*/