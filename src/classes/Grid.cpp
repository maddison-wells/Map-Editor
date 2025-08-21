#include "Grid.h"

Grid::Grid() 
{
  

}

Grid::~Grid()
{}

void Grid::Initialize(){
  
  // vLine.setSize(sf::Vector2f(2, 10));
  // vLine.setPosition(sf::Vector2f({100,100}));
  
  for(size_t i = 0; i < 10 + 1; i++){
    hLine[i].setSize(sf::Vector2f(320+ 2, 2));
    hLine[i].setPosition(sf::Vector2f({0.f,0.f}) + sf::Vector2f({0.f, i * 32.f}));
  }

  for(size_t i = 0; i < 10 + 1; i++){
    vLine[i].setSize(sf::Vector2f(2, 320));
    vLine[i].setPosition(sf::Vector2f({0.f,0.f}) + sf::Vector2f({i * 32.f, 0.f}));
  }


}

void Grid::Load(){

}
void Grid::Update(float deltaTime){

}
void Grid::Draw(sf::RenderWindow& window){
  
  for (size_t i = 0; i < 10+ 1; i++){
    window.draw(hLine[i]);
  }
  
   for (size_t i = 0; i < 10 + 1; i++){
    window.draw(vLine[i]);
  }
  
}