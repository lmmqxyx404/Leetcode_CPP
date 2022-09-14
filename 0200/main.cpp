#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;

int row, col, res;
bool is_valid(int x, int y)
{
  return x >= 0 && x <= row && y >= 0 && y <= col;
}
void DFS(int x, int y, vector<vector<char>> &grid)
{
  grid[x][y] = '2';
  for (size_t i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
      int tmpx = x + ((i ? 1 : 0) * (j ? 1
                                       : -1)),
          tmpy = y + ((i ? 0 : 1) * (j ? 1
                                       : -1));
      if (is_valid(tmpx, tmpy) && grid[tmpx][tmpy] == '1')
        DFS(tmpx, tmpy, grid);
    }
  }
}
int numIslands(vector<vector<char>> &grid)
{
  row = grid.size(), col = grid[0].size(), res = 0;
  for (size_t i = 0; i < row; i++)
  {
    for (size_t j = 0; j < col; j++)
    {
      if (grid[i][j] == '1')
      {
        res++;
        DFS(i, j, grid);
      }
    }
  }
  return res;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  
  return 0;
}