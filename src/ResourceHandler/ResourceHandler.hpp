/*
 * =====================================================================================
 *
 *       Filename:  ResourceHandler.hpp
 *
 *    Description: The interface for the programmer to utilize resources.
 *
 *        Version:  1.0
 *        Created:  05/01/2020 11:20:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _RESOURCE_HANDLER_HPP_ 
#define _RESOURCE_HANDLER_HPP_ 

// C/C++ Standard Library
#include <map>
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


// Custom Header Files
#include "ResourceContainer.hpp"

class ResourceHandler 
{
  public:
    // Public Methods
    static ResourceHandler* Instance();

    ResourceContainer<sf::Font>        font;
    ResourceContainer<sf::Music>       music;
    ResourceContainer<sf::SoundBuffer> soundBuffer;
    ResourceContainer<sf::Texture>     texture;

  private:
    // Private Methods
    ResourceHandler();
};

#endif
