#include "farm.h"
#include <iostream>
#include <string>

using namespace std;

/* class of farmer, it has functions and data members to keep track of the
    users actions via energy and allows the user to buy and sell products
    from the farm to make money; ie win the game 
    */

class Farmer : public Farm {
    protected:
    int energy;
    public:
    void sleep();
    int get_money();
    void do_task();
    Farmer();
    ~Farmer();

};