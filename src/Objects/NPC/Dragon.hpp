/*
 * =====================================================================================
 *
 *       Filename:  Dragon.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/06/2020 09:51:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _DRAGON_H_
#define _DRAGON_H_

// C/C++ Standard Library

// SFML Libraries

// Custom Header Files
#include "../ObjectTemplates/DynamicAnimatedObject.hpp"
//#include "../AnimatedSprite.hpp"

class Dragon : public DynamicAnimatedAnimatedObject
{
  public:
    Dragon();

    void update(const int& elapsed_time)                 override;
    void updatePosition()                                override;

    ~Dragon();

  private:
//    AnimatedSprite m_animated_sprite;

};

#endif
