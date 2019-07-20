#include <Mountain.h>

class Sandbox : public Mountain::Application 
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Mountain::Application* Mountain::CreateApplication()
{
	return new Sandbox();
}