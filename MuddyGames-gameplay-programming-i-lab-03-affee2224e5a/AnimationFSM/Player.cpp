#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

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

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");
	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		m_animation.idle();
		m_animated_sprite.spriteIdle();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_animation.climbing();
		m_animated_sprite.spriteClimbing();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_animation.jumping();
		m_animated_sprite.spriteJumping();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_animation.walking();
		m_animated_sprite.spriteWalk();
		break;
	case Input::Action::Down:
		//std::cout << "Player Up" << std::endl;
		m_animation.Hammering();
		m_animated_sprite.spriteHammer();
		break;
	case Input::Action::W:
		m_animation.Swordmanship();
		m_animated_sprite.spriteSword();
		break;
	case Input::Action::S:
		//std::cout << "Player Idling" << std::endl;
		m_animation.Shovelling();
		m_animated_sprite.spriteShovel();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}