// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EImGuiCanvasSizeType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMGUI_EImGuiCanvasSizeType_generated_h
#error "EImGuiCanvasSizeType.generated.h already included, missing '#pragma once' in EImGuiCanvasSizeType.h"
#endif
#define IMGUI_EImGuiCanvasSizeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiCanvasSizeType_h


#define FOREACH_ENUM_EIMGUICANVASSIZETYPE(op) \
	op(EImGuiCanvasSizeType::Custom) \
	op(EImGuiCanvasSizeType::Desktop) \
	op(EImGuiCanvasSizeType::Viewport) 

enum class EImGuiCanvasSizeType : uint8;
template<> struct TIsUEnumClass<EImGuiCanvasSizeType> { enum { Value = true }; };
template<> IMGUI_API UEnum* StaticEnum<EImGuiCanvasSizeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
