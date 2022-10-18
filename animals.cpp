#include "animals.h"
#include <string>
#include <iostream>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"

using namespace std;

Animals::Animals() : Farm_goods() {
        // cow_hunger = 100;
        // sheep_hunger = 100;
        // pig_hunger = 100;
        // cow_chance_of_death = 0;
        // sheep_chance_of_death = 0;
        // pig_chance_of_death = 0;
        hunger = 100;
        type = "";
        age = 1;
        sell_value = 0;
        price = 0;
}

Animals::Animals(string _type, int _hunger) : Farm_goods() {
        hunger = _hunger;
        // sheep_hunger = 100;
        // pig_hunger = 100;
        // cow_chance_of_death = 0;
        // sheep_chance_of_death = 0;
        // pig_chance_of_death = 0;
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

void Animals::feed() {
    hunger = 100;
}

int Animals::get_feed_status() {
    return hunger;
};

void Animals::set_age() {
        age = age +1;
        //cout << "animals set age" << endl;
    }

// void Animals::die()  {
//         // if hunger goes to 0 of cow
//         Animals::cow_chance_of_death = 100; // and dies
//         cow_count=cow_count-1;
//         // if hunger goes to 0 of sheep
//         Animals:: sheep_chance_of_death = 100;// and dies
//         sheep_count=sheep_count-1;
//         // if hunger goes to 0 of pig
//         Animals:: pig_chance_of_death = 100;// and dies
//         pig_count=pig_count-1;
//     ;
// }
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