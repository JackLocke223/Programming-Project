#include "farm.h"
#include <string>
#include <iostream>
#include "farm_goods.h"
#include "animals.h"
#include "pigs.h"
#include "sheeps.h"
#include "cows.h"
#include "crops.h"

using namespace std;


Farm::Farm() {
    time = 1;
    bank_account = 500;
    //Farm::animal_array = new Animals[3];
    Farm::animal_array[0] = Farm::cow_array_old;
    Farm::animal_array[1] = Farm::pig_array_old;
    Farm::animal_array[2] = Farm::sheep_array_old;

    Farm::farm_goods_array[0] = Farm::wheat_array_old;
    Farm::farm_goods_array[1] = Farm::soybean_array_old;
    Farm::farm_goods_array[2] = Farm::corn_array_old;
    

};

bool Farm::win() {
    if (bank_account >= 10,000) {
        cout << "CONGRATULATIONS, you win!" << endl;
        return true;
    } else {
        return false;
    }
}

/* think we will have to have an animals array which stores "cow sheep chicken" as pointers and they point to 
subarrays containing each
same for crops. check the Farm constructor i made the above how we store it */

// this is a mess i need to fix this, isnt how i want to access

/* do we want to do the print array like this? it will be easier i think
and we shouldnt need another abstract or polymorphism function */

void Farm::print_animals(char animal_type) {
    switch  (animal_type) {
        case 'c' :
        Farm::print_column = 0;
        Farm::count_of_printable = Cows::get_count();
        break;
        case 's':
        Farm::print_column = 1;
        Farm::count_of_printable = Sheeps::get_count();
        break;
        case 'p' :
        Farm::print_column = 2;
        Farm::count_of_printable = Pigs::get_count();
        break;
    }
    // for loop to print the column of the type of animals the user wants to see
    // will have to driver test this function and edit
    for (int i = 0; i < count_of_printable; i++) {
        for (int j = print_column; j < print_column+1; j++) {
            cout << ((*(animal_array+j))+i) << endl;
        }
    }
}
    Farm::Farm() {
        int time = 1;
        int bank_account = 500;
        int cow_count = 0;
        int sheep_count = 0;
        int pig_count = 0;
        int corn_count = 0;
        int soybean_count = 0;
        int wheat_count = 0;

    };

    Farm::~Farm() {
        delete[] cow_array;

    }

}