#include "Map.h"

Map::Map(const MouseTile& mouseTile) :
  m_mouseTile(mouseTile), mapSprites(nullptr)
{}

Map::~Map()
{
}

void Map::Initialize()
{
  mapSprites = new sf::Sprite[MAP_SIZE];
  m_mouseTile.OnGridClick = &Map::OnGridClick;
};

void Map::Load()
{

};

void Map::Update(float deltaTime)
{

};

void Map::Draw(sf::RenderWindow& window)
{
  for(size_t i = 0; i < MAP_SIZE; i++)
  {
    window.draw(mapSprites[i]);
  }
};

void Map::OnGridClick(int i)
{

};
