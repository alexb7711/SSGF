/*
 * =====================================================================================
 *
 *       Filename:  AnimatedObject.hpp
 *
 *    Description: Virtual class to define properties of animated objects
 *
 *        Version:  1.0
 *        Created:  05/01/2020 02:25:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _ANIMATED_OBJECT_H_
#define _ANIMATED_OBJECT_H_ 

// C/C++ Standard Library
#include <iostream>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "Object.hpp"

class AnimatedObject : public Object
{
  public:

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  AnimatedObject
     *      Method:  AnimatedObject :: addFrame
     * Description:  Add a single frame to the animation.
     *--------------------------------------------------------------------------------------
     */
    virtual void addFrame(sf::IntRect frame) 
    {
      m_frame.push_back(frame);
      return;
    }

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  AnimatedObject
     *      Method:  AnimatedObject :: setFrameVector
     * Description:  Set a sequence of frames for an animation.
     *--------------------------------------------------------------------------------------
     */
    virtual void setFrameVector(std::vector<sf::IntRect> frames)
    {
      m_frame = frames;
      return;
    }

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  AnimatedObject
     *      Method:  AnimatedObject :: setAnimationDelay
     * Description:  Set the time it takes between each frame. 
     *--------------------------------------------------------------------------------------
     */
    virtual void setAnimationDelay(float delay)
    {
      m_delay = delay;
      return;
    }
    
    /*
     *--------------------------------------------------------------------------------------
     *       Class:  AnimatedObject
     *      Method:  AnimatedObject :: update
     * Description:  
     *--------------------------------------------------------------------------------------
     */
    void updateAnimation(const int& elapsed_time)
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

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  AnimatedObject
     *      Method:  AnimatedObject :: render
     * Description:  
     *--------------------------------------------------------------------------------------
     */
    void render(sf::RenderTarget* renderer)
    {
      renderer->draw(m_sprite);
      return;
    }

  protected:
    std::size_t              m_current_frame = 0;
    int                      m_delay         = 0;
    int                      m_elapsed_time  = 0;
    std::vector<sf::IntRect> m_frame;
};

#endif
