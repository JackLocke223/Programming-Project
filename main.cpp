#include "farm.h"
#include "farmer.h"
#include "farm_goods.h"
#include <iostream>
#include <fstream>
#include <string>
#include "cows.h"
#include "sheeps.h"
#include "pigs.h"
using namespace std;

int main()
{
   string input; // dummy variable which stores input from user
   cout << "Enter 'instructions' for instructions.\n"
        << "Enter 'start' to start the game.\n";
   cin >> input;

   if (input == "start")
   {
      Farm MyFarm = Farm();
      Farmer MyFarmer = Farmer();
      while (MyFarm.win() == false)
      {
         cout << "It's a new day! It's day " << MyFarm.get_time() << ", and you have " << MyFarmer.get_money() << " dollars.\n";
         cout << "Enter 'buy' to purchase new goods\n"
              << "Enter 'sell' to sell owned goods\n"
              << "Enter 'sleep' to sleep\n";
         cin >> input;
         if (input == "buy")
         {
            cout << "Enter 'pig' to buy a pig ($500)\n";
            cout << "Enter 'sheep' to buy a sheep ($750)\n";
            cout << "Enter 'cow' to buy a cow ($1500)\n";
            cin >> input;
            if (input == "pig")
            {
               if (MyFarmer.get_money() >= 500)
               {
                  Pigs pig = Pigs();
                  MyFarm.buy_goods(pig);
                  MyFarmer.set_money(MyFarmer.get_money() - 500);
               }
               else
               {
                  cout << "Insufficient funds.\n";
               }
            }
            if (input == "sheep")
            {
               if (MyFarmer.get_money() >= 750)
               {
                  Sheeps sheep = Sheeps();
                  MyFarm.buy_goods(sheep);
                  MyFarmer.set_money(MyFarmer.get_money() - 750);
               }
               else
               {
                  cout << "Insufficient funds.\n";
               }
            }
            if (input == "cow")
            {
               if (MyFarmer.get_money() >= 1500)
               {
                  Cows cow = Cows();
                  MyFarm.buy_goods(cow);
                  MyFarmer.set_money(MyFarmer.get_money() - 1500);
               }
               else
               {
                  cout << "Insufficient funds.\n";
               }
            }
         }
         if (input == "sell")
         {
            cout << "Enter 'pig' to sell a pig ($500)\n";
            cout << "Enter 'sheep' to sell a sheep ($750)\n";
            cout << "Enter 'cow' to sell a cow ($1500)\n";
            cin >> input;
            if (input == "pig")
            {
               if (MyFarm.pig_array_old[0].get_age() > 5)
               {
                  MyFarm.sell_goods(MyFarm.pig_array_old[0]);
                  MyFarmer.set_money(MyFarmer.get_money() + 500);
               }
               else
               {
                  cout << "No pigs to sell.\n";
               }
            }
            if (input == "sheep")
            {
               if (MyFarm.sheep_array_old[0].get_age() > 0)
               {
                  MyFarm.sell_goods(MyFarm.sheep_array_old[0]);
                  MyFarmer.set_money(MyFarmer.get_money() + 750);
               }
               else
               {
                  cout << "No sheep to sell.\n";
               }
            }
            if (input == "cow")
            {
               if (MyFarm.cow_array_old[0].get_age() > 0)
               {
                  MyFarm.sell_goods(MyFarm.cow_array_old[0]);
                  MyFarmer.set_money(MyFarmer.get_money() + 1500);
               }
               else
               {
                  cout << "No cows to sell.\n";
               }
            }
         }
         if (input == "sleep")
         {
            MyFarm.sleep();
         }
      }
   }
}