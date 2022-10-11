#include "farm.h"
#include <string>
#include <iostream>
#include "animals.h"
#include "crops.h"

Farm::Farm() {
    time = 1;
    bank_account = 500;
}

Farm::win() {
    if (bank_account >= 10,000) {
        cout << "CONGRATULATIONS, you win!" << endl;
        return true;
    } else {
        return false;
    }
}

/* think we will have to have an animals array which stores "cow sheep pig" as pointers and they point to 
subarrays containing each
same for crops */
Farm::print_animals(string animal_type) {
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
            cout << Animals[i][j] << endl;
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

    }

}