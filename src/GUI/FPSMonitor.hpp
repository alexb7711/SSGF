// File: FPSCounter.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Display the FPS on the screen.

#ifndef _FPS_COUNTER_H_ 
#define _FPS_COUNTER_H_

#include <SFML/Graphics.hpp>

class FPSMonitor
{
    public:
        FPSMonitor();

        void update();

        void draw(sf::RenderTarget& renderer);

    private:
        sf::Text m_text;
        sf::Font m_font;

        sf::Clock m_delayTimer;
        sf::Clock m_fpsTimer;

        float m_fps = 0;

        int m_frameCount = 0;
};

#endif
