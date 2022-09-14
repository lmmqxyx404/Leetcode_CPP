#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
void solveSudoku(vector<vector<char>> &board)
{
  unordered_map<int, vector<char>> mp;
  for (size_t i = 0; i < 9; i++)
  {
    for (size_t j = 0; j < 9; j++)
    {
      if (board[i][j] == '.')
      {
        int index = i * 10 + j;
        bool visit[10];
        memset(visit, false, sizeof(visit));
        for (size_t k = 0; k < 9; k++)
        {
          if (board[i][k] != '.')
          {
            visit[board[i][k] - '0'] = true;
          }
          if (board[k][j] != '.')
          {
            visit[board[k][j] - '0'] = true;
          }
          int row = k % 3, col = k / 3;
          if (board[i / 3 * 3 + row][j / 3 * 3 + col] != '.')
          {
            visit[board[i / 3 * 3 + row][j / 3 * 3 + col] - '0'] = true;
          }
        }
        vector<char> tmp;
        for (int i = 1; i <= 9; i++)
        {
          if (!visit[i])
            tmp.push_back((char)('0' + i));
        }
        mp.insert({i * 10 + j, tmp});
      }
    }
  }
  if (!mp.empty())
  {
    for (auto i : mp)
    {
      if (i.second.size() == 1)
      {
        board[i.first / 10][i.first % 10] = i.second.front();
      }
    }
    solveSudoku(board);
  }
}
// 验证当前位置填入的字符是否符合sudu要求
bool isValid(vector<vector<char>> &board, int row, int col, char test)
{
  for (size_t i = 0; i < 9; i++)
  {
    // 行列验证
    if (board[row][i] == test || board[i][col] == test)
      return false;
    int blockl = row / 3 * 3, blockr = col / 3 * 3;
    if (board[blockl + i / 3][blockr + i % 3] == test)
      return false;
  }
  return true;
}
// 不断试着填入字符
bool helper(vector<vector<char>> &board, int row, int col)
{
  // 从0行开始
  // 超过8行 就可以结束了。
  if (row == 9)
    return true;
  // 到达第9列后，要换行
  if (col == 9)
    return helper(board, row + 1, 0);
  // 当前位置有有效数字则 去尝试下一个位置
  if (board[row][col] != '.')
    return helper(board, row, col + 1);
  // 当前位置从1开始枚举到9
  for (char i = '1'; i <= '9'; i++)
  {
    // 验证当前位置数字的有效性
    // 如果无效，换下一个数字
    if (isValid(board, row, col, i))
    {
      // 有效，则当前位置数字确定
      board[row][col] = i;
      // 之后位置数字都有效，则当前位置最终答案就是此时的i
      if (helper(board, row, col + 1))
        return true;
      // 否则重置当前位置上的数字为‘.’
      else
        board[row][col] = '.';
    }
  }
  // 9个数字都无效，则返回false。
  return false;
}

void solveSudoku2(vector<vector<char>> &board)
{
  helper(board, 0, 0);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}