#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class EWindow
{
public:
	virtual ~EWindow() noexcept;
public:
	virtual void InitWindow();
	virtual void WindowLoop();
private:
	virtual void ShowWindow();
private:
	RenderWindow* Window_;
	Event Event_;
};