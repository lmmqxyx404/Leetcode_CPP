#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int climbStairs(int n)
{
  int dp[50];
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}