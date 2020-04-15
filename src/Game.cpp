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
  // Initialize FPS tracker
  sf::Time elapsed_time        = sf::Time::Zero;
  sf::Time lag                 = sf::Time::Zero;
  int milliseconds_per_update  = 16; // millisends - About 62 FPS

  sf::Clock clock;

  while (m_window->isOpen() && !m_state_stack.empty())
  {
    // Reset the timer
    clock.restart();
    
    m_state_stack.top()->handleInput();

    // Catch the game up
    while (lag.asMilliseconds() >= milliseconds_per_update)
    {
      m_state_stack.top()->updateState();
      lag -= sf::milliseconds(milliseconds_per_update);
    }

    this->handleEvent();

    m_state_stack.top()->renderState(m_window);

    m_window->display();
    
    // Determine the amount of time that has elapsed
    elapsed_time = clock.getElapsedTime();
    lag         += elapsed_time;

    // printf("FPS = %d\n", 1000/elapsed_time.asMilliseconds());

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
{
    sf::Event event;
    while (m_window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            m_window->close();
    }

    return;
}

//===============================================================================
//
void Game::popStack()
{}
