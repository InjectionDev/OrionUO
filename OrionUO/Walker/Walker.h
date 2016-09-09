/***********************************************************************************
**
** Walker.h
**
** Copyright (C) August 2016 Hotride
**
************************************************************************************
*/
//----------------------------------------------------------------------------------
#ifndef WALKER_H
#define WALKER_H
//----------------------------------------------------------------------------------
#include "FastWalk.h"
//----------------------------------------------------------------------------------
//����� ��� ��������� ����� ������
class CWalker
{
private:
	uchar m_Sequence; //������� ���

	uchar m_Direction[256]; //�����������

public:
	CWalker();
	~CWalker() {}

	CFastWalkStack m_FastWalkStack; //��������� �� Fast Walk Stack
	
	void IncSequence(); //��������� �������� �����
	void SetSequence(const uchar &seq, const uchar &dir); //���������� �������� Direction ��� ���������� ����

	uchar GetSequence() const { return m_Sequence; } //�������� ����� ����
	uchar GetDirection(const uchar &seq) const { return m_Direction[seq]; } //�������� �������� Direction ��� ���������� ����
};
//----------------------------------------------------------------------------------
extern CWalker *g_Walker;
//----------------------------------------------------------------------------------
#endif
//----------------------------------------------------------------------------------