#include "Game.hpp"

//--------//
// Public //
//--------//


//===============================================================================
//
Game::Game():
  m_window(new sf::RenderWindow(sf::VideoMode(1280, 720), "Game Title")),
  m_clock(util::Clock::Instance())
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
  int milliseconds_per_update  = 16; // milliseconds - About 62 FPS

//  sf::Clock clock;

  while (m_window->isOpen() && !m_state_stack.empty())
  {
    // Reset the timer
    m_clock->restart();
    
    m_state_stack.top()->handleInput();

    // Catch the game up
    while (lag.asMilliseconds() >= milliseconds_per_update)
    {
      m_state_stack.top()->updateState(milliseconds_per_update);

      lag          -= sf::milliseconds(milliseconds_per_update);
      elapsed_time -= sf::milliseconds(milliseconds_per_update);
    }

//    m_state_stack.top()->updateState(elapsed_time.asMilliseconds());
    
    this->handleEvent();
    m_window->clear();
    m_state_stack.top()->renderState(m_window);
    m_window->display();
    
    // Determine the amount of time that has elapsed
    elapsed_time = m_clock->getElapsedTime(); 
    lag         += elapsed_time;

    // If requested, pop the stack
    this->popState();
  }

  return;
}

//===============================================================================
// Add a new item to the top of the stack.
void Game::pushState(BaseState* state)
{ 
  m_state_stack.push(state);
  return;
}

//===============================================================================
// Indicate that the stack should be popped.
void Game::setPopStack()
{
  m_popState = true;
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
void Game::setQuitGame()
{
  m_popState = m_quit = true;
  return;
}

//===============================================================================
//
Game::~Game()
{
  delete m_window;
  return;
}


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
void Game::popState()
{
  if (m_popState)
  {
    if (m_state_stack.size() == 0 || m_quit)
    {
      this->quitGame();
    }
    else
    {
      m_popState = true;
      m_state_stack.pop();
    }
  }

  return;
}

//===============================================================================
//
void Game::quitGame()
{
  for (uint i = 0; i < m_state_stack.size(); ++i)
    this->popState();
  return;
}
