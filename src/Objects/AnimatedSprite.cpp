/*
 * =====================================================================================
 *
 *       Filename:  AnimatedSprite.cpp
 *
 *    Description:  A generalized animated sprite class for SFML.  
 *
 *        Version:  1.0
 *        Created:  04/28/2020 02:02:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "AnimatedSprite.hpp"
#include <iostream>

//===============================================================================
//
AnimatedSprite::AnimatedSprite()
{}

//===============================================================================
//
AnimatedSprite::AnimatedSprite(const sf::Texture& texture)
{
  setTexture(texture);
  return;
}

//===============================================================================
//
AnimatedSprite::AnimatedSprite(const sf::Texture& texture, std::vector<sf::IntRect> frames)
{
  setTexture(texture);
  setFrameVector(frames);
  return;
}

//===============================================================================
//
void AnimatedSprite::setTexture(sf::Texture texture)
{  
  m_texture = texture;
  m_sprite.setTexture(m_texture, true);
  return;
}
    
//===============================================================================
//
void AnimatedSprite::addFrame(sf::IntRect frame)
{
  m_frame.push_back(frame);
  return;
}

//===============================================================================
//
void AnimatedSprite::setFrameVector(std::vector<sf::IntRect> frames)
{
  m_frame = frames;
  return;
}
 

/*
 *--------------------------------------------------------------------------------------
 *       Class:  AnimatedSprite
 *      Method:  AnimatedSprite :: setAnimationDelay
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void AnimatedSprite::setAnimationDelay(float delay)
{
  m_delay = delay;
  return;
}

//===============================================================================
//
void AnimatedSprite::update(const int& elapsed_time)
{
  m_elapsed_time += elapsed_time;
  std::cout << m_elapsed_time << std::endl;

  if (m_frame.size() > 0 && m_elapsed_time >= m_delay)
  {
    // TODO:  May be a more efficient way of doing this
    if (m_current_frame++ >= m_frame.size()-1)   
      m_current_frame = 0;
    
    m_sprite.setTextureRect(m_frame[m_current_frame]);
    m_elapsed_time = 0;
  }

  return;
}

//===============================================================================
//
void AnimatedSprite::render(sf::RenderTarget* renderer)
{
  renderer->draw(m_sprite);
  return;
}

//===============================================================================
//
AnimatedSprite::~AnimatedSprite()
{}
