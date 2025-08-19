#include <SFML/Graphics.hpp>
#include <optional>
#include <iostream>
#include "classes/Grid.h"

int main ()
{
  //----Initialize
  
  sf::RenderWindow window(sf::VideoMode({1920, 1080}), "Map Editor");
  window.setFramerateLimit(240);
  //----Initialize

  Grid grid;
  grid.Initialize();

  
  //----Load
  grid.Load();

  //----Load

  sf::Clock clock;

  while (window.isOpen())
  {
    sf::Time deltaTimeTimer = clock.restart();
    float deltaTime = deltaTimeTimer.asMilliseconds();


  //----Update

  while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) { 
                window.close();
            }  
        }  
  
  grid.Update(deltaTime);

  //----Update
  //----Draw

    window.clear(sf::Color::Black);
    grid.Draw(window);
    window.display();
 }
 return 0;

}