#include "Engine/Window/public/EWindow.hpp"
#include "..\public\EWindow.hpp"

EWindow::~EWindow() noexcept
{
	if (Window_)
	{
		delete Window_;
	}
}

void EWindow::InitWindow()
{
	Window_ = new RenderWindow(VideoMode(480, 360), "YES");
}

void EWindow::ShowWindow()
{
	Window_->clear(Color::White);
	Window_->display();
}

void EWindow::WindowLoop()
{
	while (true)
	{
		if (Window_->pollEvent(Event_))
		{
			if (Event_.type == Event::Closed)
			{
				Window_->close();
				break;
			}
		}
	}
	ShowWindow();
}
