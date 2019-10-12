#pragma once
#include "Core.h";

namespace Spongebob {
	class SPONGEBOB_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
	};

	//To be Defined in Client
	Application* CreateApplication();
};

