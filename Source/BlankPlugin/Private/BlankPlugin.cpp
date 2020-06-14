#include "BlankPlugin.h"

#define LOCTEXT_NAMESPACE "FBlankPluginModule"

void FBlankPluginModule::StartupModule()
{
}

void FBlankPluginModule::ShutdownModule()
{	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlankPluginModule, BlankPlugin)