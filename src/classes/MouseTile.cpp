#include "MouseTile.h"
#include <iostream>

MouseTile::MouseTile() :

tile(tileSheet)

{
}

MouseTile::~MouseTile()

{

}

void MouseTile::Initialize()

{

}
void MouseTile::Load()

{
 if (!tileSheet.loadFromFile("img/apartment16x17.png")) {
    std::cout << "Failed to load texture!" << std::endl;
}
 tile.setTexture(tileSheet);



sf::IntRect rect(
            sf::Vector2i(128, 128), //which position
            sf::Vector2i(32, 32) //size
        );

    tile.setTextureRect(rect);

}



void MouseTile::Update(float deltaTime,sf::Vector2f mousePosition)

{
  int x = (mousePosition.x) / 32;
  int xx = x * 32;

  int y = (mousePosition.y) / 32;
  int yy = y * 32;

  sf::Vector2i position(xx, yy);

  tile.setPosition(static_cast<sf::Vector2f>(position));

  if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
  {
    int index = x + y * 10; 
    std::cout << x << " " << y << std::endl;
    std::cout << index << std::endl;
    OnGridClick(index);
  }
}

void MouseTile::Draw(sf::RenderWindow& window)

{
  window.draw(tile);
}