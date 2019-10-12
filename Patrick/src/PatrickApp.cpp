#include<SpongebobClient.h>

class Patrick : public Spongebob::Application {
public:
	Patrick() {}
	~Patrick() {}
};

Spongebob::Application* Spongebob::CreateApplication() 
{
	return new Patrick();
}