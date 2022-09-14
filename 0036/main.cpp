#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
bool isValid(vector<vector<char>> &board, int row, int col)
{
  if (row > 8)
    return true;
  if (col > 8)
    return isValid(board, row + 1, 0);
  if (board[row][col] == '.')
    return isValid(board, row, col + 1);
  for (size_t i = 0; i < 9; i++)
  {
    char cur = board[row][col];
    if (i != row && board[i][col] == cur)
      return false;
    if (i != col && board[row][i] == cur)
      return false;
    int blockrow = row / 3 * 3, blockcol = col / 3 * 3;
    int realrow = blockrow + i / 3, realcol = blockcol + i % 3;
    if (realrow != row && realcol != col && board[realrow][realcol] == cur)
      return false;
  }
  return isValid(board, row, col + 1);
}
bool isValidSudoku(vector<vector<char>> &board)
{
  return isValid(board, 0, 0);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}