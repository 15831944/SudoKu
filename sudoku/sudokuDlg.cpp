
// sudokuDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "sudoku.h"
#include "sudokuDlg.h"
#include "afxdialogex.h"
#include "SudokuVerify.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CsudokuDlg �Ի���



CsudokuDlg::CsudokuDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CsudokuDlg::IDD, pParent) 
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_Sudo.clear();
}

void CsudokuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_1_1, m_s_1_1);
	DDX_Text(pDX, IDC_EDIT_1_2, m_s_1_2);
	DDX_Text(pDX, IDC_EDIT_1_3, m_s_1_3);
	DDX_Text(pDX, IDC_EDIT_1_4, m_s_1_4);
	DDX_Text(pDX, IDC_EDIT_1_5, m_s_1_5);
	DDX_Text(pDX, IDC_EDIT_1_6, m_s_1_6);
	DDX_Text(pDX, IDC_EDIT_1_7, m_s_1_7);
	DDX_Text(pDX, IDC_EDIT_1_8, m_s_1_8);
	DDX_Text(pDX, IDC_EDIT_1_9, m_s_1_9);


	DDX_Text(pDX, IDC_EDIT_2_1, m_s_2_1);
	DDX_Text(pDX, IDC_EDIT_2_2, m_s_2_2);
	DDX_Text(pDX, IDC_EDIT_2_3, m_s_2_3);
	DDX_Text(pDX, IDC_EDIT_2_4, m_s_2_4);
	DDX_Text(pDX, IDC_EDIT_2_5, m_s_2_5);
	DDX_Text(pDX, IDC_EDIT_2_6, m_s_2_6);
	DDX_Text(pDX, IDC_EDIT_2_7, m_s_2_7);
	DDX_Text(pDX, IDC_EDIT_2_8, m_s_2_8);
	DDX_Text(pDX, IDC_EDIT_2_9, m_s_2_9);

	DDX_Text(pDX, IDC_EDIT_3_1, m_s_3_1);
	DDX_Text(pDX, IDC_EDIT_3_2, m_s_3_2);
	DDX_Text(pDX, IDC_EDIT_3_3, m_s_3_3);
	DDX_Text(pDX, IDC_EDIT_3_4, m_s_3_4);
	DDX_Text(pDX, IDC_EDIT_3_5, m_s_3_5);
	DDX_Text(pDX, IDC_EDIT_3_6, m_s_3_6);
	DDX_Text(pDX, IDC_EDIT_3_7, m_s_3_7);
	DDX_Text(pDX, IDC_EDIT_3_8, m_s_3_8);
	DDX_Text(pDX, IDC_EDIT_3_9, m_s_3_9);

	DDX_Text(pDX, IDC_EDIT_4_1, m_s_4_1);
	DDX_Text(pDX, IDC_EDIT_4_2, m_s_4_2);
	DDX_Text(pDX, IDC_EDIT_4_3, m_s_4_3);
	DDX_Text(pDX, IDC_EDIT_4_4, m_s_4_4);
	DDX_Text(pDX, IDC_EDIT_4_5, m_s_4_5);
	DDX_Text(pDX, IDC_EDIT_4_6, m_s_4_6);
	DDX_Text(pDX, IDC_EDIT_4_7, m_s_4_7);
	DDX_Text(pDX, IDC_EDIT_4_8, m_s_4_8);
	DDX_Text(pDX, IDC_EDIT_4_9, m_s_4_9);

	DDX_Text(pDX, IDC_EDIT_5_1, m_s_5_1);
	DDX_Text(pDX, IDC_EDIT_5_2, m_s_5_2);
	DDX_Text(pDX, IDC_EDIT_5_3, m_s_5_3);
	DDX_Text(pDX, IDC_EDIT_5_4, m_s_5_4);
	DDX_Text(pDX, IDC_EDIT_5_5, m_s_5_5);
	DDX_Text(pDX, IDC_EDIT_5_6, m_s_5_6);
	DDX_Text(pDX, IDC_EDIT_5_7, m_s_5_7);
	DDX_Text(pDX, IDC_EDIT_5_8, m_s_5_8);
	DDX_Text(pDX, IDC_EDIT_5_9, m_s_5_9);

	DDX_Text(pDX, IDC_EDIT_6_1, m_s_6_1);
	DDX_Text(pDX, IDC_EDIT_6_2, m_s_6_2);
	DDX_Text(pDX, IDC_EDIT_6_3, m_s_6_3);
	DDX_Text(pDX, IDC_EDIT_6_4, m_s_6_4);
	DDX_Text(pDX, IDC_EDIT_6_5, m_s_6_5);
	DDX_Text(pDX, IDC_EDIT_6_6, m_s_6_6);
	DDX_Text(pDX, IDC_EDIT_6_7, m_s_6_7);
	DDX_Text(pDX, IDC_EDIT_6_8, m_s_6_8);
	DDX_Text(pDX, IDC_EDIT_6_9, m_s_6_9);

	DDX_Text(pDX, IDC_EDIT_7_1, m_s_7_1);
	DDX_Text(pDX, IDC_EDIT_7_2, m_s_7_2);
	DDX_Text(pDX, IDC_EDIT_7_3, m_s_7_3);
	DDX_Text(pDX, IDC_EDIT_7_4, m_s_7_4);
	DDX_Text(pDX, IDC_EDIT_7_5, m_s_7_5);
	DDX_Text(pDX, IDC_EDIT_7_6, m_s_7_6);
	DDX_Text(pDX, IDC_EDIT_7_7, m_s_7_7);
	DDX_Text(pDX, IDC_EDIT_7_8, m_s_7_8);
	DDX_Text(pDX, IDC_EDIT_7_9, m_s_7_9);

	DDX_Text(pDX, IDC_EDIT_8_1, m_s_8_1);
	DDX_Text(pDX, IDC_EDIT_8_2, m_s_8_2);
	DDX_Text(pDX, IDC_EDIT_8_3, m_s_8_3);
	DDX_Text(pDX, IDC_EDIT_8_4, m_s_8_4);
	DDX_Text(pDX, IDC_EDIT_8_5, m_s_8_5);
	DDX_Text(pDX, IDC_EDIT_8_6, m_s_8_6);
	DDX_Text(pDX, IDC_EDIT_8_7, m_s_8_7);
	DDX_Text(pDX, IDC_EDIT_8_8, m_s_8_8);
	DDX_Text(pDX, IDC_EDIT_8_9, m_s_8_9);

	DDX_Text(pDX, IDC_EDIT_9_1, m_s_9_1);
	DDX_Text(pDX, IDC_EDIT_9_2, m_s_9_2);
	DDX_Text(pDX, IDC_EDIT_9_3, m_s_9_3);
	DDX_Text(pDX, IDC_EDIT_9_4, m_s_9_4);
	DDX_Text(pDX, IDC_EDIT_9_5, m_s_9_5);
	DDX_Text(pDX, IDC_EDIT_9_6, m_s_9_6);
	DDX_Text(pDX, IDC_EDIT_9_7, m_s_9_7);
	DDX_Text(pDX, IDC_EDIT_9_8, m_s_9_8);
	DDX_Text(pDX, IDC_EDIT_9_9, m_s_9_9);

	DDX_Text(pDX, IDC_EDIT_LV, m_sLv);
}

