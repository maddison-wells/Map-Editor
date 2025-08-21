#pragma once
#include <SFML/Graphics.hpp>


class MouseTile
{
  private:
 
   sf::Texture tileSheet;
   sf::Sprite tile;


  public:
    MouseTile();
    ~MouseTile();

    void Initialize();
    void Load();
    void Update(float deltaTime, sf::Vector2f mousePosition);
    void Draw(sf::RenderWindow& window);

};