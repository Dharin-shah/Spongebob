#include "Application.h"
#include <iostream>

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

}