-- premake5.lua

workspace "Spongebob"
	architecture "x64"

	configurations
	{
		"Debug", --debug , all code
		"Release", -- Release with log but stripped off some code
		"Dist" -- no log 
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
project "Spongebob"
	location "Spongebob"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/Spongebob/**.h",
		"%{prj.name}/Spongebob/**.cpp",
		"%{prj.name}/client/**.h"
	}

	includedirs
	{	
		"%{prj.name}/Spongebob/**.h",
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"SB_PLATFORM_WINDOWS",
			"SB_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Patrick")
		}


	filter "configurations:Debug"
		defines "SB_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "SB_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "SB_DIST"
		optimize "On"


project "Patrick"
	location "Patrick"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Spongebob/vendor/spdlog/include",
		"Spongebob/client"
	}

	links
	{
		"Spongebob"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"SB_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "SB_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "SB_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "SB_DIST"
		optimize "On"