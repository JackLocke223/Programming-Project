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

    //if (chosen feed_cow) involves do_task
    Animals::cow_hunger;
    if(cow_hunger>=100);{
        cout << "Can not feed due to cow being full." << endl;
    };
    if(cow_hunger<100){
        cow_hunger=cow_hunger+10;
        cout<< "The cows hunger is at" <<Animals::cow_hunger << endl;
    }


        //if (chosen feed_sheep) involves do_task
    Animals::sheep_hunger= 100;
        if(sheep_hunger==100){
        cout << "Can not feed due to sheep being full." << endl;
    };
        if(sheep_hunger<100){
        sheep_hunger=sheep_hunger+10;
        cout<< "The sheeps hunger is at" <<Animals::sheep_hunger << endl;

    }


        //if (chosen feed_pig) involves do_task
    Animals::pig_hunger= 100;
        if(pig_hunger==100){
        cout << "Can not feed due to pig being full." << endl;
    };
        if(pig_hunger<100){
        pig_hunger=pig_hunger+10;
        cout<< "The pigs hunger is at" <<Animals::pig_hunger << endl;

    }


};
void Animals::die()  {
        if(cow_hunger = 0) {
        Animals::cow_chance_of_death = 100; // and dies
        }
        if(cow_chance_of_death = 100){
            cow_count=cow_count-1;
            cout << "Cow has died!!!!." << endl;
        }

        if(sheep_hunger = 0) {
        Animals:: sheep_chance_of_death = 100;// and dies
        }
        if(sheep_chance_of_death = 100){
            Farm::sheep_count=sheep_count-1;
            cout << "Sheep has died!!!!." << endl;
        }

        if(pig_hunger = 0) {
        Animals:: pig_chance_of_death = 100;// and dies
        }
        if(pig_chance_of_death = 100){
            Farm::pig_count=pig_count-1;
            cout << "Pig has died!!!!." << endl;
        }
    ;
}

void Farm_goods::buy_goods(){return;}