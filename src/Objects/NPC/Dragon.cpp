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

  setAnimationDelay(250);

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: update
 * Description: Dragon
 *
 *--------------------------------------------------------------------------------------
 */
void Dragon::update(const int& elapsed_time)
{
 updateAnimation(elapsed_time);
 return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Dragon
 *      Method:  Dragon :: updatePosition
 * Description: Dragon
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
 *
 *--------------------------------------------------------------------------------------
 */
Dragon::~Dragon()
{}
