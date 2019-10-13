#include "Application.h"
#include <iostream>

namespace Spongebob {
	
	Application::Application() 
	{
	
	}

	Application::~Application() 
	{
	}

	void Application::run() 
	{
		std::cout << "Hello";
	}

	std::string Spongebob::Application::getApplicationName()
	{
		return "Base Spongebob Application";
	}

}