//
// File: FoodItem.cpp
// Description: Nutritional information (classes/constructors)
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

FoodItem::FoodItem() {    // DONE : Define default constructor
  name = "Water";
  fat = 0.0;
  carbs = 0.0;
  protein = 0.0;
}

FoodItem::FoodItem(string newName, double fat, double carbs, double protein) {    // DONE :Define second constructor with parameters
  name = newName;                                                                 // to initialize private data members
  this -> fat = fat;
  this -> carbs = carbs;
  this -> protein = protein;
}

string FoodItem::GetName() {
   return name;
}

double FoodItem::GetFat() {
   return fat;
}

double FoodItem::GetCarbs() {
   return carbs;
}

double FoodItem::GetProtein() {
   return protein;
}

double FoodItem::GetCalories(double numServings) {
   // Calorie formula
   double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
   return calories;
}

void FoodItem::PrintInfo() {
   cout << fixed << setprecision(2);
   cout << "Nutritional information per serving of " << name  << ":" << endl;
   cout << "  Fat: " << fat << " g" << endl;
   cout << "  Carbohydrates: " << carbs << " g" << endl;
   cout << "  Protein: " << protein << " g" << endl;
}