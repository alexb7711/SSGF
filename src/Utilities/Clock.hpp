/*
 * =====================================================================================
 *
 *       Filename:  Clock.hpp
 *
 *    Description: Internal clock singleton 
 *
 *        Version:  1.0
 *        Created:  05/01/2020 09:33:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _CLOCK_H_ 
#define _CLOCK_H_

// C/C++ Standard Library

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

namespace util
{
  class Clock 
  {
    public:
      static sf::Clock* Instance()
      {
        static sf::Clock clock;
        return &clock;
      }

    private:
      Clock(); 
  };
}

#endif
