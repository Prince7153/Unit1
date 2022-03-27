//Unit 1: Jobanpreet Singh, Teacher: Dr_T
//3-26-22

#include "functions.h"

int main() 
{
  string option = ""; 
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  do
  {
    showMenu();
    cout << "\nPlease enter an option: ";
      cout << color; 
    option = validateString(option); 
    cout << reset; 
    handleOption(option);

    
  }while(option != "e" && option != "E"); 
  cout << "\nGoodbye. Ending Program" << endl;
  return 0;
}
