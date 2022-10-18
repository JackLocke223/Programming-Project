#include "farm.h"

#include <iostream>
#include <string>

#include "animals.h"
#include "corn.h"
#include "cows.h"
#include "crops.h"
#include "farm_goods.h"
#include "pigs.h"
#include "sheeps.h"
#include "soybean.h"
#include "wheat.h"

using namespace std;

Farm::Farm() {
  time = 1;
  bank_account = 500;
  // Farm::animal_array = new Animals[3];
  cow_array_old = new Animals[0];
  count_cows = 0;
  count_sheeps = 0;
  count_pigs = 0;
  count_wheat = 0;
  count_soybean = 0;
  count_corn = 0;
  pig_array_old = new Animals[0];
  sheep_array_old = new Animals[0];
  wheat_array_old = new Crops[0];
  soybean_array_old = new Crops[0];
  corn_array_old = new Crops[0];
};

// bool Farm::win() {
//   if (bank_account >= 10, 000) {
//     cout << "CONGRATULATIONS, you win!" << endl;
//     return true;
//   } else {
//     return false;
//   }
// }

/* think we will have to have an animals array which stores "cow sheep chicken"
as pointers and they point to subarrays containing each same for crops. check
the Farm constructor i made the above how we store it */

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

// void Farm::add_money(int value) { bank_account = bank_account + value; };

// void Farm::take_money(int value) { bank_account = bank_account - value; };
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
int Farm::get_time() { return time; }
// function that will buy the class of goods the user wants to purchase and
// dynamically allocate a new array to fit in the new object, and add the object
// to the array
void Farm::buy_goods(Animals object) {
  string type_cows = "cows";
  string type_sheeps = "sheeps";
  string type_pigs = "pigs";
  // cout << "5" << endl;
  // cout << object.get_type() << endl;
  if (type_cows.compare(object.get_type()) == 0) {
    count_cows++;
    // cout << count_cows << endl;
    // delete [] cow_array_new;
    cow_array_new = new Cows[count_cows];
    for (int i = 0; i < count_cows - 1; i++) {
      cow_array_new[i] = cow_array_old[i];
    }
    // cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
    // cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;

    cow_array_new[count_cows - 1] = object;
    // cout << "6" << endl;
    cout << cow_array_new[count_cows - 1].get_age() << endl;
    // cout << "7" << endl;
    // delete [] cow_array_old;
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
  }
  if (type_pigs.compare(object.get_type()) == 0) {
    count_pigs++;
    // cout << count_cows << endl;
    // delete [] cow_array_new;
    pig_array_new = new Pigs[count_pigs];
    for (int i = 0; i < count_pigs - 1; i++) {
      pig_array_new[i] = pig_array_old[i];
    }
    // cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
    // cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;

    pig_array_new[count_pigs - 1] = object;
    cout << pig_array_new[count_pigs - 1].get_age() << endl;
    pig_array_old = new Pigs[count_pigs];
    pig_array_old = pig_array_new;
  } // check for sheep
  if (type_sheeps.compare(object.get_type()) == 0) {
    count_sheeps++;
    sheep_array_new = new Sheeps[count_sheeps];
    for (int i = 0; i < count_sheeps - 1; i++) {
      sheep_array_new[i] = sheep_array_old[i];
    }
    sheep_array_new[count_sheeps - 1] = object;
    sheep_array_old = new Sheeps[count_sheeps];
    sheep_array_old = sheep_array_new;
  }
}

void Farm::buy_goods(Crops object){
  string type_corn = "corn";
  string type_soybean = "soybean";
  string type_wheat = "wheat";
  // cout << "5" << endl;
  // cout << object.get_type() << endl;
  if (type_corn.compare(object.get_type()) == 0) {
    count_corn++;
    // cout << count_cows << endl;
    // delete [] cow_array_new;
    corn_array_new = new Corn[count_corn];
    for (int i = 0; i < count_cows - 1; i++) {
      corn_array_new[i] = corn_array_old[i];
    }
    // cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
    // cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;

    corn_array_new[count_corn - 1] = object;
    // cout << "6" << endl;
    //cout << cow_array_new[count_cows - 1].get_age() << endl;
    // cout << "7" << endl;
    // delete [] cow_array_old;
    corn_array_old = new Corn[count_corn];
    corn_array_old = corn_array_new;
  }
  if (type_soybean.compare(object.get_type()) == 0) {
    count_soybean++;
    // cout << count_cows << endl;
    // delete [] cow_array_new;
    soybean_array_new = new Soybean[count_soybean];
    for (int i = 0; i < count_soybean - 1; i++) {
      soybean_array_new[i] = soybean_array_old[i];
    }
    // cout << "age new: " << cow_array_new[i].age << "i: " << i << endl;
    // cout << "age old: " << cow_array_old[i].age << "i: " << i << endl;

    soybean_array_new[count_soybean - 1] = object;
    //cout << pig_array_new[count_pigs - 1].get_age() << endl;
    soybean_array_old = new Soybean[count_soybean];
    soybean_array_old = soybean_array_new;
  } // check for sheep
  if (type_wheat.compare(object.get_type()) == 0) {
    count_wheat++;
    wheat_array_new = new Wheat[count_wheat];
    for (int i = 0; i < count_wheat - 1; i++) {
      wheat_array_new[i] = wheat_array_old[i];
    }
    wheat_array_new[count_wheat - 1] = object;
    wheat_array_old = new Wheat[count_wheat];
    wheat_array_old = wheat_array_new;
  }
}


