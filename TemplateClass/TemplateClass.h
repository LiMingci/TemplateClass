#pragma once

#include <iostream>

template <typename T>
class LinkFrame;

template <typename T>
class State 
{
public:
	State()
	{ 
		myFrame = new LinkFrame<T>();
	}
	~State()
	{
		if (myFrame != nullptr)
		{
			delete myFrame;
			myFrame = nullptr;
		}
	}

	void PrintState(const T& value)
	{
		myFrame->PrintContext(value);
	}

protected:
	LinkFrame<T> *myFrame;

};

template <typename T>
class LinkFrame
{
public:
	LinkFrame() {}
	~LinkFrame() {}

	void PrintContext(const T& value)
	{
		std::cout << value << std::endl;
	}
};
