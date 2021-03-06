#pragma once

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#define _ATL_APARTMENT_THREADED 
#define _CRT_SECURE_NO_WARNINGS 1

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclude rarely-used stuff from Windows headers
#endif

#include <SDKDDKVer.h>

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit
#define _ATL_NO_AUTOMATIC_NAMESPACE             // avoid class name conflicts

#include <afxctl.h>         // MFC support for ActiveX Controls
#include <afxext.h>         // MFC extensions
#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC support for Internet Explorer 4 Comon Controls
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

// Delete the two includes below if you do not wish to use the MFC
//  database classes
#ifndef _WIN64

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>                      // MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>                     // MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#endif // _WIN64

#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
#include <list>
#include <string>
#include <process.h>

#include <atlbase.h>
#include <atlcom.h>
#include <initguid.h>
#include <AtlConv.h>
#include <atlcomcli.h>

void debugPrint(const char* fmt, ...);
std::string ws2s(const std::wstring& wstr);

#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
