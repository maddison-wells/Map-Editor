#pragma once
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "MouseTile.h"

#define MAP_SIZE 50

class Map
{

private:

    MouseTile m_mouseTile;
    sf::Sprite* mapSprites;

public:

  Map(const MouseTile& mouseTile);
  ~Map();

    void Initialize();
    void Load();
    void Update(float deltaTime);
    void Draw(sf::RenderWindow& window);
};