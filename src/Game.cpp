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

  // Testing
  sf::Font font;
  if (!font.loadFromFile("font/FreeMono.otf"))
    printf("ERROR: FILE WAS NOT LOADED :(\n");

  m_text.setFont(font);
  m_text.setCharacterSize(30);
  m_text.setString("Hello, World!");

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
    m_window->clear();
    m_state_stack.top()->renderState(m_window);
    m_window->draw(m_text);
    m_window->display();
    
    // Determine the amount of time that has elapsed
    elapsed_time = clock.getElapsedTime();
    lag         += elapsed_time;

    // printf("FPS = %d\n", 1000/elapsed_time.asMilliseconds());
    
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
