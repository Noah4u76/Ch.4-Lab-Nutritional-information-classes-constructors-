//
// File: FoodItem.h
// Description: Nutritional information (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

class FoodItem {
   public:
    FoodItem();                                                         // DONE: Declare default constructor

    FoodItem(string newName, double fat, double carbs, double protein); // DONE: Declare second constructor with parameters 
                                                                        // to initialize private data members
      string GetName();

      double GetFat();

      double GetCarbs();

      double GetProtein();

      double GetCalories(double numServings);

      void PrintInfo();

   private:
      string name;
      double fat;
      double carbs;
      double protein;
};

#endif