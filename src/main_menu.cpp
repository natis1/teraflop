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
#include <ncurses.h>


using namespace std;

void displayMainMenu ()
{
  
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




int getMainMenuUserInput ()
{
  initscr();
  raw();
  int userInput = 0;
  
  
  
  move(0 , 36); //Print as close to the middle of the screen as possible.
  
  printw("Teraflop");
  
  mvprintw(6 , 0, "Start a (n)ew game");
  mvprintw(7, 0, "(C)ontinue an exisiting game");
  mvprintw(8, 0, "Change some of the (o)ptions");
  mvprintw(9, 0, "(V)iew the current leaderboards");
  mvprintw(10, 0, "(q)uit the game");
  
  //Codeblock. This is implemented in game with a function which tracks your cursor movement.
  mvprintw(23, 0, ">");
  move(23, 1);
  
  //int c = getchar();
  
  getch();
  endwin();
  
  return userInput;
}
