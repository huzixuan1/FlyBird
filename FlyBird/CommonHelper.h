#pragma once
#include"stdafx.h"

ref class CommonHelper
{
public:
	static const char* ConvertToChar(std::string);
	static const char* ConvertToChar(System::String^ arg);
	static std::string ConvertToString(const char* args);
	static std::string ConvertToString(System::String^ arg);
	static System::String^ ConvertToCLRString(const char* args);
	static System::String^ ConvertToCLRString(std::string arg);
public:
	CommonHelper(void);
};

