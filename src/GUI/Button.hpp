/*
 * =====================================================================================
 *
 *       Filename:  Button.hpp
 *
 *    Description:  A basic button class.
 *
 *        Version:  1.0
 *        Created:  04/30/2020 01:40:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _BUTTON_H_
#define _BUTTON_H_ 

// C/C++ Standard Library
#include <string>

// Custom Header Files
#include "ClickableWidget.hpp"
#include "../ResourceHandler/ResourceHandler.hpp"

namespace GUI
{

  class Button : public ClickableWidget
  {
  public: 
    // Public Methods
    Button();
    void         render(sf::RenderTarget* renderer)  override;
    void         handleEvents(sf::Event e)           override;
    void         update(sf::RenderWindow* window)    override;

    std::string  getType()                           override;
    sf::Vector2f getPosition()                       override;
    void         setPosition(sf::Vector2f& position) override;

    bool isHovering(sf::RenderWindow* window)        override;
    void isClicked()                                 override;
    void execute()                                   override;

    void         setFunction()                       override;
    sf::Vector2f getSize()                           override;
    void         setSize(sf::Vector2f size)          override;

    ~Button();

  private:
    // Private Member Variables
    sf::RectangleShape m_button;
  };

}

#endif
