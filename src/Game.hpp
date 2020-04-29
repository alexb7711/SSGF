/*
 * =====================================================================================
 *
 *       Filename:  Game.hpp
 *
 *    Description: Handles the main game loop, states, updating, user input, 
 *                 rendering, and FPS.
 *
 *        Version:  1.0
 *        Created:  04/20/2020 03:30:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _GAME_HPP_ 
#define _GAME_HPP_ 

// C/C++ Standard Library
#include <memory>
#include <stack>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "State/BaseState.hpp"
#include "State/DefaultState.hpp"
#include "GUI/Button.hpp"

//===============================================================================
//
class Game 
{
  public: 
    // Public Methods
    Game();

    void              run();
    void              pushState(BaseState* state);
    void              setPopStack();
    void              setQuitGame();
    sf::RenderWindow* getWindow();

    ~Game();

  private:
    // Private Methods
    void handleEvent();
    void popState();
    void quitGame();

    // Private Member Varibales
    sf::RenderWindow* m_window;
    std::stack<BaseState*> m_state_stack;
    
    bool m_quit     = false;
    bool m_popState = false;
};

#endif
