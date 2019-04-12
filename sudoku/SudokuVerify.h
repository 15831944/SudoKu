#pragma once
#include <vector>
using namespace std;


class CSudokuVerify
{
public:
	CSudokuVerify(int data[9][9]);
	
public:
	bool VerifyData();
	void CreatSudoKu();
private:
	// sudoku data
	int m_data[9][9];

	//verify
	bool VerifyRow();
	bool VerifyCol();
	bool VerifyRectangle();

};
bool IsRightPlace(vector<vector<int>> &num, int row, int col);
bool generate_core(vector<vector<int>> &num, int row, int col);
void aprint(const vector<vector<int>> &num);

