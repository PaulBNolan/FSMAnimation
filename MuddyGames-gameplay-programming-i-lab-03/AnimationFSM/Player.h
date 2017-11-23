#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <Animation.h>
#include <AnimatedSprite.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

//This class is used to represent the player
class Player
{
private:
	Animation m_animation;
	AnimatedSprite m_animated_sprite;
	Player();

public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H
