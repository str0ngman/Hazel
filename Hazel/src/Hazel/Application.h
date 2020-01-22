#pragma once
#include "Core.h"


namespace Hazel
{
	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	
	};

	//to be defined in client
	Application* CreateApplication();


}

