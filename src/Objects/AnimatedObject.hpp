/*
 * =====================================================================================
 *
 *       Filename:  AnimatedObject.hpp
 *
 *    Description: Virtual class to define properties of animated objects
 *
 *        Version:  1.0
 *        Created:  05/01/2020 02:25:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _ANIMATED_OBJECT_H_
#define _ANIMATED_OBJECT_H_ 
// C/C++ Standard Library

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "Object.hpp"

class AnimatedObject : public Object
{
  public:
    virtual void addFrame(sf::IntRect frame)                     = 0;
    virtual void setFrameVector(std::vector<sf::IntRect> frames) = 0;

  private:
    std::vector<sf::IntRect> m_frame;
    std::size_t m_current_frame = 0;
};
#endif
