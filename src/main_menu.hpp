/*
 * Teraflop
 * The ultimate computer experience
 *
 * Teraflop is licensed under the GPL 3.0 or later.
 * A copy of this license is provided in the above directory.
 *
 * You are free to redistribute this software in accordance
 * with the limitations provided by the GPL.
 *
 * main_menu.hpp and it's companion source file created by Eli Stone 7/23/16.
 * Function: Display Main Menu, including list of options, and request user input
 */


#pragma once

//A small note to always use pointers when dealing with data larger than 2 bytes

#include <string>
#include <vector>
#include "universal_structures.hpp"

void displayMainMenu();
int getMainMenuUserInput();


struct cachedData {
  userOptions *options;
  bool hasCreatedGame = false;
  std::string mostRecentProfileName;
  std::vector<std::string> dateOrderedProfiles;
};
