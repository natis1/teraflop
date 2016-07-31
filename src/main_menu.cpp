/*
 * Teraflop
 * The ultimate computer experience
 *
 * Teraflop is licensed under the GPL 3.0 or later.
 * A copy of this license is provided in the above directory.
 *
 * You are free to redistribute this software in accordance
 * with the limitations provided by the GPL.
 */

#include "main_menu.hpp"

#include <iostream>
#include <stdio.h>

using namespace std;

void displayMainMenu () {
  
  switch (getMainMenuUserInput()) {

// The person wants to start a new game
    case 1:
      
      //TODO add teragame game(&Gamestate);
      
      break;
// The person wants to configure their settings
    case 2:
      
      //TODO add teragame game(&Gamestate);
      
      
      
      break;
// The person wants to change some options
    case 3:
      
      //TODO add options menu
      displayMainMenu();
      break;
// Case 4:
// The person wants to exit
  }
  
  
  
  
  
  
  
  
  
  
  
}




int getMainMenuUserInput () {
  int userInput = 0;
  cout << "Welcome to Teraflop, may I take your order?" << endl;
  cout << endl;
  cout << "Start a (n)ew game" << endl;
  cout << "(C)ontinue an existing game" << endl;
  cout << "Change some of the (o)ptions" << endl;
  cout << endl << endl;
  //
  int c = getchar();
  
  return userInput;
}
