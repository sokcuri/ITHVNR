#pragma once

#define ITH_PROCESS_DLG 1
#define ITH_OPTION_DLG 2

__declspec(dllexport) void ITH_Init();
__declspec(dllexport) void ITH_CleanUp();
__declspec(dllexport) void ITH_OpenDialog(int nDlg);