BEGIN_MESSAGE_MAP(CsudokuDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CsudokuDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &CsudokuDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CsudokuDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CsudokuDlg ��Ϣ�������

BOOL CsudokuDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CsudokuDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CsudokuDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CsudokuDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CsudokuDlg::SETCONTROL(int nRow, int nCol, CString strValue)
{
	if (nRow==1)
	{
		switch (nCol)
		{
		case 1:
			m_s_1_1 = strValue;
			return;
		case 2:
			m_s_1_2 = strValue;
			return;
		case 3:
			m_s_1_3 = strValue;
			return;
		case 4:
			m_s_1_4 = strValue;
			return;
		case 5:
			m_s_1_5 = strValue;
			return;
		case 6:
			m_s_1_6 = strValue;
			return;
		case 7:
			m_s_1_7= strValue;
			return;
		case 8:
			m_s_1_8 = strValue;
			return;
		case 9:
			m_s_1_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 2)
	{
		switch (nCol)
		{
		case 1:
			m_s_2_1 = strValue;
			return;
		case 2:
			m_s_2_2 = strValue;
			return;
		case 3:
			m_s_2_3 = strValue;
			return;
		case 4:
			m_s_2_4 = strValue;
			return;
		case 5:
			m_s_2_5 = strValue;
			return;
		case 6:
			m_s_2_6 = strValue;
			return;
		case 7:
			m_s_2_7 = strValue;
			return;
		case 8:
			m_s_2_8 = strValue;
			return;
		case 9:
			m_s_2_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 3)
	{
		switch (nCol)
		{
		case 1:
			m_s_3_1 = strValue;
			return;
		case 2:
			m_s_3_2 = strValue;
			return;
		case 3:
			m_s_3_3 = strValue;
			return;
		case 4:
			m_s_3_4 = strValue;
			return;
		case 5:
			m_s_3_5 = strValue;
			return;
		case 6:
			m_s_3_6 = strValue;
			return;
		case 7:
			m_s_3_7 = strValue;
			return;
		case 8:
			m_s_3_8 = strValue;
			return;
		case 9:
			m_s_3_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 4)
	{
		switch (nCol)
		{
		case 1:
			m_s_4_1 = strValue;
			return;
		case 2:
			m_s_4_2 = strValue;
			return;
		case 3:
			m_s_4_3 = strValue;
			return;
		case 4:
			m_s_4_4 = strValue;
			return;
		case 5:
			m_s_4_5 = strValue;
			return;
		case 6:
			m_s_4_6 = strValue;
			return;
		case 7:
			m_s_4_7 = strValue;
			return;
		case 8:
			m_s_4_8 = strValue;
			return;
		case 9:
			m_s_4_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 5)
	{
		switch (nCol)
		{
		case 1:
			m_s_5_1 = strValue;
			return;
		case 2:
			m_s_5_2 = strValue;
			return;
		case 3:
			m_s_5_3 = strValue;
			return;
		case 4:
			m_s_5_4 = strValue;
			return;
		case 5:
			m_s_5_5 = strValue;
			return;
		case 6:
			m_s_5_6 = strValue;
			return;
		case 7:
			m_s_5_7 = strValue;
			return;
		case 8:
			m_s_5_8 = strValue;
			return;
		case 9:
			m_s_5_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 6)
	{
		switch (nCol)
		{
		case 1:
			m_s_6_1 = strValue;
			return;
		case 2:
			m_s_6_2 = strValue;
			return;
		case 3:
			m_s_6_3 = strValue;
			return;
		case 4:
			m_s_6_4 = strValue;
			return;
		case 5:
			m_s_6_5 = strValue;
			return;
		case 6:
			m_s_6_6 = strValue;
			return;
		case 7:
			m_s_6_7 = strValue;
			return;
		case 8:
			m_s_6_8 = strValue;
			return;
		case 9:
			m_s_6_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 7)
	{
		switch (nCol)
		{
		case 1:
			m_s_7_1 = strValue;
			return;
		case 2:
			m_s_7_2 = strValue;
			return;
		case 3:
			m_s_7_3 = strValue;
			return;
		case 4:
			m_s_7_4 = strValue;
			return;
		case 5:
			m_s_7_5 = strValue;
			return;
		case 6:
			m_s_7_6 = strValue;
			return;
		case 7:
			m_s_7_7 = strValue;
			return;
		case 8:
			m_s_7_8 = strValue;
			return;
		case 9:
			m_s_7_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 8)
	{
		switch (nCol)
		{
		case 1:
			m_s_8_1 = strValue;
			return;
		case 2:
			m_s_8_2 = strValue;
			return;
		case 3:
			m_s_8_3 = strValue;
			return;
		case 4:
			m_s_8_4 = strValue;
			return;
		case 5:
			m_s_8_5 = strValue;
			return;
		case 6:
			m_s_8_6 = strValue;
			return;
		case 7:
			m_s_8_7 = strValue;
			return;
		case 8:
			m_s_8_8 = strValue;
			return;
		case 9:
			m_s_8_9 = strValue;
			return;

		default:
			break;
		}
	}
	if (nRow == 9)
	{
		switch (nCol)
		{
		case 1:
			m_s_9_1 = strValue;
			return;
		case 2:
			m_s_9_2 = strValue;
			return;
		case 3:
			m_s_9_3 = strValue;
			return;
		case 4:
			m_s_9_4 = strValue;
			return;
		case 5:
			m_s_9_5 = strValue;
			return;
		case 6:
			m_s_9_6 = strValue;
			return;
		case 7:
			m_s_9_7 = strValue;
			return;
		case 8:
			m_s_9_8 = strValue;
			return;
		case 9:
			m_s_9_9 = strValue;
			return;

		default:
			break;
		}
	}
	return;
}

bool CsudokuDlg::CONTROLISNULL(int nRow, int nCol)
{
	if (nRow ==1)
	{
		switch (nCol)
		{
		case 1:
			if (m_s_1_1 == _T(""))
				return false;
			else
				return true;
		case 2:
			if(m_s_1_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_1_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_1_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_1_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_1_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_1_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_1_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_1_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==2)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_2_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_2_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_2_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_2_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_2_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_2_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_2_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_2_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_2_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==3)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_3_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_3_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_3_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_3_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_3_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_3_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_3_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_3_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_3_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==4)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_4_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_4_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_4_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_4_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_4_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_4_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_4_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_4_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_4_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==5)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_5_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_5_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_5_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_5_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_5_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_5_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_5_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_5_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_5_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==6)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_6_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_6_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_6_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_6_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_6_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_6_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_6_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_6_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_6_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==7)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_7_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_7_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_7_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_7_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_7_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_7_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_7_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_7_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_7_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==8)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_8_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_8_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_8_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_8_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_8_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_8_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_8_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_8_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_8_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	if (nRow ==9)
	{
		switch (nCol)
		{
		case 1:
			if(m_s_9_1 ==_T(""))
			    return false;
			else
				return true;
		case 2:
			if(m_s_9_2 ==_T(""))
			    return false;
			else
				return true;
		case 3:
			if(m_s_9_3 ==_T(""))
			    return false;
			else
				return true;
		case 4:
			if(m_s_9_4 ==_T(""))
			    return false;
			else
				return true;
		case 5:
			if(m_s_9_5 ==_T(""))
			    return false;
			else
				return true;
		case 6:
			if(m_s_9_6 ==_T(""))
			    return false;
			else
				return true;
		case 7:
			if(m_s_9_7 ==_T(""))
			    return false;
			else
				return true;
		case 8:
			if(m_s_9_8 ==_T(""))
			    return false;
			else
				return true;
		case 9:
			if(m_s_9_9 ==_T(""))
			    return false;
			else
				return true;

		default:
			break;
		}
	}
	return true;
}

void CsudokuDlg::ForbiddenControl()
{
}

void CsudokuDlg::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	int data[9][9];
	data[0][0] = ConverStr2NUM(m_s_1_1);
	data[0][1] = ConverStr2NUM(m_s_1_2);
	data[0][2] = ConverStr2NUM(m_s_1_3);
	data[0][3] = ConverStr2NUM(m_s_1_4);
	data[0][4] = ConverStr2NUM(m_s_1_5);
	data[0][5] = ConverStr2NUM(m_s_1_6);
	data[0][6] = ConverStr2NUM(m_s_1_7);
	data[0][7] = ConverStr2NUM(m_s_1_8);
	data[0][8] = ConverStr2NUM(m_s_1_9);

	data[1][0] = ConverStr2NUM(m_s_2_1);
	data[1][1] = ConverStr2NUM(m_s_2_2);
	data[1][2] = ConverStr2NUM(m_s_2_3);
	data[1][3] = ConverStr2NUM(m_s_2_4);
	data[1][4] = ConverStr2NUM(m_s_2_5);
	data[1][5] = ConverStr2NUM(m_s_2_6);
	data[1][6] = ConverStr2NUM(m_s_2_7);
	data[1][7] = ConverStr2NUM(m_s_2_8);
	data[1][8] = ConverStr2NUM(m_s_2_9);

	data[2][0] = ConverStr2NUM(m_s_3_1);
	data[2][1] = ConverStr2NUM(m_s_3_2);
	data[2][2] = ConverStr2NUM(m_s_3_3);
	data[2][3] = ConverStr2NUM(m_s_3_4);
	data[2][4] = ConverStr2NUM(m_s_3_5);
	data[2][5] = ConverStr2NUM(m_s_3_6);
	data[2][6] = ConverStr2NUM(m_s_3_7);
	data[2][7] = ConverStr2NUM(m_s_3_8);
	data[2][8] = ConverStr2NUM(m_s_3_9);

	data[3][0] = ConverStr2NUM(m_s_4_1);
	data[3][1] = ConverStr2NUM(m_s_4_2);
	data[3][2] = ConverStr2NUM(m_s_4_3);
	data[3][3] = ConverStr2NUM(m_s_4_4);
	data[3][4] = ConverStr2NUM(m_s_4_5);
	data[3][5] = ConverStr2NUM(m_s_4_6);
	data[3][6] = ConverStr2NUM(m_s_4_7);
	data[3][7] = ConverStr2NUM(m_s_4_8);
	data[3][8] = ConverStr2NUM(m_s_4_9);

	data[4][0] = ConverStr2NUM(m_s_5_1);
	data[4][1] = ConverStr2NUM(m_s_5_2);
	data[4][2] = ConverStr2NUM(m_s_5_3);
	data[4][3] = ConverStr2NUM(m_s_5_4);
	data[4][4] = ConverStr2NUM(m_s_5_5);
	data[4][5] = ConverStr2NUM(m_s_5_6);
	data[4][6] = ConverStr2NUM(m_s_5_7);
	data[4][7] = ConverStr2NUM(m_s_5_8);
	data[4][8] = ConverStr2NUM(m_s_5_9);

	data[5][0] = ConverStr2NUM(m_s_6_1);
	data[5][1] = ConverStr2NUM(m_s_6_2);
	data[5][2] = ConverStr2NUM(m_s_6_3);
	data[5][3] = ConverStr2NUM(m_s_6_4);
	data[5][4] = ConverStr2NUM(m_s_6_5);
	data[5][5] = ConverStr2NUM(m_s_6_6);
	data[5][6] = ConverStr2NUM(m_s_6_7);
	data[5][7] = ConverStr2NUM(m_s_6_8);
	data[5][8] = ConverStr2NUM(m_s_6_9);

	data[6][0] = ConverStr2NUM(m_s_7_1);
	data[6][1] = ConverStr2NUM(m_s_7_2);
	data[6][2] = ConverStr2NUM(m_s_7_3);
	data[6][3] = ConverStr2NUM(m_s_7_4);
	data[6][4] = ConverStr2NUM(m_s_7_5);
	data[6][5] = ConverStr2NUM(m_s_7_6);
	data[6][6] = ConverStr2NUM(m_s_7_7);
	data[6][7] = ConverStr2NUM(m_s_7_8);
	data[6][8] = ConverStr2NUM(m_s_7_9);

	data[7][0] = ConverStr2NUM(m_s_8_1);
	data[7][1] = ConverStr2NUM(m_s_8_2);
	data[7][2] = ConverStr2NUM(m_s_8_3);
	data[7][3] = ConverStr2NUM(m_s_8_4);
	data[7][4] = ConverStr2NUM(m_s_8_5);
	data[7][5] = ConverStr2NUM(m_s_8_6);
	data[7][6] = ConverStr2NUM(m_s_8_7);
	data[7][7] = ConverStr2NUM(m_s_8_8);
	data[7][8] = ConverStr2NUM(m_s_8_9);

	data[8][0] = ConverStr2NUM(m_s_9_1);
	data[8][1] = ConverStr2NUM(m_s_9_2);
	data[8][2] = ConverStr2NUM(m_s_9_3);
	data[8][3] = ConverStr2NUM(m_s_9_4);
	data[8][4] = ConverStr2NUM(m_s_9_5);
	data[8][5] = ConverStr2NUM(m_s_9_6);
	data[8][6] = ConverStr2NUM(m_s_9_7);
	data[8][7] = ConverStr2NUM(m_s_9_8);
	data[8][8] = ConverStr2NUM(m_s_9_9);

// 	for (int i = 0; i < 9;i++)
// 	{
// 		vector<int> vecRow = m_Sudo[i];
// 		for (int j = 0; j < 9;j++)
// 		{
// 			int temp = vecRow[j];
// 			int tempCustom = data[i][j];
// 			if (temp!=tempCustom)
// 			{
// 				CString sPrompt;
// 				sPrompt.Format(_T("row: %d ; col: %d ; ����"), i, j);
// 				AfxMessageBox(sPrompt);
// 				return;
// 			}
// 		}
// 	}

	CSudokuVerify verify(data);
	if (verify.VerifyData())
	{
	}
	else
	{
		AfxMessageBox(_T("ʧ��"));
		return;
	}

	end_time = GetTickCount();
	auto time = end_time - start_time;
	int useTime = time / 1000;
	CString sTime;
	sTime.Format(_T("ͨ���Ѷȣ�%s ������ʱ%d"),m_sLv, useTime);
	AfxMessageBox(sTime);

}

#include <random>
void CsudokuDlg::OnBnClickedButton1()
{
	OnBnClickedButton2();
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	int nLv = _wtoi(m_sLv);
	if (nLv>8||nLv<1)
	{
		AfxMessageBox(_T("�Ѷ�ֻ������1-8!"));
		return;
	}
	CString sPrompt;
	sPrompt.Format(_T("��ǰ�Ѷ� %s"), m_sLv);
	AfxMessageBox(sPrompt);

	int nCreatNum = 9-nLv;


	vector<vector<int>> num(9, vector<int>(9, -1));
	srand((unsigned)time(NULL));
	
	if (generate_core(num, 0, 0))
	{
		m_Sudo = num;
		for (int i = 0; i < 9;i++)
		{
			/*srand((unsigned)time(NULL));*/
			vector<int > nTemp = num[i];
			for (int j = 0; j < nCreatNum;j++)
			{
				COUNT:
				int nRand=(rand() % (9 - 0)) + 0;
				int nValue = nTemp[nRand];
				CString sValue;
				sValue.Format(_T("%d"), nValue);
				if (!CONTROLISNULL(i + 1, nRand + 1))
				{
					SETCONTROL(i + 1, nRand + 1, sValue);
					
				}
				else
				{
					goto COUNT;
				}
			}
		}
	}
	UpdateData(FALSE);
	start_time = GetTickCount();
}

void CsudokuDlg::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
	for (int i = 0; i < 9;i++)
	{
		for (int j = 0; j < 9;j++)
		{
			SETCONTROL(i+1, j+1, _T(""));
		}
	}
	UpdateData(FALSE);
}
