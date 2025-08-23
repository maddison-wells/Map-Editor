#include <SFML/Graphics.hpp>
#include <optional>
#include <iostream>
#include "classes/Grid.h"
#include "classes/MouseTile.h"
#include "classes/Map.h"

int main ()
{
  //----Initialize
  
  sf::RenderWindow window(sf::VideoMode({1920, 1080}), "Map Editor");
  window.setFramerateLimit(240);
  //----Initialize
  MouseTile mouseTile;
  mouseTile.Initialize();

  // Map map;
  // map.Initialize();

  Grid grid;
  grid.Initialize();

  //----Load
  mouseTile.Load();
  // map.Load();
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
  sf::Vector2f mousePosition = sf::Vector2f(sf::Mouse::getPosition(window));

  grid.Update(deltaTime);
  // map.Update(deltaTime);
  mouseTile.Update(deltaTime, mousePosition);

  //----Update
  //----Draw

    window.clear(sf::Color::Black);
    grid.Draw(window);
    // map.Draw(window);
    mouseTile.Draw(window);
    window.display();
 }
 return 0;

}