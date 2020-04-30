/*
 * =====================================================================================
 *
 *       Filename:  Button.cpp
 *
 *    Description:  A basic button class.
 *
 *        Version:  1.0
 *        Created:  04/30/2020 01:39:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "Button.hpp"

namespace GUI
{
  //--------//
  // PUBLIC //
  //--------//


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: Button
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  Button::Button():
    GUI::ClickableWidget("Button")
  {
    sf::Vector2f tempPosition(200.f, 200.f);
    sf::Vector2f tempSize(100.f, 50.f);

    this->setPosition(tempPosition);
    this->setSize(tempSize);
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: render
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  void Button::render(sf::RenderTarget* renderer)
  {
    renderer->draw(m_button);
    return;
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: handleEvents
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  void Button::handleEvents(sf::Event e)
  {}
 

  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: update
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  void Button::update(sf::RenderWindow* window)
  {
    if (this->isHovering(window))
      this->isClicked();

    return;
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: getType
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  std::string Button::getType()
  {
    return Widget::m_widget_type; 
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: getSize
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  sf::Vector2f Button::getSize()
  {
    return m_button.getSize();
  }
    
  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: setFunction
   * Description:  Sets the callback function to be called on LMB
   *--------------------------------------------------------------------------------------
   */
void Button::setFunction()
{}

  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: setSize
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  void Button::setSize(sf::Vector2f size)
  {
    m_button.setSize(size);
    return;
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: getPosition
   * Description: 
Position

   *--------------------------------------------------------------------------------------
   */
  sf::Vector2f Button::getPosition()
  {
    return m_button.getPosition();
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: setPosition
   * Description: 
Position

   *--------------------------------------------------------------------------------------
   */
  void Button::setPosition(sf::Vector2f& position)
  {
    m_button.setPosition(position);
    return;
  }
 

  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: ~Button
   * Description: 
Position

   *--------------------------------------------------------------------------------------
   */
  Button::~Button()
  {}
  
  //---------//
  // PRIVATE //
  //---------//


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: isHovering
   * Description: 
Position

   *--------------------------------------------------------------------------------------
   */
  bool Button::isHovering(sf::RenderWindow* window)
  {
    sf::Vector2i mouse_pos = sf::Mouse::getPosition(*window);

    return (m_button.getGlobalBounds().contains((float)mouse_pos.x,
            (float)mouse_pos.y));
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: isClicked
   * Description:  
   *--------------------------------------------------------------------------------------
   */
  void Button::isClicked()
  {
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
      this->execute();

    return;
  }


  /*
   *--------------------------------------------------------------------------------------
   *       Class:  Button
   *      Method:  Button :: execute
   * Description: 
Position

   *--------------------------------------------------------------------------------------
   */
  void Button::execute()
  {
    printf("Click!\n");
    return;
  }

}
