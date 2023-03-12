//
// File: main.cpp
// Description: Nutritional information (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Given main(), complete the FoodItem class (in files FoodItem.h and FoodItem.cpp) with constructors to initialize each food item. The default constructor should initialize the name to "Water" and all other class data members to 0.0. The second constructor should have four parameters (food name, grams of fat, grams of carbohydrates, and grams of protein) and should assign each class data member with the appropriate parameter value.

Ex: If the input is:

Water
the output is:

Nutritional information per serving of Water:
  Fat: 0.00 g
  Carbohydrates: 0.00 g
  Protein: 0.00 g
Number of calories for 1.00 serving(s): 0.00
Ex: If the input is:

M&M's
10.0
34.0
2.0
3.0
where M&M's is the food name, 10.0 is the grams of fat, 34.0 is the grams of carbohydrates, 2.0 is the grams of protein, and 3.0 is the number of servings, the output is:

Nutritional information per serving of M&M's:
  Fat: 10.00 g
  Carbohydrates: 34.00 g
  Protein: 2.00 g
Number of calories for 1.00 serving(s): 234.00
Number of calories for 3.00 serving(s): 702.00
Note: The program outputs the number of calories for one serving of a food and for the input number of servings as well. The program only outputs the calories for one serving of water. */


#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
   string itemName;
   double amountFat, amountCarbs, amountProtein;
   double numServings;
   cout << fixed << setprecision(2);
   
   cin >> itemName;

   if(itemName == "Water" || itemName == "water") {
      FoodItem foodItem;
      foodItem.PrintInfo();
      cout << fixed << setprecision(2);
      cout << "Number of calories for " << 1.0 << " serving(s): " << foodItem.GetCalories(1.0) << endl;
   }
   
   else {
      cin >> amountFat;
      cin >> amountCarbs;
      cin >> amountProtein;
      cin >> numServings;
      
      FoodItem foodItem = FoodItem(itemName, amountFat, amountCarbs, amountProtein);
      foodItem.PrintInfo();
      cout << "Number of calories for " << 1.0 << " serving(s): " 
           << foodItem.GetCalories(1.0) << endl;
      cout << "Number of calories for " << numServings << " serving(s): " 
           << foodItem.GetCalories(numServings) << endl;
   }

   return 0;
}