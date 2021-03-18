// All content © 2021 Craig Joseph Williams. All Rights Reserved.
// Project: Math Operations Library
// Author: Craig Williams

#include "MathOperations.h"

#define LOCTEXT_NAMESPACE "FMathOperationsModule"

void FMathOperationsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMathOperationsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMathOperationsModule, MathOperations)