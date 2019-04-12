
// sudokuDlg.h : 头文件
//

#pragma once
#include <vector>
using namespace std;
// CsudokuDlg 对话框
class CsudokuDlg : public CDialogEx
{
// 构造
public:
	CsudokuDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SUDOKU_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	vector<vector<int>> m_Sudo;
#pragma region 控件
	CString m_s_1_1;
	CString m_s_2_1;
	CString m_s_3_1;
	CString m_s_4_1;
	CString m_s_5_1;
	CString m_s_6_1;
	CString m_s_7_1;
	CString m_s_8_1;
	CString m_s_9_1;
	///////////////
	CString m_s_1_2;
	CString m_s_2_2;
	CString m_s_3_2;
	CString m_s_4_2;
	CString m_s_5_2;
	CString m_s_6_2;
	CString m_s_7_2;
	CString m_s_8_2;
	CString m_s_9_2;
	///////////////
	CString m_s_1_3;
	CString m_s_2_3;
	CString m_s_3_3;
	CString m_s_4_3;
	CString m_s_5_3;
	CString m_s_6_3;
	CString m_s_7_3;
	CString m_s_8_3;
	CString m_s_9_3;
	///////////////
	CString m_s_1_4;
	CString m_s_2_4;
	CString m_s_3_4;
	CString m_s_4_4;
	CString m_s_5_4;
	CString m_s_6_4;
	CString m_s_7_4;
	CString m_s_8_4;
	CString m_s_9_4;
	///////////////
	CString m_s_1_5;
	CString m_s_2_5;
	CString m_s_3_5;
	CString m_s_4_5;
	CString m_s_5_5;
	CString m_s_6_5;
	CString m_s_7_5;
	CString m_s_8_5;
	CString m_s_9_5;
	///////////////
	CString m_s_1_6;
	CString m_s_2_6;
	CString m_s_3_6;
	CString m_s_4_6;
	CString m_s_5_6;
	CString m_s_6_6;
	CString m_s_7_6;
	CString m_s_8_6;
	CString m_s_9_6;
	///////////////
	CString m_s_1_7;
	CString m_s_2_7;
	CString m_s_3_7;
	CString m_s_4_7;
	CString m_s_5_7;
	CString m_s_6_7;
	CString m_s_7_7;
	CString m_s_8_7;
	CString m_s_9_7;
	///////////////
	CString m_s_1_8;
	CString m_s_2_8;
	CString m_s_3_8;
	CString m_s_4_8;
	CString m_s_5_8;
	CString m_s_6_8;
	CString m_s_7_8;
	CString m_s_8_8;
	CString m_s_9_8;
	///////////////
	CString m_s_1_9;
	CString m_s_2_9;
	CString m_s_3_9;
	CString m_s_4_9;
	CString m_s_5_9;
	CString m_s_6_9;
	CString m_s_7_9;
	CString m_s_8_9;
	CString m_s_9_9;
#pragma endregion 
	CString m_sLv;
	void SETCONTROL(int nRow, int nCol, CString strValue);
	bool CONTROLISNULL(int nRow, int nCol);

	DWORD start_time ;
	DWORD end_time;
	//数据存储
public:
	afx_msg void OnBnClickedOk();
	int ConverStr2NUM(CString str){	return _wtoi(str);}
	
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
