/*
 * =====================================================================================
 *
 *       Filename:  DefaultState.hpp
 *
 *    Description: The starting state that the game will be placed into.
 *
 *        Version:  1.0
 *        Created:  04/21/2020 12:14:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _DEFAULT_STATE_H_ 
#define _DEFAULT_STATE_H_ 

// C/C++ Standard Library
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "BaseState.hpp"
#include "../GUI/CenterStackWidget.hpp"
#include "../GUI/FPSMonitor.hpp"
#include "../Objects/NPC/Dragon.hpp"
#include "../Objects/ObjectTemplates/Object.hpp"
#include "../Objects/ObjectHandler.hpp"
#include "../ResourceHandler/ResourceHandler.hpp"

class Widget;

/*
 * =====================================================================================
 *        Class:  DefaultSate
 *  Description: The starting state that the game will be placed into.
 * =====================================================================================
 */
class DefaultState : public BaseState
{
  public: 
    // Public Methods
    DefaultState(Game* game);
    void updateState(const int& elapsed_time)    override;
    void renderState(sf::RenderTarget* renderer) override;
    void handleInput()                           override;
    void handleEvents(sf::Event e)               override;
    ~DefaultState();

  private:
    // Private Member Variables
    sf::CircleShape        m_circle;
    sf::Vector2f           m_circle_pos;
    Dragon                 m_dragon; 
    ObjectHandler<Object>  m_object;
    ResourceHandler*       m_resource_handler;
    GUI::CenterStackWidget m_stack;

    // FPS Monitor
    FPSMonitor m_FPS;
};

#endif