void Farm::increase_age() {
  for (int i = 0; i < count_cows; i++) {
    cow_array_old[i].set_age();
  }
  for (int i = 0; i < count_pigs; i++) {
    pig_array_old[i].set_age();
  }
  for (int i = 0; i < count_sheeps; i++) {
    sheep_array_old[i].set_age();
  }
  for (int i = 0; i < count_corn; i++) {
    corn_array_old[i].set_age();
  }
  for (int i = 0; i < count_soybean; i++) {
    soybean_array_old[i].set_age();
  }
  for (int i = 0; i < count_sheeps; i++) {
    wheat_array_old[i].set_age();
  }
}

int Farm::get_cow_count() { return count_cows; }
int Farm::get_sheeps_count() { return count_sheeps; }
int Farm::get_pigs_count() { return count_pigs; }

void Farm::sell_goods(Animals object) {
  string type_cows = "cows";
  string type_sheeps = "sheeps";
  string type_pigs = "pigs";

  //cout << object.get_type() << endl;

  if (type_cows.compare(object.get_type()) == 0) {
    count_cows--;
    // delete [] cow_array_new;
    cow_array_new = new Cows[count_cows];
    for (int i = 0; i < count_cows; i++) {
      cow_array_new[i] = cow_array_old[i + 1];
    }
    // delete the old array to avoid memory leaks and have the old array
    // pointer = the new updated array
    // delete [] cow_array_old;
    cow_array_old = new Cows[count_cows];
    cow_array_old = cow_array_new;
  }
  if (type_sheeps.compare(object.get_type()) == 0) {
    count_sheeps--;
    // delete [] cow_array_new;
    sheep_array_new = new Sheeps[count_sheeps];
    for (int i = 0; i < count_sheeps; i++) {
      sheep_array_new[i] = sheep_array_old[i + 1];
    }
    // delete the old array to avoid memory leaks and have the old array
    // pointer = the new updated array
    // delete [] cow_array_old;
    sheep_array_old = new Sheeps[count_sheeps];
    sheep_array_old = sheep_array_new;
  }
  if (type_pigs.compare(object.get_type()) == 0) {
    count_pigs--;
    // delete [] cow_array_new;
    pig_array_new = new Pigs[count_pigs];
    for (int i = 0; i < count_pigs; i++) {
      pig_array_new[i] = pig_array_old[i + 1];
    }
    // delete the old array to avoid memory leaks and have the old array
    // pointer = the new updated array
    // delete [] cow_array_old;
    pig_array_old = new Pigs[count_pigs];
    pig_array_old = pig_array_new;
  }
}

void Farm::sell_goods(Crops object) {
  string type_corn = "corn";
  string type_soybean = "soybean";
  string type_wheat = "wheat";

  //cout << object.get_type() << endl;

  if (type_corn.compare(object.get_type()) == 0) {
    count_corn--;
    // delete [] cow_array_new;
    corn_array_new = new Corn[count_corn];
    for (int i = 0; i < count_cows; i++) {
      corn_array_new[i] = corn_array_old[i + 1];
    }
    // delete the old array to avoid memory leaks and have the old array
    // pointer = the new updated array
    // delete [] cow_array_old;
    corn_array_old = new Corn[count_corn];
    corn_array_old = corn_array_new;
  }
  if (type_soybean.compare(object.get_type()) == 0) {
    count_soybean--;
    // delete [] cow_array_new;
    soybean_array_new = new Soybean[count_soybean];
    for (int i = 0; i < count_sheeps; i++) {
      soybean_array_new[i] = soybean_array_old[i + 1];
    }
    // delete the old array to avoid memory leaks and have the old array
    // pointer = the new updated array
    // delete [] cow_array_old;
    soybean_array_old = new Soybean[count_sheeps];
    sheep_array_old = sheep_array_new;
  }
  if (type_wheat.compare(object.get_type()) == 0) {
    count_wheat--;
    // delete [] cow_array_new;
    wheat_array_new = new Wheat[count_wheat];
    for (int i = 0; i < count_wheat; i++) {
      wheat_array_new[i] = wheat_array_old[i + 1];
    }
    // delete the old array to avoid memory leaks and have the old array
    // pointer = the new updated array
    // delete [] cow_array_old;
    wheat_array_old = new Animals[count_pigs];
    pig_array_old = pig_array_new;
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
void Farm::feed_cows() {
  for (int i = 0; i < count_cows; i++) {
    cow_array_old[i].feed();
  }
}
void Farm::feed_pigs() {
  for (int i = 0; i < count_pigs; i++) {
    pig_array_old[i].feed();
  }
}
void Farm::feed_sheeps() {
  for (int i = 0; i < count_sheeps; i++) {
    sheep_array_old[i].feed();
  }
}
void Farm::feed_corn() {
  for (int i = 0; i < count_corn; i++) {
    corn_array_old[i].feed();
  }
}
void Farm::feed_soybean() {
  for (int i = 0; i < count_soybean; i++) {
    soybean_array_old[i].feed();
  }
}
void Farm::feed_wheat() {
  for (int i = 0; i < count_wheat; i++) {
    wheat_array_old[i].feed();
  }
}
// need to delete arrays in here
Farm::~Farm(){
    // delete [] cow_array_new;
    // delete [] cow_array_old;
};
