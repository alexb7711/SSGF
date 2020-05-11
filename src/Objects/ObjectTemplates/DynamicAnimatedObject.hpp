/*
 * =====================================================================================
 *
 *       Filename:  DynamicAnimatedObject.hpp
 *
 *    Description: Animated Object that has the capability to move. 
 *
 *        Version:  1.0
 *        Created:  05/06/2020 09:37:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _DYNAMIC_ANIMATED_OBJECT_H_
#define _DYNAMIC_ANIMATED_OBJECT_H_

// C/C++ Standard Library

// SFML Libraries

// Custom Header Files
#include "AnimatedObject.hpp"

class DynamicAnimatedAnimatedObject : public AnimatedObject
{
  public:
    virtual void updatePosition() = 0;

  private:
};

#endif
