#include "../ResourceManager/ResourceHolder.h"

#include <iostream>

FPSMonitor::FPSMonitor()
{
    m_text.move(0, 0);
    m_text.setOutlineColor (sf::Color::Black);
    m_text.setFillColor({255,255,255});
    m_text.setOutlineThickness  (2);
    m_text.setFont(ResourceHolder::get().fonts.get("arial"));
    m_text.setCharacterSize(15);
}

//updates the FPS variable
void FPSMonitor::update()
{
    m_frameCount++;

    if (m_delayTimer.getElapsedTime().asSeconds() > 0.2) {
        m_fps = m_frameCount / m_fpsTimer.restart().asSeconds();
        m_frameCount = 0;
        m_delayTimer.restart();
    }
}

//Draws the FPS display to the window
void FPSMonitor::draw(sf::RenderTarget& renderer)
{
    m_text.setString("FPS " + std::to_string((int)m_fps));
    renderer.draw(m_text);
}
