
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void nQueens(vector<vector<string>> &rst, vector<string> &curRst, int row, int n)
{
  if (row == n)
  {
    rst.push_back(curRst);
    return;
  }
  for (int i = 0; i < n; i++)
  {
    bool flag = true;
    for (int j = 0; j < row; j++)
    {
      // 竖向是否存在
      if (curRst[j][i] == 'Q')
      {
        flag = false;
        break;
      }

      // 右斜方
      if ((i + (row - j) >= 0) && (i + (row - j) <= n - 1) && curRst[j][i + (row - j)] == 'Q')
      {
        flag = false;
        break;
      }
      // 左斜方
      if ((i - (row - j) >= 0) && (i - (row - j) <= n -1) && curRst[j][i - (row - j)] == 'Q')
      {
        flag = false;
        break;
      }
    }

    if (flag)
    {
      curRst[row++][i] = 'Q';
      nQueens(rst, curRst, row, n);
      curRst[--row][i] = '.';
    }
  }
}

int main(int argc, char **argv)
{
  int n = 8;
  vector<vector<string>> rst;
  vector<string> curRst(n, string(n, '.'));

  nQueens(rst, curRst, 0, n);

  for (int i = 0; i < rst.size(); i++)
  {
    cout << "========" << endl;
    for (int j = 0; j < rst[i].size(); j++)
    {
      cout << rst[i][j] << endl;
    }
  }
  cout << "========total: " << rst.size() << endl;
}