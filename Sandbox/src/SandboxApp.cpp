#include <ECEngine.h>

#include "ECEngine.h"

class Sandbox : public ECEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

ECEngine::Application* ECEngine::CreateApplication()
{
	return new Sandbox();
}