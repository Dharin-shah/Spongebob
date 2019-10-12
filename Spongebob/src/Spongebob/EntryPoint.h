#pragma once
#include "Application.h"
#ifdef SB_PLATFORM_WINDOWS

extern Spongebob::Application* Spongebob::CreateApplication();

int main() 
{	
	auto app = Spongebob::CreateApplication();
	app->run();
	delete app;
}
#endif
