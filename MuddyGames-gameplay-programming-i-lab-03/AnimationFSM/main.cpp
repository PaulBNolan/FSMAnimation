#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	sf::Text instructions[7];

	sf::Font font;
	if (!font.loadFromFile("assets\\arial_narrow_7\\arial_narrow_7.ttf"))
	{
		std::cout << "Error" << std::endl;
	}

	for (int index = 0; index < 7; index++)
	{
		instructions[index].setCharacterSize(20);
		instructions[index].setFont(font);
	}
	instructions[0].setString("Instructions");
	instructions[1].setString("Up: Climb");
	instructions[2].setString("Left:Jump");
	instructions[3].setString("Right: Walk");
	instructions[4].setString("Down:Shovel");
	instructions[5].setString("S: Hammer");
	instructions[6].setString("W: Sword");




	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	animated_sprite.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 3, 84, 84));

	animated_sprite.addFrame(sf::IntRect(3, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 88, 84, 84));

	animated_sprite.addFrame(sf::IntRect(3, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 173, 84, 84));

	animated_sprite.addFrame(sf::IntRect(3, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 258, 84, 84));

	animated_sprite.addFrame(sf::IntRect(3, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 343, 84, 84));

	animated_sprite.addFrame(sf::IntRect(3, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 428, 84, 84));

	// Setup the Player
	Player player(animated_sprite);
	Input input;

	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					input.setCurrent(Input::Action::Down);
				}
				break;
			case sf::Event::TextEntered:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
				{
					input.setCurrent(Input::Action::W);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					input.setCurrent(Input::Action::S);
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				break;
			}
		}
		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		for (int index = 0; index < 7; index++)
		{
			instructions[index].setPosition(10, 75 + (index * 20 + 1));
			window.draw(instructions[index]);
		}
		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};