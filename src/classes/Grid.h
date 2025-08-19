#pragma once
#include <SFML/Graphics.hpp>

class Grid {

private:


public:

sf::RectangleShape hLine[10 +1];
sf::RectangleShape vLine[10+ 1];

  Grid();
  ~Grid();

  void Initialize();
  void Load();
  void Update(float deltaTime);
  void Draw(sf::RenderWindow& window);

};