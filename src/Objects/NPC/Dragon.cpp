/*
 * =====================================================================================
 *
 *       Filename:  Dragon.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/06/2020 09:51:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Dragon.hpp"
    
/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: Dragon
 * Description: Dragon
 * 
 *
 *--------------------------------------------------------------------------------------
 */
Dragon::Dragon()
{
  // Create the Walking Animation
  std::vector<sf::IntRect> dragonWalk;
  dragonWalk.push_back(sf::IntRect(0, 0, 192, 192));
  dragonWalk.push_back(sf::IntRect(192, 0, 192, 192));
  dragonWalk.push_back(sf::IntRect(384, 0, 192, 192));
  dragonWalk.push_back(sf::IntRect(192, 0, 192, 192));
  
  setFrameVector(dragonWalk);

  m_animated_sprite.setAnimationDelay(250);

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: setTexture
 * Description: 
 *--------------------------------------------------------------------------------------
 */
void Dragon::setTexture(sf::Texture texture)
{
  m_animated_sprite.setTexture(texture);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: update
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::update(const int& elapsed_time)
{
  m_animated_sprite.update(elapsed_time);
  return;
}
 
/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: render
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::render(sf::RenderTarget* renderer)
{
  m_animated_sprite.render(renderer);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: addFrame
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::addFrame(sf::IntRect frame)
{
  m_animated_sprite.addFrame(frame);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: setFrameVector
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::setFrameVector(std::vector<sf::IntRect> frames)
{
  m_animated_sprite.setFrameVector(frames);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: setAnimationDelay
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::setAnimationDelay(float delay)
{
  m_animated_sprite.setAnimationDelay(delay);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: updatePosition
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::updatePosition()
{}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: ~Dragon
 * Description: Dragon
 * setTexture
 *
 *--------------------------------------------------------------------------------------
 */
Dragon::~Dragon()
{}
