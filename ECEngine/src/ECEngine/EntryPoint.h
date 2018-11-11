#pragma once

#ifdef EC_PLATFORM_WINDOWS

extern ECEngine::Application* ECEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ECEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif