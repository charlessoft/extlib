#ifndef _TYPEDEFINE_H_
#define _TYPEDEFINE_H_

#ifdef WIN_PLATFORM
#include <Windows.h>
#endif
#include "json/json.h"
// #define ACCESS_TOKEN		"access_token"
// #define TOKEN_TYPE			"token_type"
// #define EXPIRES_IN			"expires_in"
// #define REFRESH_TOKEN		"refresh_token"
//class CGDoc;
//class CGDoc_DocumentService;
//class CGDoc_ClientLoginAuthenticator;

#define BAIDU_PCS_BASE_URI "https://openapi.baidu.com/oauth/2.0/token"
class CPCS_Service;
class CAuthenticator;


#include <map>
#include <sstream>
#include <string>
using namespace std;

typedef struct _STR_PCS_TOKEN_
{

    CAuthenticator* pAuthenticator;
    CPCS_Service* pPCS_Service;
    string m_path_root;// 根路径
	//string str_access_token;
	//string str_refresh_token;
	//int expires_in;
	//string str_token_type;
	//wstring str_error;
	//int errCode;

 	//string str_clientId;
 	//string str_client_secret;
 	//string str_redirect_url;
	//string str_SID;
	//string str_LSID;
	//string str_Auth;
	//map<string,CGDoc*> m_mapDoc;

	//int nversion;

	////旧版本api
	//string str_username;
	//string str_password;
	//CGDoc_DocumentService* pDocumentService;
	//CGDoc_ClientLoginAuthenticator* pClientLoginAuthenticator;
}STR_PCS_TOKEN,*LPPCS_TOKEN;


#define HTML 1
#define Plain_text 2
#define Rich_text 3
#define Open_Office_doc 4
#define PDF 5
#define MS_Word_document 6
#define MS_Excel 7
#define Open_Office_sheet 8
#define JPEG 9
#define PNG 10
#define SVG 11
#define MS_PowerPoint 12
#define Open_Office 13

#define FOLDER 14

//param
#define PARAM_CODE	"code"
#define PARAM_CLIENT_ID "client_id"
#define PARAM_CLIENT_SECRET "client_secret"
#define PARAM_REDIRECT_URI "redirect_uri"
#define PARAM_REFRESH_TOKEN		"refresh_token"
#define PARAM_GRANT_TYPE "grant_type"


#define CONTEXT_TYPE_URLENCODED "Content-Type:application/x-www-form-urlencoded"
//function define
#ifdef WIN_PLATFORM
	#define GDOC_stricmp stricmp
#else
	#define GDOC_stricmp strcasecmp
	//类型定义
	typedef int errno_t;
	typedef int BOOL;
	typedef unsigned char BYTE;
	typedef float FLOAT;
	typedef FLOAT *PFLOAT;
	typedef char CHAR;
	typedef unsigned char UCHAR;
	typedef unsigned char *PUCHAR;
	typedef short SHORT;
	typedef unsigned short USHORT;
	typedef unsigned short *PUSHORT;
	typedef long LONG;
	typedef unsigned short WORD;
	typedef unsigned long DWORD;
	typedef long long LONGLONG;
	typedef unsigned long long ULONGLONG;
	typedef ULONGLONG *PULONGLONG;
	typedef unsigned long ULONG;
	typedef int INT;
	typedef unsigned int UINT;
	typedef unsigned int *PUINT;
	typedef void VOID;
	typedef char *LPSTR;
	typedef const char *LPCSTR;
	typedef wchar_t WCHAR;
	typedef WCHAR *LPWSTR;
	typedef const WCHAR *LPCWSTR;
	typedef DWORD *LPDWORD;
	typedef unsigned long UINT_PTR;
	typedef UINT_PTR SIZE_T;
	typedef LONGLONG USN;
	typedef BYTE BOOLEAN;
	typedef void *PVOID;
    typedef unsigned char* LPBYTE;
	typedef struct _FILETIME {
	DWORD dwLowDateTime;
	DWORD dwHighDateTime;
	} FILETIME;
	typedef union _ULARGE_INTEGER {
	struct {
	  DWORD LowPart;
	  DWORD HighPart;
	  };
	struct {
	  DWORD LowPart;
	  DWORD HighPart;
	  } u;
	ULONGLONG QuadPart;
	} ULARGE_INTEGER,
	*PULARGE_INTEGER;
	#define TRUE 1
	#define FALSE 0
	#define MAX_PATH 260

#endif


#ifdef WIN_PLATFORM

#if _DEBUG
#pragma comment(lib,"../../../../lib/libcurl/curl/vs/vc10/lib/Debug/libcurl.lib")
#pragma comment(lib,"../../../../lib/jsoncpp/build/vs10/debug/lib_json/json_vc10_libmtd.lib")
//#pragma comment(lib,"C:/cygwin/home/charles/BaiduCloud/lib/libcurl/curl/vs/vc10/lib/Debug/libcurl.lib")
// #pragma comment(lib,"C:/cygwin/home/charles/BaiduCloud/lib/libcurl/openssl/dbg/lib/libeay32.lib")
// #pragma comment(lib,"C:/cygwin/home/charles/BaiduCloud/lib/libcurl/openssl/dbg/lib/ssleay32.lib")
//#pragma comment(lib,"../../../../lib/libcurl/zlib/dbg/lib/ssleay32.lib")
#else

#endif
	#pragma comment(lib,"ws2_32.lib")
	#pragma comment(lib,"winmm.lib")
	#pragma comment(lib,"wldap32.lib")

#endif
#endif
