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
#include "save_manager.hpp"

extern "C" 
{
    #include "log.h"
}

#include <iostream>
#include <stdio.h>
#include <ncurses.h>
#include <string.h>


using namespace std;

void displayMainMenu ()
{
  char c = getMainMenuUserInput();
  clear();
  char log [7];
  log[0] = 'c';
  log[1] = 'h';
  log[2] = 'a';
  log[3] = 'r';
  log[4] = ':';
  log[5] = ' ';
  log[6] =  c ;
  
  writeLogFile(log);
  
  switch (c) {
    
    
    
    
    
// The person wants to start a new game
    case 'n':
      startNewGame();
      
      //TODO add teragame game(&Gamestate);
      
      break;
// The person wants to load an existing game
    case 'l':
      loadNewGame();
      //TODO add teragame game(&Gamestate);
      
      
      
      break;
// The person wants to change some options
    case 'o':
      
      //TODO add options menu
      displayMainMenu();
      break;
// Case 4:
// The person wants to exit
  }
  
  
}




int getMainMenuUserInput () {
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
  char c = getch();
  clear();
  return c;
}
