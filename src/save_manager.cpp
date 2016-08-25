#include "save_manager.hpp"
#include "log.h"
#include <fstream>
#include <string>
#include <ncurses.h>
#include <cstring>
#include <ctime>

gameState gs;

using namespace std;
void startNewGame() {
  move(0, 0);
  mvprintw(20, 0, "--------------------------------------------------------------------------------");
  mvprintw(22, 0, "Please enter the numerical seed you want, or nothing to use the current time.");
  mvprintw(23, 0, ">");
  
  string seed;
  nocbreak();
  echo();

  int consoleInput = getch();

  while ( consoleInput != '\n' )
  {
      seed.push_back( consoleInput );
      consoleInput = getch(); //Get character
  }
  
  if (seed.size() == 0 ) {
    gs.worldSeed = time(0);
  } else {
    try {
      gs.worldSeed = stol(seed);
    } catch (invalid_argument) {
      char *error = new char[sizeof "Error, unable to set seed because you used invalid numbers.\n"];
      strcpy(error, "Error, unable to set seed because you used invalid numbers.\n");
      writeLogFile(error);
      
      
    } catch (out_of_range) {
      char *error = new char[sizeof "Error, unable to set seed because your seed is too large.\n"];
      strcpy(error, "Error, unable to set seed because your seed is too large.\n");
      writeLogFile(error);
      
    }
    
  }
  
  clear();
    
  mvprintw(20, 0, "--------------------------------------------------------------------------------");
  mvprintw(22, 0, "Please enter your desired character motive.");
  mvprintw(23, 0, ">");
  
  
  
  
  
}

void loadNewGame() {
  
  
  
}

void automatedGameLoader(string saveName) {
  
  
  
  
}



void printSeedInformation() {
  //clear();
  
  
  
}


void printStartingInformation() {
  
  
  
  
  
  
}