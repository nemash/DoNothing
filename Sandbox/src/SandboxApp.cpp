#include <DoNothing.h>

class Sandbox : public DoNothing::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

DoNothing::Application* DoNothing::CreateApplication()
{
	return new Sandbox();
}