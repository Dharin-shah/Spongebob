#pragma once
#include "Core.h"
#include "../sbpch.h"

namespace Spongebob {
	class SPONGEBOB_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
		const virtual std::string getApplicationName() = 0;
	};

	//To be Defined in Client
	Application* CreateApplication();
};

