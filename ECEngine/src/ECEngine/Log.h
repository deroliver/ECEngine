#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace ECEngine {

	class ECENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core log macros
#define EC_CORE_TRACE(...) ::ECEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EC_CORE_INFO(...)  ::ECEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EC_CORE_WARN(...)  ::ECEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EC_CORE_ERROR(...) ::ECEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EC_CORE_FATAL(...) ::ECEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define EC_TRACE(...)      ::ECEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EC_INFO(...)       ::ECEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define EC_WARN(...)       ::ECEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EC_ERROR(...)      ::ECEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define EC_FATAL(...)      ::ECEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)