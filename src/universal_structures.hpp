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
 * universal_structures.hpp created by Eli Stone 7/23/16.
 * Function: Provide declarations for data needed by multiple classes.
 */

#pragma once

#include <vector>
#include <string>

struct userOptions {
  bool verbose = false;


  /*
   *color format: 0xaaRRGGBB
   *If a isn't 0, use terminal color defined by a.
   *This works because there are only 255 terminal colors.
   *
   *colorSet color order:
   *0: Message Color	(default: console default color)
   *1: Timer Color	(default: console secondary color)
   *2: Progress Color	(default: 0x0000AA00 Green)
   *3: Error Color	(default: 0x00AA0000 Red)
   *4: Info Color	(default: 0x000088AA Teal)
   *5: 
   *6: 
   *7: 
   *8: 
   *9: 
   */
  int colorSet[];
};

struct malware {
  
  
  
  
  
  
};

struct defense {
  //Health generally affects how long it takes to crack
  double health;
  //Defense points generally affects if you can hack it, also the time it takes.
  double defensePoints;
  
};


struct computer {
  
  double effectiveSpeed; //Attack power as quantified by 
  
  
  /*
   * Unix systems can use unix software and are generally useful once hacked.
   * Nonunix systems get converted to unix systems upon capture, albeit with a speed loss.
   * 
   */
  
  bool isUnixSystem;
  
  //Kernel name. Nonunix systems will generally either print NT on Windows or ERR on DOS.
  //Usually tells the person what kind of OS they are attempting to get into.
  std::string kernelName;
  
  std::vector<defense> securitySystems;
  
  //How much wanted level you gain by successfully hacking
  double wantedBonus;
  
};


struct specialComputer {
  
  /*
   * 
   * 
   * 
   * 
   * 
   * 
   * 
   * 
   * 
   */
  int computerType;
  
  std::vector<defense> securitySystems;
  
  
  std::string kernelName;
};


struct playerComputer {
  
  //CPU = personal attack power
  double attackPower;
  std::string attackName;
  
  //RAM = max queuable actions (measued in GB)
  int    ramSize;
  std::string ramName;
  
  //NET = max botnet attacking power
  double netSize;
  std::string netName;
  
  //HDD = max storable external computers
  int    hddSize;
  std::string hddName;
};

struct cityBlock {
  //Where 0 is nonunix, 1 unix, and 2 server
  int internalComputers [3];
  
  //A multiplier to determine how much the cops will get mad when you hack.
  //This generally goes up as you control more computers.
  double fascism;
  
  //A procedurally generated description of the environment.
  std::string blockDescription;
  
  
  
  
};



struct gameState {
  
  long worldSeed;
  
  int xp;// How 1337 of a hax0r are you?
  int rp;// How smart of a hax0r are you?
  int botnetSize; //How good of a hax0r are you?
  
  playerComputer player;//Your operating system, your rules.
  
  //A special vector storing computers you can possibly hack.
  int externalComputers [17];
  
  //A small tracker to track the number of city blocks you have been to. Also works with world seed to generate stuff.
  int cityLocation;
  cityBlock  block;
  
  /* 0 - Device security
   * 1 - Unix
   * 2 - You
   * 3 - The Government
   * 4 - Education
   * 5 - Hacking
   * 6 - Open Source
   */
  double publicOpinion [7];
  
  
  
};
