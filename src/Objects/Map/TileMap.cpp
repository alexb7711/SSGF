/*
 * =====================================================================================
 *
 *       Filename:  TileMap.cpp
 *
 *    Description:  Front end for tile maps.
 *
 *        Version:  1.0
 *        Created:  05/13/2020 08:59:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

#include "TileMap.hpp"

//========//
// PUBLIC //
//========//

TileMap* TileMap::Instance()
{
  static TileMap tile_map;
  return &tile_map;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: update
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void TileMap::update(const int& elapsed_time)
{}
    
/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: setMap
 * Description: TileMapIO
 *
 *--------------------------------------------------------------------------------------
 */
void TileMap::loadMap(std::string map_name)
{
 std::ifstream file_in(map_name);
 std::string line;

 if (file_in.is_open())
 {
   for (uint y = 0; std::getline(file_in, line); ++y)
   {
     std::vector<Tile> temp_vec;
     m_map.push_back(temp_vec);

     for (uint x = 0; x < line.size(); ++x)
     {
         Tile temp_tile; 
         m_map[y].push_back(temp_tile);

         m_map[y][x].info.type           = line[x];
         m_map[y][x].info.texture_coords = sf::Vector2i(x,y);
         m_map[y][x].screen_coords.x     = x * m_tile_width + x;
         m_map[y][x].screen_coords.y     = y * m_tile_width + y;

         std::cout << m_map[x][y].info.type << std::endl;
     }
   }
 }
 else
   printf("ERROR: COULD NOT LOAD FILE!\n");

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: setTexture
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void TileMap::setTexture(sf::Texture& texture)
{
  m_texture = texture;
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: setTilesDictPair
 * Description: 
 *--------------------------------------------------------------------------------------
 */
void TileMap::setTileDictPair(char key, sf::Vector2i coord)
{
  std::map<char, sf::Vector2i>::iterator it;
  it = m_tile_dictionary.find(key);
  
  if (it != m_tile_dictionary.end())
    m_tile_dictionary[key] = coord; 

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: setTileWidth
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void TileMap::setTileWidth(uint width)
{
  m_tile_width = width;
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: render
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void TileMap::render(sf::RenderTarget* renderer)
{
  for (uint i = 0; i < m_map.size(); ++i)
  {
  }

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: ~TileMap
 * Description:  
 *--------------------------------------------------------------------------------------
 */
TileMap::~TileMap()
{}

//=========//
// PRIVATE //
//=========//

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: TileMap
 * Description:  
 *--------------------------------------------------------------------------------------
 */
TileMap::TileMap()
{}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMapIO
 *      Method:  TileMapIO :: updateMap
 * Description:
 *--------------------------------------------------------------------------------------
 */
void TileMap::updateMap(std::vector<std::string> map_update)
{}
