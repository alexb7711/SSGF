// File: Game.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Handles the main game loop, states, updating, user input,
//              rendering, and FPS.

#ifndef _GAME_HPP_ 
#define _GAME_HPP_ 

// C/C++ Standard Library
#include <memory>
#include <vector>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

//===============================================================================
//
class Game 
{
  public: 
    // Public Methods
    Game();

    void run();

    // void exitGame();
    // ~Game();

  private:
    // Private Member Varibales
    sf::RenderWindow* m_window;

    bool m_quit = false;

    // Private Methods
    // void handleEvent();
};

#endif
