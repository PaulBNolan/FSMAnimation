#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}
//This function is used to redirect the current to the animation class based on what enum is being used
void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");
	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		m_animation.idle();
		break;
	case Input::Action::UP:
		m_animation.climbing();
		break;
	case Input::Action::LEFT:
		m_animation.jumping();
		break;
	case Input::Action::RIGHT:
		m_animation.walking();
		break;
	case Input::Action::Down:
		m_animation.Hammering();
		break;
	case Input::Action::W:
		m_animation.Swordmanship();
		break;
	case Input::Action::S:
		m_animation.Shovelling();
		break;
	default:
		break;
	}
	m_animated_sprite.spriteChange(in);
}

void Player::update()
{
	m_animated_sprite.update();
}