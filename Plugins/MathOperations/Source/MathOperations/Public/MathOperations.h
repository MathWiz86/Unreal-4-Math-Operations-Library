// All content © 2021 Craig Joseph Williams. All Rights Reserved.
// Project: Math Operations Library
// Author: Craig Williams

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FMathOperationsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
