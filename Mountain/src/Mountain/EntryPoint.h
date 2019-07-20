#pragma once

#ifdef MT_PLATFORM_WINDOWS

extern Mountain::Application* Mountain::CreateApplication();

void main(int argc, char** argv) 
{

	auto app = Mountain::CreateApplication();
	app->Run();
	delete app;
}

#endif