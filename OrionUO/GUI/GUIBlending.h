﻿/***********************************************************************************
**
** GUIBlending.h
**
** Компонента для применения блендинга
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef GUIBLENDING_H
#define GUIBLENDING_H
//----------------------------------------------------------------------------------
#include "BaseGUI.h"
//----------------------------------------------------------------------------------
class CGUIBlending : public CBaseGUI
{
	//!Функция для исходных пикселей
	SETGET(GLenum, SFactor);

	//!Функция для входных пикселей
	SETGET(GLenum, DFactor);

public:
	CGUIBlending(const bool &enabled, const GLenum &sFactor, const GLenum &dFactor);
	virtual ~CGUIBlending();

	virtual void Draw(const bool &checktrans = false);
};
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------
