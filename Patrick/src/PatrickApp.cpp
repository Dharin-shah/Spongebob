#include<SpongebobClient.h>
#include <string>

class Patrick : public Spongebob::Application {
public:
	Patrick() {}
	~Patrick() {}
};

std::string Spongebob::Application::getApplicationName()
{
	return "Patrick";
}

Spongebob::Application* Spongebob::CreateApplication() 
{
	return new Patrick();
}

