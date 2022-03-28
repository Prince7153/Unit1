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
void velocity();
void weight();
void momentum();


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
    velocity();
  }
  else if(userOption == "B" || userOption == "b")
  {
    
  }
  else if(userOption == "C" || userOption == "c")
  {
    
  }
  else if(userOption == "D" || userOption == "d")
  {
    weight();
  }
  else if(userOption == "F" || userOption == "f")
  {
    momentum();
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

void velocity()
{
  double ds; 
  string dsUnits;
  double dt;
  string dtUnits;
  cout << "This program will calculate velocity\nEnter Value of ds: ";
  cin >> ds;
  cout << "Enter unit of ds: ";
  cin >> dsUnits;
  cout << "Enter Value of dt: ";
  cin >> dt;
  cout << "Enter unit of dt: ";
  cin >> dtUnits;
  double v  = ds / dt;
  cout << v << dsUnits << "/" << dtUnits << endl;
}

void weight()
{
  double mass;
  double gravity;
  double weight; 
  string unit;
  cout << "This Program will calculate Weight\n";
  cout << "Enter unit of mass: ";
  cin >> mass;
  cout << "Enter unit of gravity: ";
  cin >> gravity;
  weight = mass*gravity;
  cout << "Enter unit of measure: ";
  cin >> unit;
  cout << "Weight = " << weight << " " << unit << "\n";
}

void momentum()
{
  double mass;
  double velocity;
  double momentum; 
  string unit;
  cout << "This Program will calculate Momentum\n";
  cout << "Enter unit of mass: ";
  cin >> mass;
  cout << "Enter unit of velocity: ";
  cin >> momentum;
  momentum = mass*velocity;
  cout << "Enter unit of measure: ";
  cin >> unit;
  cout << "Momentum = " << momentum << " " << unit << "\n";
}

#endif
  

