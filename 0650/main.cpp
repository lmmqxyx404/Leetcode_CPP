#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int dp[1010];
int get_factor(int x)
{
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
      return i;
  }
  return 1;
}
int minSteps(int n)
{
  dp[1] = 0;
  dp[2] = 2;
  if (n <= 2)
    return dp[n];
  auto nfactor = get_factor(n);
  if (nfactor == 1)
    return n;

  for (int i = 3; i <= n / nfactor; i++)
  {
    int ifactor = get_factor(i);
    if (ifactor == 1)
    {
      dp[i] = i;
    }
    else
    {
      dp[i] = min(dp[ifactor] + i / ifactor, dp[i / ifactor] + ifactor);
    }
  }
  return min(dp[n / nfactor] + nfactor, dp[nfactor] + n / nfactor);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  // cout << minSteps(1) << endl;
  for (int i = 1; i <= 105; i++)
  {
    cout << minSteps(i) << endl;
  } 
  return 0;
}