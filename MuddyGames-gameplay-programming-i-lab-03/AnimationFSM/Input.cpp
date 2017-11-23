#include <Input.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>


Input::Input() 
{
	m_current = IDLE;
}
Input::~Input() {}

void Input::setCurrent(Action a) {
	m_current = a;
}

Input::Action Input::getCurrent() {
	return m_current;
}
