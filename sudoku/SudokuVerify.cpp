#include "stdafx.h"
#include "SudokuVerify.h"






CSudokuVerify::CSudokuVerify(int data[9][9])
{

	for (int i = 0; i < 9;i++)
	{
		for (int j = 0; j < 9;j++)
		{
			m_data[i][j] = data[i][j];
		}
	}
}

bool CSudokuVerify::VerifyData()
{
	if (VerifyCol() && VerifyRow() && VerifyRectangle())
	{
		return true;
	}
	return false;
}

void CSudokuVerify::CreatSudoKu()
{

}

bool CSudokuVerify::VerifyRow()
{
	for (int i = 0; i < 9;i++)
	{
		int tempData[9] = { m_data[i][0], m_data[i][1], m_data[i][2], m_data[i][3],
			m_data[i][4], m_data[i][5], m_data[i][6], m_data[i][7], m_data[i][8]};
		int tempVerify[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		for (auto a:tempData)
		{
			if (a > 9 || a < 1)
			{
				return false;
			}
			tempVerify[a-1] = 1;

		}
		for (auto a:tempVerify)
		{
			if (a==0)
			{
				return false;
			}
		}
	}
	return true;
}

bool CSudokuVerify::VerifyCol()
{
	for (int i = 0; i < 9; i++)
	{
		int tempData[9] = { m_data[0][i], m_data[1][i], m_data[2][i], m_data[3][i],
			m_data[4][i], m_data[5][i], m_data[6][i], m_data[7][i], m_data[8][i] };
		int tempVerify[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		for (auto a : tempData)
		{
			if (a>9||a<1)
			{
				return false;
			}
			tempVerify[a-1] = 1;

		}
		for (auto a : tempVerify)
		{
			if (a == 0)
			{
				return false;
			}
		}
	}
	return true;
}

bool CSudokuVerify::VerifyRectangle()
{
	const int scale = 3;
	for(int j = 0; j < 3;j++)
	{
		for (int k = 0; k < 3;k++)
		{
			int tempData[9] = { m_data[0 + j*scale][0 + k*scale], m_data[0 + j*scale][1+k * scale], m_data[0 + j*scale][2 + k*scale],
				m_data[1 + j*scale][0 + k*scale], m_data[1 + j*scale][1 + k*scale],
				m_data[1 + j*scale][2 + k*scale], m_data[2 + j*scale][0 + k*scale],
				m_data[2 + j*scale][1 + k*scale], m_data[2 + j*scale][2 + k*scale] };

			int tempVerify[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			for (auto a : tempData)
			{
				if (a > 9 || a < 1)
				{
					return false;
				}
				tempVerify[a-1] = 1;

			}
			for (auto a : tempVerify)
			{
				if (a == 0)
				{
					return false;
				}
			}
		}
	}
	return true;
}

#include <iostream>
bool IsRightPlace(vector<vector<int>>&num, int row, int col)
{
	int n = num[row][col];
	for (int i = 0; i < row; i++)
	{
		if (num[i][col] == n)
			return false;
	}
	for (int i = 0; i < col; i++)
	{
		if (num[row][i] == n)
			return false;
	}
	int row_start = row / 3;
	row_start *= 3;
	int row_end = row_start + 2;
	int col_start = col / 3;
	col_start *= 3;
	int col_end = col_start + 2;
	int i = row_start, j = col_start;
	for (int k = 1; k <= 8; k++)
	{
		if (row != i || col != j)
		{
			if (num[i][j] == n)
				return false;
		}
		else
			break;
		if (j == col_end)
		{
			j = col_start;
			i = i + 1;
		}
		else
		{
			j = j + 1;
		}
	}
	return true;
}
bool generate_core(vector<vector<int>> &num, int row, int col)
{
	vector<int> number;
	for (int i = 1; i <= 9; i++)
		number.emplace_back(i);
	while (!number.empty())
	{
		int randindex = rand() % number.size();
		int randnum = number[randindex];
		number.erase(number.begin() + randindex);
		num[row][col] = randnum;
		if (IsRightPlace(num, row, col) == false)
			continue;
		if (row == 9 - 1 && col == 9 - 1)
		{
			return true;
		}
		int nextrow, nextcol;
		if (col == 9 - 1)
		{
			nextrow = row + 1;
			nextcol = 0;
		}
		else
		{
			nextrow = row;
			nextcol = col + 1;
		}
		bool next = generate_core(num, nextrow, nextcol);
		if (next)
			return true;
	}
	if (number.empty())
	{
		num[row][col] = -5;
		return false;
	}
	return true;
}
void aprint(const vector<vector<int>> &num)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << num[i][j] << " ";
		}
		cout << endl;
	}
}