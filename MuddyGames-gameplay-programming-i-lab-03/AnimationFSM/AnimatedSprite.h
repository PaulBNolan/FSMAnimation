#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>
#include <vector>
#include <Debug.h>
#include <Input.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>
/// 
using namespace std;
using namespace sf;

class AnimatedSprite : public Sprite {
public:
	AnimatedSprite();
	AnimatedSprite(const Texture&);
	AnimatedSprite(const Texture&, const IntRect&);
	~AnimatedSprite();

	const Clock& getClock();
	const Time& getTime();
	const vector<IntRect>& getFrames();
	const IntRect& getFrame(int);
	void addFrame(IntRect&);
	const int getCurrentFrame();
	void update();
	//This used to modify the animation and end frames
	void spriteChange(Input a);
private:
	Clock m_clock;
	Time m_time;
	vector<IntRect> m_frames;
	//This is used to select the desired frame
	int m_current_frame;
	//This is used to gt the desired animation
	int animation;
	//This value is used to end the animation
	int endFrame;
};

#endif // !ANIMATED_SPRITE_H
