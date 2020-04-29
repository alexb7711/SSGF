/*
 * =====================================================================================
 *
 *       Filename:  FPSMonitor.hpp
 *
 *    Description: Display the FPS on the screen.
 *
 *        Version:  1.0
 *        Created:  04/20/2020 03:13:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _FPS_COUNTER_H_ 
#define _FPS_COUNTER_H_

// C/C++ Standard Library

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files


/*
 * =====================================================================================
 *        Class:  FPSMonitor
 *  Description: Display the FPS on the screen.
 * =====================================================================================
 */
class FPSMonitor
{
  public:
    // Public Metods  
    FPSMonitor();

    void update();
    void render(sf::RenderTarget* renderer);

    ~FPSMonitor();

  private:
    // Private Member Variables  
    sf::Text  m_text;
    sf::Font  m_font;
    sf::Clock m_delayTimer;
    sf::Clock m_fpsTimer;

    float m_fps      = 0;
    int m_frameCount = 0;
};

#endif
