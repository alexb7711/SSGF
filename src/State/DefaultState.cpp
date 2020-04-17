#include "DefaultState.hpp"
#include "../Game.hpp"

//===============================================================================
//
DefaultState::DefaultState(Game* game):
  BaseState(game),
  m_circle(10.f),
  m_stack(game->getWindow())
{
  m_circle.setFillColor(sf::Color::Green);
  m_circle_pos = m_circle.getPosition();
  
  // Testing Text
  m_text.setFont(ResourceHandler::getPtr()->font.get("FreeMono"));
  m_text.setCharacterSize(30);
  m_text.setString("Hello, World!");

  return;
}
  
//===============================================================================
//
void DefaultState::updateState()
{
  m_circle.setPosition(m_circle_pos);
  m_stack.update();
  return;
}

//===============================================================================
//
void DefaultState::renderState(sf::RenderTarget* renderer)
{
  renderer->draw(m_circle);
  renderer->draw(m_text);
  m_stack.render(renderer);
  return;
}

//===============================================================================
//
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

//===============================================================================
//
void DefaultState::handleEvents(sf::Event e)
{}
  
//===============================================================================
//
DefaultState::~DefaultState()
{}
