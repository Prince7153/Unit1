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
void motion();
void acceleration();
void netforce();

void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Calculate Velocity" <<endl; 
  cout << "B: Calculate Acceleration" << endl; 
  cout << "C: Calculate Motion" << endl; 
  cout << "D: Calculate Weight" << endl; 
  cout << "F: Calculate Momentum" << endl; 
  cout << "G: Calculate Net Force" << endl;
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
    acceleration();
  }
  else if(userOption == "C" || userOption == "c")
  {
    motion();
  }
  else if(userOption == "D" || userOption == "d")
  {
    weight();
  }
  else if(userOption == "F" || userOption == "f")
  {
    momentum();
  }
  else if(userOption == "G" || userOption == "g")
  {
    netforce();
  }
  else if(userOption == "E" || userOption == "e")
  {
    cout << "\nGoodbye. Ending Program" << endl;
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
  ds = validateDouble(ds);
  cout << "Enter unit of ds: ";
  dsUnits = validateString(dsUnits);
  cout << "Enter Value of dt: ";
  dt = validateDouble(dt);
  cout << "Enter unit of dt: ";
  dtUnits = validateString(dtUnits);
  double v  = ds / dt;
  cout << ds << " / " << dt << " = " << v << " " << dsUnits << "/" << dtUnits 
    << endl;
}

void weight()
{
  double mass;
  double gravity;
  double weight; 
  string unit;
  cout << "This Program will calculate Weight\n";
  cout << "Enter Value of mass: ";
  mass = validateDouble(mass);
  cout << "Enter Value of gravity: ";
  gravity = validateDouble(gravity);
  weight = mass*gravity;
  cout << "Enter unit of measure: ";
  unit = validateString(unit);
  cout << mass << " * " << gravity << " = " << weight << " " << unit << endl;
}

void momentum()
{
  double mass;
  double velocity;
  double momentum; 
  string unit;
  cout << "This Program will calculate Momentum\n";
  cout << "Enter Value of mass: ";
  mass = validateDouble(mass);
  cout << "Enter Value of velocity: ";
  velocity = validateDouble(velocity);
  momentum = mass*velocity;
  cout << "Enter unit of measure: ";
  unit = validateString(unit);
  cout << mass << " * " << velocity << " = " << momentum << " " << unit << endl;
}

void acceleration()
{
  double dv;
  double dt;
  double acceleration;
  string unit;
  cout << "This Program will calculate Acceleration\n";
  cout << "Enter Value of dv: ";
  dv = validateDouble(dv);
  cout << "Enter Value of dt: ";
  dt = validateDouble(dt);
  acceleration = dv/dt;
  cout << "Enter unit of measure: ";
  unit = validateString(unit);
  cout << dv << " / " << dt << " = " << acceleration << " " << unit << endl;
}

void netforce()
{
  double mass;
  double netforce;
  string massunits;
  string accelerationunits;
  double acceleration;
  cout << "This Program will calculate Net Force\n";
  cout << "Enter Value of mass: ";
  mass = validateDouble(mass);
  cout << "Enter unit of mass: ";
  massunits = validateString(massunits);
  cout << "Enter Value of acceleration: ";
  acceleration = validateDouble(acceleration);
  cout << "Enter unit of acceleration: ";
  accelerationunits = validateString(accelerationunits);
  netforce = mass*acceleration;
  cout << mass << " " << massunits << " * " << acceleration << " "
    << accelerationunits << " = " << netforce << " " << massunits << " "
    << accelerationunits << endl;
}

void motion()
{
  cout << "This Program will calculate Motion\n";
  cout << "Select which of the following equations to solve for:\n";
  cout << "1. v = v0 + at\n";
  cout << "2. s = s0 + v0t + ½at^2\n";
  cout << "3. v^2 = v0^2 + 2a(s − s0)\n";
  cout << "4. v̅ = ½(v + v0)\n";
  int answer;
  int loop = 1;
  answer = validateInt(answer);
  while(loop == 1)
  {
    if (answer == 1)
    {
      loop = 0;
      double v0,a,t,v;
      cout << "Enter value of v0: ";
      v0 = validateDouble(v0);
      cout << "Enter value of a: ";
      a = validateDouble(a);
      cout << "Enter value of t: ";
      t = validateDouble(t);
      v = v0 + (a*t);
      cout << v0 << " + " << a << "*" << t << " = " << v;
      
    }
    else if (answer == 2)
    {
      loop = 0;
      double s0,v0,t,a,s;
      cout << "Enter value of s0: ";
      s0 = validateDouble(s0);
      cout << "Enter value of v0: ";
      v0 = validateDouble(v0);
      cout << "Enter value of t: ";
      t = validateDouble(t);
      cout << "Enter value of a: ";
      a = validateDouble(a);
      double t2 = t*t;
      s = s0 + (v0*t) + ((0.5*a)*(t2));
      cout << s0 << " + " << v0 << "*" << t << " + " << "1/2*" << a << "*" << t 
        << "^2 = " << s;
    }
    else if (answer == 3)
    {
      loop = 0;
      
    }
    else if (answer == 4)
    {
      loop = 0;
    }
    else
    {
      cout << "Invalid answer, try again";
    }
  }
}


  
#endif
  

