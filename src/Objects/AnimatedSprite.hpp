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

#include <string>

#include <SFML/Graphics.hpp>

#ifndef _ANIMATE_H_
#define _ANIMATE_H_

class AnimatedSprite
{
  public:
    AnimatedSprite();
    AnimatedSprite(const sf::Texture& texture);
    AnimatedSprite(const sf::Texture& texture, std::vector<sf::IntRect> frames);
    void setTexture(sf::Texture texture);
    void addFrame(sf::IntRect frame);
    void setFrameVector(std::vector<sf::IntRect> frames);
    void update();
    void render(sf::RenderTarget* renderer);
    ~AnimatedSprite();

  private:
    std::vector<sf::IntRect> m_frame;
    std::size_t m_current_frame = 0;
    sf::Texture m_texture;
    sf::Sprite m_sprite;
};

#endif
