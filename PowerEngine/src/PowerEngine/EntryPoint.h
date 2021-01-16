#pragma once

#include "Application.h"

#ifdef PWE_PLATFORM_WINDOWS

	extern PowerEngine::Application* PowerEngine::CreateApplication();
	
	int main(int argc, char** argv)
	{
		auto app = PowerEngine::CreateApplication();
		app->Run();
		delete app;
	}

#else
	#error PowerEngine only support Windows !.
#endif