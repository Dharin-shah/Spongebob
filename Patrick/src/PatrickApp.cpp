#include <SpongebobClient.h>

class Patrick : public Spongebob::Application {
public:
	Patrick() {}
	~Patrick() {}

	const std::string Spongebob::Application::getApplicationName()
	{
		return "Patrick";
	}

};

void Spongebob::Application::run()
{
	SB_CLIENT_INFO("Application Running -- {0}", getApplicationName());
}

Spongebob::Application* Spongebob::CreateApplication() 
{
	return new Patrick();
}

