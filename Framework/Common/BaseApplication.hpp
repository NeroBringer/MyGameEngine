#pragma once
#include "IApplication.hpp"
#include "GfxConfiguration.hpp"

namespace My
{
	class BaseApplication : implements IApplication
	{
	public:
		BaseApplication(GfxConfiguration& cfg);
		virtual int Initialize();
		virtual void Finalize();
		virtual void Tick();

		virtual bool IsQuit();

	protected:
		// Flag if Need quit the main loop of the application
		static bool m_bQuit;
		GfxConfiguration m_Config;

	private:
		// hide the default construct to enforce a configuration
		BaseApplication() {};
		
	};
}