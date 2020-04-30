/*
 * =====================================================================================
 *
 *       Filename:  DefaultState.cpp
 *
 *    Description: The starting state that the game will be placed into.  
 *
 *        Version:  1.0
 *        Created:  04/21/2020 12:15:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>

#include "DefaultState.hpp"
#include "../Game.hpp"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DefaultState::
 *  Description:  
 * =====================================================================================
 */
DefaultState::DefaultState(Game* game):
  BaseState(game),
  m_circle(10.f),
  m_stack(game->getWindow())
{
  m_circle.setFillColor(sf::Color::Green);
  m_circle_pos = m_circle.getPosition();

  return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DefaultState::updateState()
 *  Description:  
 * =====================================================================================
 */
void DefaultState::updateState()
{
  m_circle.setPosition(m_circle_pos);
  m_stack.update();
  m_FPS.update();
  return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DefaultState::renderState
 *  Description: 
 *
 * =====================================================================================
 */
void DefaultState::renderState(sf::RenderTarget* renderer)
{
  renderer->draw(m_circle);
//  renderer->draw(m_text);
  m_stack.render(renderer);
  m_FPS.render(renderer);
  return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DefaultState::handleInput
 *  Description: 
 *
 * =====================================================================================
 */
void DefaultState::handleInput()
{
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
  {
    m_circle_pos.x -= 0.9;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
  {
    m_circle_pos.x += 0.9;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
  {
    m_circle_pos.y -= 0.9;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
  {
    m_circle_pos.y += 0.9;
  }
  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
  {
    p_game->setPopStack();
  }
  return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DefaultState::handleEvents
 *  Description: 
 *
 * =====================================================================================
 */
void DefaultState::handleEvents(sf::Event e)
{}
  
//===============================================================================
//
DefaultState::~DefaultState()
{}
