#ifndef ANIMATION_H
#define ANIMATION_H

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Animation
{

	// Please review very good article on Stackoverflow
	// which covers some solutions to circular dependacies
	// https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes

private:
	class State* m_current; // note order of m_current is 
							// prior to setCurrent
	class State* m_previous;
public:
	Animation();
	~Animation();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();
	
	//These functions are used to redirect the state pointer to the state functions
	void idle();
	void jumping();
	void climbing();
	void walking();

	void Hammering();
	void Swordmanship();
	void Shovelling();
// Try uncommenting and comment the declaration above
//private:
//	class State* m_current;
};

#endif // !ANIMATION_H
