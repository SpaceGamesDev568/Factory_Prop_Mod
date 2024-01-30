// Copyright 2023 - 2024 Jesse Hodgson

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FFactory_Prop_ModModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
