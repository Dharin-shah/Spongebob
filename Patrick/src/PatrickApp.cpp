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

Spongebob::Application* Spongebob::CreateApplication() 
{
	return new Patrick();
}