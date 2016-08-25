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


#include "main.hpp"
#include "main_menu.hpp"


//STL for cout
#include <iostream>
#include <string>
#include <ncurses.h>
#include <signal.h>

using namespace std;

int main (int argc, char *argv[])
{
  sigset(SIGTERM, sigterm_handler);
  initscr();
  raw();
  
  printw("Welcome to Teraflop: The ultimate hacking simulator powered by NCurses");
  mvprintw(1 , 0, "Please set your terminal window to 24 rows and 80 columns for best results");
  mvprintw(23, 0, "Press any key to continue...");
  getch();
  clear();
  
  displayMainMenu();
  
  endwin();
  return 0;
}


void sigterm_handler(int signo){
  endwin();
  cout << "Program exited with error code : " << signo << endl;
  cout << "                    See error log for info on what went wrong" << endl;
  cout << endl;
  cout << endl;
}
