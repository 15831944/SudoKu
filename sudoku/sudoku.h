
// sudoku.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CsudokuApp: 
// �йش����ʵ�֣������ sudoku.cpp
//

class CsudokuApp : public CWinApp
{
public:
	CsudokuApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CsudokuApp theApp;