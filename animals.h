#ifndef ANIMALS_H
#define ANIMALS_H

#include "farmer.h"
#include "farm.h"
#include "farm_goods.h"
#include <iostream>
#include <string>

using namespace std;

class Animals : public Farm_goods {
    protected:
        int cow_hunger;
        int sheep_hunger;
        int pig_hunger;
        int cow_chance_of_death;
        int sheep_chance_of_death;
        int pig_chance_of_death;
 public:
        void feed();
        void die();

};

#endif