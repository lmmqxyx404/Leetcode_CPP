#include "bits/stdc++.h"
#include "common.h"
using namespace std;

int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
{
  int ans = 0;
  int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
  int xxl = matrix.size(), yyl = matrix[0].size();
  vector<int> prefix(xxl, 0);
  for (size_t x1 = 0; x1 < xxl; x1++)
  {
    for (size_t y1 = 0; y1 < yyl; y1++)
    {
      for (size_t x2 = x1; x2 < xxl; x2++)
      {
        for (size_t y2 = y1; y2 < yyl; y2++)
        {
          int tmp = 0;
          for (size_t i = x1; i <= x2; i++)
          {
            for (size_t j = y1; j <= y2; j++)
            {
              tmp += matrix[i][j];
            }
          }
          if (tmp == target)
          {
            ans++;
          }
        }
      }
    }
  }
  return ans;
}

int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  int a[102][103] = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}}, target = 0;

  return 0;
}