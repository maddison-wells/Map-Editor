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
            sf::Vector2i(64, 128), //which position
            sf::Vector2i(32, 32) //size
        );

    tile.setTextureRect(rect);

}



void MouseTile::Update(float deltaTime,sf::Vector2f mousePosition)

{
  tile.setPosition(mousePosition);
}
void MouseTile::Draw(sf::RenderWindow& window)

{
  window.draw(tile);
}