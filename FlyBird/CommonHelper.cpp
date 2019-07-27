#include "stdafx.h"
#include "CommonHelper.h"

CommonHelper::CommonHelper(void)
{
}


const char* CommonHelper::ConvertToChar(std::string arg)
{
	const char* c = arg.data();
	return c;
}

const char* CommonHelper::ConvertToChar(System::String^ arg)
{
	return (char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg).ToPointer();
}

std::string CommonHelper::ConvertToString(const char* args)
{
	std::string returned = args;
	return returned;
}

std::string CommonHelper::ConvertToString(System::String^ arg)
{
	return ConvertToString(ConvertToChar(arg));
}

System::String^ CommonHelper::ConvertToCLRString(const char* args)
{
	System::String^ clrString = gcnew System::String(args);
	return clrString;
}
System::String^ CommonHelper::ConvertToCLRString(std::string arg)
{
	
	return System::String(arg.data()).ToString();
}