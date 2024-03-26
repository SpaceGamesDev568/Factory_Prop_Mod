// Fill out your copyright notice in the Description page of Project Settings.


#include "FPMMenuModule.h"

#include "Factory_Prop_Mod.h"
#include "ModLoading/ModLoadingLibrary.h"

// Sets default values
UFPMMenuModule::UFPMMenuModule()
{
}

void UFPMMenuModule::Init()
{
	// Get an instance of the ModLoadingLibrary to use for retrieving mod info
	const UGameInstance* GameInstance = GetWorld()->GetGameInstance();
	UModLoadingLibrary *ModLoadingLibrary = GameInstance->GetSubsystem<UModLoadingLibrary>();

	// Log metadata from ModUpdateNotifier for debug purposes
	UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("Loaded Factory_Prop_Mod Menu Module."));

	FModInfo ModMetaInfo;
	ModLoadingLibrary->GetLoadedModInfo("Factory_Prop_Mod", ModMetaInfo);
	UE_LOG(LogFactory_Prop_Mod, Verbose, TEXT("%s"), *ModMetaInfo.FriendlyName.Append(", " + ModMetaInfo.Version.ToString()));
	UE_LOG(LogFactory_Prop_Mod, Display, TEXT("Build Date: %s %s"), ANSI_TO_TCHAR(__DATE__), ANSI_TO_TCHAR(__TIME__));
}