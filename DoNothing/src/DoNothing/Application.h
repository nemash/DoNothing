#pragma once
#include "Core.h"

namespace DoNothing
{
	class DONOTHING_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in a CLIENT
	Application* CreateApplication();
}

