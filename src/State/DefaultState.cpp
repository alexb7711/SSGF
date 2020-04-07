#include "DefaultState.hpp"
#include "../Game.hpp"

//===============================================================================
//
DefaultState::DefaultState(Game* game):
  BaseState(game),
  m_circle(10.f)
{
  m_circle.setFillColor(sf::Color::Green);
  m_circle_pos = m_circle.getPosition();
  return;
}

//===============================================================================
//
void DefaultState::updateState(sf::Time delta_time)
{
  m_circle.setPosition(m_circle_pos);
  return;
}

//===============================================================================
//
void DefaultState::renderState(sf::RenderTarget* renderer)
{
  renderer->clear();
  renderer->draw(m_circle);
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
      // quit...
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
