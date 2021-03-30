// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameProject/NewObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewObject() {}
// Cross Module References
	GAMEPROJECT_API UClass* Z_Construct_UClass_UNewObject_NoRegister();
	GAMEPROJECT_API UClass* Z_Construct_UClass_UNewObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameProject();
// End Cross Module References
	DEFINE_FUNCTION(UNewObject::execMyFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyFunction();
		P_NATIVE_END;
	}
	void UNewObject::StaticRegisterNativesUNewObject()
	{
		UClass* Class = UNewObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyFunction", &UNewObject::execMyFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewObject_MyFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewObject_MyFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFunctions" },
		{ "ModuleRelativePath", "NewObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewObject_MyFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewObject, nullptr, "MyFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewObject_MyFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewObject_MyFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewObject_MyFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewObject_MyFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNewObject_NoRegister()
	{
		return UNewObject::StaticClass();
	}
	struct Z_Construct_UClass_UNewObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewObject_MyFunction, "MyFunction" }, // 1881055271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NewObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NewObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewObject_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "MyVariables" },
		{ "ModuleRelativePath", "NewObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNewObject_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewObject, MyFloat), METADATA_PARAMS(Z_Construct_UClass_UNewObject_Statics::NewProp_MyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewObject_Statics::NewProp_MyFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewObject_Statics::NewProp_MyFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewObject_Statics::ClassParams = {
		&UNewObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewObject, 3073453022);
	template<> GAMEPROJECT_API UClass* StaticClass<UNewObject>()
	{
		return UNewObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewObject(Z_Construct_UClass_UNewObject, &UNewObject::StaticClass, TEXT("/Script/GameProject"), TEXT("UNewObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
