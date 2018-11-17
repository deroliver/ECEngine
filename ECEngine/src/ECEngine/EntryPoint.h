#pragma once

#ifdef EC_PLATFORM_WINDOWS

extern ECEngine::Application* ECEngine::CreateApplication();

int main(int argc, char** argv)
{
	ECEngine::Log::Init();
	EC_CORE_WARN("Initialized Log!");
	int a = 5;
	EC_INFO("Hello! Var={0}", 0);

	auto app = ECEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif