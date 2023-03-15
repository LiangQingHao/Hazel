#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char* argv[]) {
	Hazel::Log::Init();
	HZ_CORE_WARN("init log");
	HZ_INFO("app log");
	int a = 6;
	HZ_WARN("hello a={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif