#include "teracurses.hpp"

#include <iostream>
#include <ncurses.h>

using namespace std;

initScreen()
{
  initscr();
  raw();
}


destroyScreen()
{
  endwin();
  
}
