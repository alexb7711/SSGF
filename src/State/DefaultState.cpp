#include "DefaultState.hpp"
#include "../Game.hpp"

//===============================================================================
//
DefaultState::DefaultState(Game* game):
  BaseState(game),
  m_circle(100.f)
{
  m_circle.setFillColor(sf::Color::Green);
  return;
}

//===============================================================================
//
void DefaultState::updateState(sf::Time delta_time)
{}

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
{}

//===============================================================================
//
void DefaultState::handleEvents(sf::Event e)
{}
  
//===============================================================================
//
DefaultState::~DefaultState()
{}
