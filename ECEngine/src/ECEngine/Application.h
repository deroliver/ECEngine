#pragma once

#include "Core.h"

namespace ECEngine {

	class ECENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in CLIENT
	Application* CreateApplication();

}