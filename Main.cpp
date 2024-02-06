/*
 -Simple Game meant to mimic Geometry Dash, not replicate it
 -All it will do is jump over obsticals 
 -@author: Alan Ruiz 
 -Date Started: 2/5/2024
 -Date Completed: 
*/

//This project is meant to teach me how to use libraries(specifically SFML for now), game dev fundamentals and c++ 


#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>


/*
	- 3 sections, Window, Game Loop, End App
		-Window: just creates the window and size and anything relating to it
		-Game Loop: when window is up and running, consists of Event polling, Update Game, Render Game
			-Event polling: is stuff like what did you press, what keys were recorded being pressed and released, mouse clicks etc
			-Update: im not sure yet, but seems like it is supposed to just update stuff like character coordinates, data relating to game etc
			-Rendering: Pretty much where the drawing of the game happens and the display of it
*/

int main()
{
	//Always use these two from the jump, a window and event, basically just creating a window for it
	
	
	sf::RenderWindow window(sf::VideoMode(640, 480), "GeometryRun", sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;

	
	
	//Every game also has a Game Loop, it is constantly in a Game Loop. Consists pretty much of Event Polling, updated the game, and rendering the game
	
	
	while (window.isOpen())
	{
		
		
		//Event Polling
		
		
		while (window.pollEvent(ev))
		{
			//this switch is just to close the window using both the X button on window and ESC on keyboard
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
				{
					window.close();
					break;
				}
			}
		}

		
		//now we update the game
	




		//Now that the Game is Updated, we render and display it

		window.clear(); //this clears the old frame for the new updated frame

		//this is where we now draw the game for the new frame to be displayed



		window.display(); //this pretty much means that the frame is done and we can now display it
	}


		//Every game also has an End, so we end the game here



}