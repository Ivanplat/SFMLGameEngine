#include "Engine/Window/public/EWindow.hpp"


int main()
{
	EWindow wnd;

	wnd.InitWindow();
	wnd.WindowLoop();

	return 0;
}