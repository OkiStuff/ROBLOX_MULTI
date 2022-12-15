#include <Windows.h>
#include <tchar.h>
#include <SDKDDKVer.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	CreateMutex(NULL, 1, L"ROBLOX_singletonMutex"); //bInitialOwner is TRUE, takes ownership and holds it until this process exits

	printf("You can now use multiple ROBLOX clients. Closing this will cause all ROBLOX clients to terminate except for one.\n");
	printf("Press any key to close");
	getch();
	return 0;
}
