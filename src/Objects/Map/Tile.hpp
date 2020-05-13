/*
 * =====================================================================================
 *
 *       Filename:  Tile.hpp
 *
 *    Description:  Structure that contains the information of the tile.
 *
 *        Version:  1.0
 *        Created:  05/13/2020 09:21:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _TILE_H_
#define _TILE_H_

// C/C++ Standard Library

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

struct TileInfo
{
  char type = '0';
  sf::Vector2i texture_coords;
};

struct Tile
{
  TileInfo info;
  sf::Vector2i screen_coords;
};

#endif
