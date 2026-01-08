#include <Windows.h>

int WINAPI WinMain(
	_In_ HINSTANCE, 
	_In_opt_ HINSTANCE,
	_In_ LPSTR args, 
	_In_ int)
{
    STARTUPINFOA si{};
    si.cb = sizeof(si);

    PROCESS_INFORMATION pi{};

    char cmdLine[1024];
    lstrcpyA(cmdLine, "wt.exe ");
    lstrcatA(cmdLine, args);

    CreateProcessA(
        nullptr,
        cmdLine,
        nullptr,
        nullptr,
        FALSE,
        0,
        nullptr,
        nullptr,
        &si,
        &pi
    );

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

	return 0;
}