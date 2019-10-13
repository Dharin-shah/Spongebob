#pragma once

#ifdef SB_PLATFORM_WINDOWS

extern Spongebob::Application* Spongebob::CreateApplication();

int main() 
{	
	Spongebob::Log::init();
	SB_CORE_WARN("Initialized engine Spongebob");
	auto app = Spongebob::CreateApplication();
	SB_CLIENT_INFO("Intialized Client {0}", app->getApplicationName());	
	app->run();
	delete app;
}
#endif
