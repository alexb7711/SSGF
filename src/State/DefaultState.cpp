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
#include "DefaultState.hpp"
#include "../Game.hpp"

/*
 *--------------------------------------------------------------------------------------
 *       Class:  DefaultState
 *      Method:  DefaultState :: DefaultState
 * Description:  
 *--------------------------------------------------------------------------------------
 */
DefaultState::DefaultState(Game* game):
  BaseState(game),
  m_circle(10.f),
  m_object(ObjectHandler<Object>()),                // TODO::I think Game should have these
  m_resource_handler(ResourceHandler::Instance()),  // TODO::I think Game should have these
  m_stack(game->getWindow())
{
  m_circle.setFillColor(sf::Color::Green);
  m_circle_pos = m_circle.getPosition();

  m_resource_handler->texture.add("SpriteSheet");
  m_dragon.setTexture(m_resource_handler->texture.get("SpriteSheet"));
  
  // Testing TileMap
  m_game->m_tile_map->loadMap("Default");
  m_game->m_tile_map->loadDictionary("Default");

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  DefaultState
 *      Method:  DefaultState :: updateState
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void DefaultState::updateState(const int& elapsed_time)
{
  m_circle.setPosition(m_circle_pos);
  m_stack.update();
  m_FPS.update();
  m_dragon.update(elapsed_time);

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  DefaultState
 *      Method:  DefaultState :: renderState
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void DefaultState::renderState(sf::RenderTarget* renderer)
{
  renderer->draw(m_circle);
  m_stack.render(renderer);
  m_FPS.render(renderer);
  m_dragon.render(renderer);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  DefaultState
 *      Method:  DefaultState :: handleInput
 * Description:  
 *--------------------------------------------------------------------------------------
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
    m_game->setPopStack();
  }
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  DefaultState
 *      Method:  DefaultState :: handleEvents
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void DefaultState::handleEvents(sf::Event e)
{}
  
/*
 *--------------------------------------------------------------------------------------
 *       Class:  DefaultState
 *      Method:  DefaultState :: ~DefaultState
 * Description:  
 *--------------------------------------------------------------------------------------
 */
DefaultState::~DefaultState()
{}
