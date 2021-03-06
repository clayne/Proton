extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled(void *, AppId_t);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend(void *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex(void *, int, AppId_t *, bool *, char *, int);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName(void *, char *, int);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt(void *, bool);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots(void *, AppId_t, DepotId_t *, uint32);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir(void *, AppId_t, char *, uint32);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled(void *, AppId_t);
extern CSteamID cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam(void *, const char *);
