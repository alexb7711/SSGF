/*
 * =====================================================================================
 *
 *       Filename:  Animate.hpp
 *
 *    Description:  A generalized animated sprite class for SFML.  
 *
 *        Version:  1.0
 *        Created:  04/28/2020 02:03:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _ANIMATE_H_
#define _ANIMATE_H_

// C/C++ Standard Library
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "ObjectTemplates/AnimatedObject.hpp"

class AnimatedSprite : public AnimatedObject
{
  public:
    AnimatedSprite();

    AnimatedSprite(const sf::Texture& texture);
    AnimatedSprite(const sf::Texture& texture, std::vector<sf::IntRect> frames);
    
    void setTexture(sf::Texture texture)                 override;
    void addFrame(sf::IntRect frame)                     override;
    void setFrameVector(std::vector<sf::IntRect> frames) override;
    void setAnimationDelay(float delay)                  override;
    void update(const int& elapsed_time)                 override;
    void render(sf::RenderTarget* renderer)              override;

    ~AnimatedSprite();

  private:
    int                      m_delay         = 0;
    int                      m_elapsed_time  = 0;
    std::size_t              m_current_frame = 0;
    std::vector<sf::IntRect> m_frame;
    sf::Sprite               m_sprite;
    sf::Texture              m_texture;
};

#endif
