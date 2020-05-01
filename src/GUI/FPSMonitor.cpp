/*
 * =====================================================================================
 *
 *       Filename:  FPSMonitor.cpp
 *
 *    Description: Display the FPS on the screen.
 *
 *        Version:  1.0
 *        Created:  04/20/2020 03:15:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// C/C++ Standard Library
#include <iostream>

// Custom Header Files
#include "../ResourceHandler/ResourceHandler.hpp"
#include "FPSMonitor.hpp"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FPSMonitor
 *  Description: FPSMontor Constructor 
 * =====================================================================================
 */
FPSMonitor::FPSMonitor()
{
    m_text.move(0, 0);
    m_text.setOutlineColor (sf::Color::Black);
    m_text.setFillColor({255,255,255});
    m_text.setOutlineThickness  (2);
    m_text.setFont(ResourceHandler::Instance()->font.get("FreeMono"));
    m_text.setCharacterSize(15);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FPSMonitor::update
 *  Description: Updates the FPS variable 
 * =====================================================================================
 */
void FPSMonitor::update()
{
    m_frameCount++;

    if (m_delayTimer.getElapsedTime().asSeconds() > 0.2) 
    {
        m_fps = m_frameCount / m_fpsTimer.restart().asSeconds();
        m_frameCount = 0;
        m_delayTimer.restart();
    }
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FPSMonitor::draw
 *  Description: Draws the FPS display to the window
 * =====================================================================================
 */
void FPSMonitor::render(sf::RenderTarget* renderer)
{
    m_text.setString("FPS " + std::to_string((int)m_fps));
    renderer->draw(m_text);
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DefaultState::~FPSMonitor
 *  Description:  
 * =====================================================================================
 */
FPSMonitor::~FPSMonitor()
{}
