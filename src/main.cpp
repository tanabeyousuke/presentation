#include "include.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode(1360, 690), "SFML works!");
  presen slides(&window);
  
  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
        {
	  if (event.type == sf::Event::Closed)
	    window.close();
        }
      
      slides.process();
      window.display();
    }

  return 0;
}
