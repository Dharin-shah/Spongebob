#pragma once
#include "Core.h"
#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Spongebob {

	class SPONGEBOB_API Log
	{
	public:
		static void init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		};
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		};
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
};


//Core Log macros
#define SB_CORE_TRACE(...)   ::Spongebob::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SB_CORE_INFO(...)    ::Spongebob::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SB_CORE_WARN(...)    ::Spongebob::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SB_CORE_ERROR(...)   ::Spongebob::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SB_CORE_FATAL(...)   ::Spongebob::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log macros
#define SB_CLIENT_TRACE(...) ::Spongebob::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SB_CLIENT_INFO(...)  ::Spongebob::Log::GetClientLogger()->info(__VA_ARGS__)
#define SB_CLIENT_WARN(...)  ::Spongebob::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SB_CLIENT_ERROR(...) ::Spongebob::Log::GetClientLogger()->error(__VA_ARGS__)
#define SB_CLIENT_FATAL(...) ::Spongebob::Log::GetClientLogger()->fatal(__VA_ARGS__)
