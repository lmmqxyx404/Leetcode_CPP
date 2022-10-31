#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  int row, col;
  bool check_index(int x, int y)
  {
    return x >= 0 && x < row && y >= 0 && y < col;
  }
  bool isToeplitzMatrix(vector<vector<int>> &matrix)
  {
    row = matrix.size();
    col = matrix[0].size();
    for (size_t i = 0; i < row; i++)
    {
      for (size_t j = 0; j < col; j++)
      {
        if (check_index(i - 1, j - 1))
        {
          if (matrix[i][j] != matrix[i - 1][j - 1])
            return false;
        }
      }
    }
    return true;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}