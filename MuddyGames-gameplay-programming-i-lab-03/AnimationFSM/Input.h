#ifndef INPUT_H
#define INPUT_H

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Input
{
public:
	Input();
	~Input();
	//A enum used to represent each action the user can do
	enum Action
	{
		IDLE,
		UP,
		LEFT,
		RIGHT,
		Down,
		W,
		S
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif