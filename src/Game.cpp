#include "Game.hpp"

//--------//
// Public //
//--------//

//===============================================================================
//
Game::Game():
  m_window(new sf::RenderWindow(sf::VideoMode(1280, 720), "Game Title"))
{
  m_state_stack.push(new DefaultState(this));
  m_window->setPosition({m_window->getPosition().x, 0});
  m_window->setFramerateLimit(60);
  return;
}

//===============================================================================
//
void Game::run()
{
  while (m_window->isOpen() && !m_state_stack.empty())
  {
    sf::Event event;
    while (m_window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            m_window->close();
    }

    sf::Time temp = sf::seconds(10);

    m_state_stack.top()->handleInput();
    m_state_stack.top()->updateState(temp);
    m_state_stack.top()->renderState(m_window);

    m_window->display();
  }

  return;
}

//===============================================================================
//
void Game::pushStack()
{}

//===============================================================================
//
void Game::setPopStack()
{
  m_popStack = true;
  return;
}

//===============================================================================
//
sf::RenderWindow* Game::getWindow()
{
  return m_window;
}

//===============================================================================
//
void Game::exitGame()
{}

//===============================================================================
//
Game::~Game()
{}


//---------//
// Private //
//---------//

//===============================================================================
//
void Game::handleEvent()
{}

//===============================================================================
//
void Game::popStack()
{}
