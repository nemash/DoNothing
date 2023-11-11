#pragma once

#ifdef DO_PLATFORM_WINDOWS

extern DoNothing::Application* DoNothing::CreateApplication();

int main(int argc, char** argv)
{
	auto app = DoNothing::CreateApplication();
	app->Run();
	delete app;
}
#endif
