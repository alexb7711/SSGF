/*
 * =====================================================================================
 *
 *       Filename:  Object.hpp
 *
 *    Description:  
 *    Description:  Virtual class to define properties of objects 
 *
 *        Version:  1.0
 *        Created:  05/01/2020 02:23:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _OBJECT_H_
#define _OBJECT_H_ 

// C/C++ Standard Library

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
class Object
{
  public:
    Object() {}
    virtual void setTexture(sf::Texture texture)    = 0;
    virtual void update(const int& elapsed_time)    = 0;
    virtual void render(sf::RenderTarget* renderer) = 0;
    virtual ~Object() = default;
    
  private:
    sf::Texture m_texture;
    sf::Sprite m_sprite;
};

#endif
