#pragma once
#include "Core.h"
#include <string.h>
#include <String>

namespace Spongebob {
	class SPONGEBOB_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
		virtual std::string getApplicationName();
	};

	//To be Defined in Client
	Application* CreateApplication();
};

