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
 *      Method:  TileMap :: loadDictionary
 * Description: 
 *--------------------------------------------------------------------------------------
 */
void TileMap::loadDictionary(std::string map_name)
{
  readFromFileCallback(&TileMap::extractDictData, m_dict_text_file, map_name); 
  return;
}
    
/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: setMap
 * Description: 
 *--------------------------------------------------------------------------------------
 */
void TileMap::loadMap(std::string map_name)
{
  readFromFileCallback(&TileMap::extractMapData, m_map_text_file, map_name);
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
TileMap::TileMap():
  m_dict_text_file("Dictionary.txt"),
  m_map_text_file("maps.txt")
{}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: ignoreLine
 * Description:  Ignore line when "//" is found at beginning of line
 *--------------------------------------------------------------------------------------
 */
 bool TileMap::ignoreLine(std::string& string)
{
  return true ? string[0] == '/' && string[1] == '/' : false;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: extractDictData
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void TileMap::extractDictData(std::ifstream& file_in, std::string& line)
{
  for (uint y = 0; std::getline(file_in, line); ++y)
  {
    if (line[0] == '[') 
      break;
     
    // This variable is used to place the next valid input into the map.
    int x = 0;
    tileDefinition temp_def;
    std::stringstream temp_ss(line);

    // Use temporary index i to search through data
    for (uint i = 0; temp_ss.good(); ++i)
    {
      std::string word;
      std::getline(temp_ss, word, ' ');

      switch (x)
      {
        case 0:
          temp_def.identifyer = *word.c_str();
          ++x;
          break;
        case 1:
          temp_def.coord.x = std::atoi(word.c_str());
          ++x;
          continue;
        case 2:
          temp_def.coord.y = std::atoi(word.c_str());
          ++x;
          continue;
        case 3:
          temp_def.w = (uint) std::atoi(word.c_str());
          ++x;
          continue;
        default:
          break;
      };
    }

  }

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: extractMapData
 * Description:  
 *--------------------------------------------------------------------------------------
 */
void TileMap::extractMapData(std::ifstream& file_in, std::string& line)
{
  for (uint y = 0; std::getline(file_in, line); ++y)
  {
    std::vector<Tile> temp_vec;
    m_map.push_back(temp_vec);
    
    if (line[0] == '[') 
      break;
     
    // This variable is used to place the next valid input into the map.
    int x = 0;

    // Use temporary index i to search through data
    for (uint i = 0; i < line.size(); ++i)
    {
      switch (line[i])
      {
        // Ignore spaces and new line characters.
        case ' ':
        case '\n':
          continue;
        default:
          Tile temp_tile; 
          m_map[y].push_back(temp_tile);
          
          // Line[i] is used to place correct value in position x
          m_map[y][x].info.type           = line[i];
          m_map[y][x].info.texture_coords = sf::Vector2i(x,y);
          m_map[y][x].screen_coords.x     = x * m_tile_width + x;
          m_map[y][x].screen_coords.y     = y * m_tile_width + y;
         
          // Increment x by one because a valid input was found
          ++x;
          break;
      }
    }
  }

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMap
 *      Method:  TileMap :: readFromFileCallback
 * Description:  Callback method used to read from config files. 
 *--------------------------------------------------------------------------------------
 */
void TileMap::readFromFileCallback(void (TileMap::*method)(std::ifstream&, std::string&),
                                   std::string& file,
                                   std::string& map_name)
{
  std::ifstream file_in(file);
  std::string line;

  if (file_in.is_open())
  {
    while (std::getline(file_in, line))
    {
      if (ignoreLine(line))
        continue;
      else if (line == "[" + map_name + "]")
        (this->*method)(file_in, map_name);
    }

    file_in.close();
  }
   else
     printf("ERROR: COULD NOT LOAD FILE!\n");

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  TileMapIO
 *      Method:  TileMapIO :: updateMap
 * Description:
 *--------------------------------------------------------------------------------------
 */
void TileMap::updateMap(std::vector<std::string> map_update)
{}
