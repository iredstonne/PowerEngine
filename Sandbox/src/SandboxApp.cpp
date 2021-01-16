#include <PowerEngine.h>

class Sandbox : public PowerEngine::Application {

	public:
		Sandbox()
		{

		}

		~Sandbox() 
		{

		}

};

PowerEngine::Application* PowerEngine::CreateApplication()
{
	return new Sandbox();
}