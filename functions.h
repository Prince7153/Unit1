// Jobanpreet Singh COSC 1437 
// Teacher Dr. T
// Functions file

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
using namespace std;

void showMenu();
void handleOption(string);


void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Calculate Velocity" <<endl; 
  cout << "B: Calculate Acceleration" << endl; 
  cout << "C: Calculate Motion" << endl; 
  cout << "D: Calculate Weight" << endl; 
  cout << "F: Calculate Momentum" << endl; 
  cout << "E: Exit" << endl; 
  cout << "X: clear the screen" << endl;  
}

void handleOption(string userOption)
{
  if(userOption == "A" || userOption == "a")
  {
    cout << "This program will calculate velocity, Enter";
  }
}
#endif
  

