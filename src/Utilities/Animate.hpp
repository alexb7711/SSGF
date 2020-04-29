/*
 * =====================================================================================
 *
 *       Filename:  Animate.hpp
 *
 *    Description:  Handles animations
 *
 *        Version:  1.0
 *        Created:  04/22/2020 01:10:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


/*
 * =====================================================================================
 *        Class:  Animate
 *  Description: Manages the implementation of animating a sprite using a sprite sheet. 
 * =====================================================================================
 */

#ifndef _ANIMATE_H_
#define _ANIMATE_H_

// Typedefines
typedef unsigned int uint; 

// C/C++ Standard Library
#include <vector>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

class Animate
{
  public:
    // Public Methods
    Animate(uint frame_width, uint frame_height);
    ~Animate();

  private:
    // Private Member Variables
};

#endif
