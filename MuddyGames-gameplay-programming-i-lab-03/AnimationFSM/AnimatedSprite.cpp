#include <AnimatedSprite.h>
#include <iostream>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>
/// 
AnimatedSprite::AnimatedSprite()
{
	m_current_frame = 0;
}

AnimatedSprite::AnimatedSprite(const sf::Texture& t) : Sprite(t), m_current_frame(0), m_time(seconds(0.5f)) {}

AnimatedSprite::AnimatedSprite(const sf::Texture& t, const sf::IntRect& rect) : Sprite(t), m_current_frame(0), m_time(seconds(0.5f)) {
	m_frames.push_back(rect);
}

AnimatedSprite::~AnimatedSprite() {}

const sf::Clock& AnimatedSprite::getClock() {
	return m_clock;
}

const sf::Time& AnimatedSprite::getTime() {
	return m_time;
}

const vector<IntRect>& AnimatedSprite::getFrames() {
	return m_frames;
}

const IntRect& AnimatedSprite::getFrame(int n) {
	return m_frames[n];
}

void AnimatedSprite::addFrame(IntRect& frame) {
	m_frames.push_back(frame);
}
//This returns the frame being used
const int AnimatedSprite::getCurrentFrame() {
	return m_current_frame + animation;
}
//This function updates the frame being used being used
void AnimatedSprite::update() {

	if (m_clock.getElapsedTime() > m_time)
	{
		//This situation switches the previous frame for the next one
		if (m_current_frame + animation < endFrame)
		{
			m_current_frame++;
		}
		//This makes the first default frame the used frame
		else
		{
			m_current_frame = 0;

		}
		m_clock.restart();
	}
}
//This function is used to change the set of frames used by determining the start and end point based on the currents enum
void AnimatedSprite::spriteChange(Input a)
{
	switch (a.getCurrent())
	{
	case Input::Action::LEFT:
	{
		animation = 6;
		endFrame = 11;
		break;
	}
	case Input::Action::RIGHT:
	{
		animation = 0;
		endFrame = 5;
		break;
	}
	case Input::Action::UP:
	{
		animation = 12;
		endFrame = 17;
		break;
	}
	case Input::Action::Down:
	{
		animation = 24;
		endFrame = 29;
		break;
	}

	case Input::Action::W:
	{
		animation = 30;
		endFrame = 35;
		break;
	}
	case Input::Action::S:
	{
		animation = 18;
		endFrame = 23;
		break;
	}
	case Input::Action::IDLE:
	{
		animation = 0;
		endFrame = 0;
		break;
	}
	}
}