// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EImGuiDPIScaleMethod.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMGUI_EImGuiDPIScaleMethod_generated_h
#error "EImGuiDPIScaleMethod.generated.h already included, missing '#pragma once' in EImGuiDPIScaleMethod.h"
#endif
#define IMGUI_EImGuiDPIScaleMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiDPIScaleMethod_h


#define FOREACH_ENUM_EIMGUIDPISCALEMETHOD(op) \
	op(EImGuiDPIScaleMethod::ImGui) \
	op(EImGuiDPIScaleMethod::Slate) 

enum class EImGuiDPIScaleMethod : uint8;
template<> struct TIsUEnumClass<EImGuiDPIScaleMethod> { enum { Value = true }; };
template<> IMGUI_API UEnum* StaticEnum<EImGuiDPIScaleMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
