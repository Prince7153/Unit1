// Teacher Dr. T
// Functions file Unit 1

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
    double ds; 
    string dsUnits;
    double dt;
    string dtUnits;
    cout << "This program will calculate velocity\nEnter Value of ds: ";
    cin >> ds;
    cout << "\nEnter unit of ds: ";
    cin.ignore();
    cin >> dsUnits;
    cout << "\nEnter Value of dt: ";
    cin >> dt;
    cout << "\nEnter unit of dt: ";
    cin >> dtUnits;
    double v  = ds / dt;
    cout << v << dsUnits << "/" << dtUnits << endl;
  }
  else if(userOption == "B" || userOption == "b")
  {
    
  }
  else if(userOption == "C" || userOption == "c")
  {
    
  }
  else if(userOption == "D" || userOption == "d")
  {
    
  }
  else if(userOption == "E" || userOption == "e")
  {
    
  }
  else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      cout << reset; 
      cout << "\033[2J\033[1;1H";  
      system("clear");
    }
  else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}

#endif
  

