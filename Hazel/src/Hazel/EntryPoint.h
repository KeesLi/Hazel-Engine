#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

	printf("EntryPoint!\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif