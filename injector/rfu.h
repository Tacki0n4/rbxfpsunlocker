#pragma once

#define RFU_VERSION "4.0"
#define RFU_GITHUB_REPO "axstin/rbxfpsunlocker"

bool CheckForUpdates();

#ifdef RFU_NO_DLL
void SetFPSCapExternal(double value);
#endif