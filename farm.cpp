#include "farm.h"
#include <string>
#include <iostream>
#include "produce.h"
#include "animals.h"
//#include "crops.h"

Farm::Farm() {
    time = 1;
    bank_account = 500;
    //Farm::animal_array = new Animals[3];
    Farm::animal_array[0] = Farm::cow_array;
    Farm::animal_array[1] = Farm::pig_array;
    Farm::animal_array[2] = Farm::sheep_array;

    Farm::produce_array[0] = Farm::wheat_array;
    Farm::produce_array[1] = Farm::soybean_array;
    Farm::produce_array[2] = Farm::corn_array;
    

};

bool Farm::win() {
    if (bank_account >= 10,000) {
        cout << "CONGRATULATIONS, you win!" << endl;
        return true;
    } else {
        return false;
    }
}

/* think we will have to have an animals array which stores "cow sheep pig" as pointers and they point to 
subarrays containing each
same for crops. check the Farm constructor i made the above how we store it */

// this is a mess i need to fix this, isnt how i want to access

/* do we want to do the print array like this? it will be easier i think
and we shouldnt need another abstract or polymorphism function */

void Farm::print_animals(string animal_type) {
    switch  animal_type {
        case: "cow"
        print_column = 0;
        count = count_cows;
        break;
        case: "sheep"
        print_column = 1;
        count = count_sheep;
        break;
        case: "pig"
        print_column = 2;
        count = count_pig;
        break;
    }
    // for loop to print the column of the type of animals the user wants to see
    for (int i = 0; i < count; i++) {
        for (int  = print_column; j < print_column+1; j++) {
            cout << *animal_array+i << endl;
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