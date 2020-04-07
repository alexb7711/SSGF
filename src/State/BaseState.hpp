// File: BaseState.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: The base class for game states.

#ifndef _BASE_STATE_H_ 
#define _BASE_STATE_H_ 

// C/C++ Standard Library

// Custom Header Files

// Forward Declarations
class Game;

//===============================================================================
//
class BaseState 
{
public: 
  BaseState(Game* game):
    p_game(game)
  {}

  virtual void updateState(sf::Time delta_time)         {}
  virtual void renderState(sf::RenderTarget* renderer ) = 0;
  virtual void handleInput()                            = 0;
  virtual void handleEvents(sf::Event e)                {}

  virtual ~BaseState() = default;

protected:
  Game* p_game;

};

#endif
