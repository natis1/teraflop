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
