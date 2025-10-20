#include <Windows.h>

int WINAPI WinMain(
	_In_ HINSTANCE, 
	_In_opt_ HINSTANCE,
	_In_ LPSTR args, 
	_In_ int)
{
	ShellExecuteA(nullptr, "open", "wt.exe", args, nullptr, SW_SHOW);
	return 0;
}