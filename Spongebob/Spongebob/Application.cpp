#include "Application.h"
#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Spongebob {
	
	Application::Application() 
	{
	
	}

	Application::~Application() 
	{
	}

	const std::string Spongebob::Application::getApplicationName() 
	{
		return "Base Spongebob Application";
	}

	void Application::run()
	{
		SB_CORE_INFO("Application Running -- {0}", getApplicationName());
		AppUpdateEvent e;
		SB_CORE_TRACE(e);
		while (true);
	}
}