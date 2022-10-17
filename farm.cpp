#include "farm.h"
#include <string>
#include <iostream>
#include "farm_goods.h"
#include "animals.h"
#include "pigs.h"
#include "sheeps.h"
#include "cows.h"
#include "crops.h"
#include "corn.h"
#include "soybean.h"
#include "wheat.h"

using namespace std;


Farm::Farm() {
    time = 1;
    bank_account = 500;
    //Farm::animal_array = new Animals[3];
    cow_array_old = new Animals[0];
    count_cows = 0;
    Farm::pig_array_old;
    Farm::sheep_array_old;

    Farm::wheat_array_old;
    Farm::soybean_array_old;
    Farm::corn_array_old;
    

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
/*
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
} */

void Farm::add_money(int value){
    bank_account = bank_account + value;
};


void Farm::take_money(int value) {
    bank_account = bank_account - value;
};
    /*Farm::Farm() {
        int time = 1;
        int bank_account = 500;
        int cow_count = 0;
        int sheep_count = 0;
        int pig_count = 0;
        int corn_count = 0;
        int soybean_count = 0;
        int wheat_count = 0;

    }; */

    // function to access what day it is
    int Farm::get_time() {
        return time;
    }
// function that will buy the class of goods the user wants to purchase and
// dynamically allocate a new array to fit in the new object, and add the object to the array
    void Farm::buy_goods(Animals object) {
        
        string type_cows = "cows";
        string type_sheeps = "sheeps";
        string type_pigs = "pigs";
//cout << "5" << endl;
cout << object.get_type() << endl;
        if (type_cows.compare(object.get_type()) == 0){
            count_cows++;
            cout << count_cows << endl;
            cow_array_new = new Cows [count_cows];
            for (int i = 0;  i < count_cows-1; i++) {
            cow_array_new[i] = cow_array_old[i];
            }
        //cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
        //cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;
    
    cow_array_new[count_cows-1] = object;
    //cout << "6" << endl;
    cout << cow_array_new[count_cows-1].get_age() << endl;
    //cout << "7" << endl;
    delete [] cow_array_old;
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
        }
    }

// void Farm::increase_age() {
//         for (int i = 0; i < count_cows; i++) {
//         cow_array_old[i].set_age();
//         cout << " farm increase age" << endl;
//     }
// }
 void Farm::sleep() {
     for (int i = 0; i < count_cows; i++) {
        cow_array_old[i].set_age();
        cout << " farm increase age" << endl;
    }
 }

    int Farm::get_cow_count() {
        return count_cows;
    }

    void Farm::sell_goods(Animals object) {
        string type_cows = "cows";
        string type_sheeps = "sheeps";
        string type_pigs = "pigs";
//cout << "5" << endl;
cout << object.get_type() << endl;
        if (type_cows.compare(object.get_type()) == 0){
    count_cows--;
    cow_array_new = new Cows [count_cows];
    for (int i = 0;  i < count_cows; i++) {
        cow_array_new[i] = cow_array_old[i+1];
    }
    //Animals *delete_cow = &cow_array_old[0];
    delete [] cow_array_old;
    //delete_cow = NULL;
}
    }


    /*Cows* new_cow = new Cows;
    //cout << new_cow->age << endl;
    count_cows++;
    //cout << count_cows << endl;
    cow_array_new = new Cows [count_cows];
    /*if (count_cows < 2) {
        cow_array_old[0] = *new_cow;
    } else { *//*
    for (int i = 0;  i < count_cows-1; i++) {
        cow_array_new[i] = cow_array_old[i];
        cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
        cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;
    
    cow_array_new[count_cows-1] = *new_cow;
    //cout << cow_array_new[count_cows-1] << endl;
    delete [] cow_array_old;
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
    }

}; */
        
// need to delete arrays in here
    Farm::~Farm(){};
