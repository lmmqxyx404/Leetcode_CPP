#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int uniquePaths(int m, int n)
{
  int dp[110][110];
  for (size_t i = 1; i <= m || i <= n; i++)
  {
    dp[i][1] = 1;
    dp[1][i] = 1;
  }
  for (size_t i = 2; i <= m; i++)
  {
    for (size_t j = 2; j <= n; j++)
    {
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }
  return dp[m][n];
  // return (m == 1 || n == 1) ? 1 : uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  cout << uniquePaths(3, 7) << endl;
  return 0;
}