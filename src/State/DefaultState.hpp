// File: DefaultState.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: The starting state that the game will be placed into.

#ifndef _DEFAULT_STATE_H_ 
#define _DEFAULT_STATE_H_ 

// C/C++ Standard Library
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "BaseState.hpp"

//===============================================================================
//
class DefaultState : public BaseState
{
public: 
  // Public Methods
  DefaultState(Game* game);
  void updateState(sf::Time delta_time)        override;
  void renderState(sf::RenderTarget* renderer) override;
  void handleInput()                           override;
  void handleEvents(sf::Event e)               override;
  ~DefaultState();

private:
  // Private Member Variables
  sf::CircleShape m_circle;
  sf::Vector2f    m_circle_pos;
};

#endif
