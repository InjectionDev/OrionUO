﻿/***********************************************************************************
**
** CommonInterfaces.h
**
** Copyright (C) September 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef COMMONINTERFACES_H
#define COMMONINTERFACES_H
//----------------------------------------------------------------------------------
#include "EnumList.h"
#include <string>
//----------------------------------------------------------------------------------
#ifndef UOInterface
#define UOInterface struct
#endif
//----------------------------------------------------------------------------------
class IOrionString
{
public:
	IOrionString();
	~IOrionString();

	IOrionString &operator()(const std::string &str);
	IOrionString &operator()(const std::wstring &str);

	bool m_Unicode;
	char *m_DataA;
	wchar_t *m_DataW;
};
//----------------------------------------------------------------------------------
#pragma pack (push,1)
//----------------------------------------------------------------------------------
//IGLEngine
typedef void __cdecl FUNCDEF_PUSH_SCISSOR(int, int, int, int);
typedef void __cdecl FUNCDEF_POP_SCISSOR();
typedef void __cdecl FUNCDEF_DRAW_LINE(unsigned int, int, int, int, int);
typedef void __cdecl FUNCDEF_DRAW_POLYGONE(unsigned int, int, int, int, int);
typedef void __cdecl FUNCDEF_DRAW_CIRCLE(unsigned int, float, float, float, int);
typedef void __cdecl FUNCDEF_DRAW_TEXT_A(int, int, unsigned char, const char*, unsigned short, int, TEXT_ALIGN_TYPE, unsigned short);
typedef void __cdecl FUNCDEF_DRAW_TEXT_W(int, int, unsigned char, const wchar_t*, unsigned short, int, TEXT_ALIGN_TYPE, unsigned short);
typedef void __cdecl FUNCDEF_DRAW_ART(int, int, unsigned short, unsigned short);
typedef void __cdecl FUNCDEF_DRAW_ART_ANIMATED(int, int, unsigned short, unsigned short);
typedef void __cdecl FUNCDEF_DRAW_RESIZEPIC_GUMP(int, int, unsigned short, int, int);
typedef void __cdecl FUNCDEF_DRAW_GUMP(int, int, unsigned short, unsigned short);
typedef void __cdecl FUNCDEF_DRAW_GUMPPIC(int, int, unsigned short, unsigned short, int, int);

//IUltimaOnline
typedef unsigned __int64 __cdecl FUNCDEF_GET_LAND_FLAGS(unsigned short);
typedef unsigned __int64 __cdecl FUNCDEF_GET_STATIC_FLAGS(unsigned short);
typedef int __cdecl FUNCDEF_GET_VALUE_INT(VALUE_KEY_INT, int);
typedef void __cdecl FUNCDEF_SET_VALUE_INT(VALUE_KEY_INT, int);
typedef IOrionString *__cdecl FUNCDEF_GET_VALUE_STRING(VALUE_KEY_STRING, const char*);
typedef void __cdecl FUNCDEF_SET_VALUE_STRING(VALUE_KEY_STRING, const char*);
typedef void __cdecl FUNCDEF_SET_TARGET_DATA(unsigned char*, int);
typedef void __cdecl FUNCDEF_SEND_TARGET_OBJECT(unsigned int);
typedef void __cdecl FUNCDEF_SEND_TARGET_TILE(unsigned short, short, short, char);
typedef void __cdecl FUNCDEF_SEND_TARGET_CANCEL();
typedef void __cdecl FUNCDEF_SEND_CAST_SPELL(int);
typedef void __cdecl FUNCDEF_SEND_USE_SKILL(int);
typedef void __cdecl FUNCDEF_SEND_ASCII_SPEECH(const char*);
typedef void __cdecl FUNCDEF_SEND_UNICODE_SPEECH(const wchar_t*);
typedef void __cdecl FUNCDEF_SEND_RENAME_MOUNT(unsigned int, const char*);
typedef void __cdecl FUNCDEF_SEND_MENU_RESPONSE(unsigned int, unsigned int, int);

//IClilocManager
typedef IOrionString *__cdecl FUNCDEF_GET_CLILOC_A(unsigned int, const char*);
typedef IOrionString *__cdecl FUNCDEF_GET_CLILOC_W(unsigned int, const char*);
typedef IOrionString *__cdecl FUNCDEF_GET_CLILOC_ARGUMENTS(unsigned int, const wchar_t*);

//IColorManager
typedef int __cdecl FUNCDEF_GET_HUES_COUNT();
typedef unsigned short __cdecl FUNCDEF_GET_COLOR32TO16(unsigned int&);
typedef unsigned int __cdecl FUNCDEF_GET_COLOR16TO32(unsigned short&);
typedef unsigned short __cdecl FUNCDEF_GET_COLOR_TO_GRAY(unsigned short&);
typedef unsigned int __cdecl FUNCDEF_GET_POLYGONE_COLOR(unsigned short, unsigned short);
typedef unsigned int __cdecl FUNCDEF_GET_COLOR(unsigned short&, unsigned short);
typedef unsigned int __cdecl FUNCDEF_GET_PRTIAL_HUE_COLOR(unsigned short&, unsigned short);

//IPathFinder
typedef bool __cdecl FUNCDEF_GET_CAN_WALK(unsigned char&, int&, int&, char&);
typedef bool __cdecl FUNCDEF_GET_WALK(bool, unsigned char);
typedef bool __cdecl FUNCDEF_GET_WALK_TO(int, int, int, int);
typedef void __cdecl FUNCDEF_GET_STOP_AUTOWALK();
typedef bool __cdecl FUNCDEF_GET_AUTOWALKING();
//----------------------------------------------------------------------------------
UOInterface IGLEngine
{
	int Version;
	int Size;
	FUNCDEF_PUSH_SCISSOR *PushScissor;
	FUNCDEF_POP_SCISSOR *PopScissor;
	FUNCDEF_DRAW_LINE *DrawLine;
	FUNCDEF_DRAW_POLYGONE *DrawPolygone;
	FUNCDEF_DRAW_CIRCLE *DrawCircle;
	FUNCDEF_DRAW_TEXT_A *DrawTextA;
	FUNCDEF_DRAW_TEXT_W *DrawTextW;
	FUNCDEF_DRAW_ART *DrawArt;
	FUNCDEF_DRAW_ART_ANIMATED *DrawArtAnimated;
	FUNCDEF_DRAW_RESIZEPIC_GUMP *DrawResizepicGump;
	FUNCDEF_DRAW_GUMP *DrawGump;
	FUNCDEF_DRAW_GUMPPIC *DrawGumppic;
};
//----------------------------------------------------------------------------------
UOInterface IUltimaOnline
{
	int Version;
	int Size;
	FUNCDEF_GET_LAND_FLAGS *GetLandFlags;
	FUNCDEF_GET_STATIC_FLAGS *GetStaticFlags;
	FUNCDEF_GET_VALUE_INT *GetValueInt;
	FUNCDEF_SET_VALUE_INT *SetValueInt;
	FUNCDEF_GET_VALUE_STRING *GetValueString;
	FUNCDEF_SET_VALUE_STRING *SetValueString;
	FUNCDEF_SET_TARGET_DATA *SetTargetData;
	FUNCDEF_SEND_TARGET_OBJECT *SendTargetObject;
	FUNCDEF_SEND_TARGET_TILE *SendTargetTile;
	FUNCDEF_SEND_TARGET_CANCEL *SendTargetCancel;
	FUNCDEF_SEND_CAST_SPELL *SendCastSpell;
	FUNCDEF_SEND_USE_SKILL *SendUseSkill;
	FUNCDEF_SEND_ASCII_SPEECH *SendAsciiSpeech;
	FUNCDEF_SEND_UNICODE_SPEECH *SendUnicodeSpeech;
	FUNCDEF_SEND_RENAME_MOUNT *SendRenameMount;
	FUNCDEF_SEND_MENU_RESPONSE *SendMenuResponse;
};
//----------------------------------------------------------------------------------
UOInterface IClilocManager
{
	int Version;
	int Size;
	FUNCDEF_GET_CLILOC_A *GetClilocA;
	FUNCDEF_GET_CLILOC_W *GetClilocW;

	FUNCDEF_GET_CLILOC_ARGUMENTS *GetClilocArguments;
};
//----------------------------------------------------------------------------------
UOInterface IColorManager
{
	int Version;
	int Size;
	FUNCDEF_GET_HUES_COUNT *GetHuesCount;

	FUNCDEF_GET_COLOR32TO16 *Color32To16;
	FUNCDEF_GET_COLOR16TO32 *Color16To32;
	FUNCDEF_GET_COLOR_TO_GRAY *ConvertToGray;

	FUNCDEF_GET_POLYGONE_COLOR *GetPolygoneColor;
	FUNCDEF_GET_COLOR *GetColor;
	FUNCDEF_GET_PRTIAL_HUE_COLOR *GetPartialHueColor;
};
//----------------------------------------------------------------------------------
UOInterface IPathFinder
{
	int Version;
	int Size;
	FUNCDEF_GET_CAN_WALK *CanWalk;
	FUNCDEF_GET_WALK *Walk;
	FUNCDEF_GET_WALK_TO *WalkTo;
	FUNCDEF_GET_STOP_AUTOWALK *StopAutowalk;
	FUNCDEF_GET_AUTOWALKING *GetAutowalking;
};
//----------------------------------------------------------------------------------
extern IGLEngine g_Interface_GL;
extern IUltimaOnline g_Interface_UO;
extern IClilocManager g_Interface_ClilocManager;
extern IColorManager g_Interface_ColorManager;
extern IPathFinder g_Interface_PathFinder;
//----------------------------------------------------------------------------------
typedef struct PLUGIN_CLIENT_INTERFACE
{
	int Version;
	int Size;
	IGLEngine *GL;
	IUltimaOnline *UO;
	IClilocManager *ClilocManager;
	IColorManager *ColorManager;
	IPathFinder *PathFinder;
} *PPLUGIN_CLIENT_INTERFACE;
//----------------------------------------------------------------------------------
#pragma pack (pop)
//----------------------------------------------------------------------------------
extern PLUGIN_CLIENT_INTERFACE g_PluginClientInterface;
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
