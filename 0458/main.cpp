#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int dp[20048][6];
const int mod = 1e9 + 7;
int countVowelPermutation(int n)
{
  for (size_t i = 1; i <= 5; i++)
  {
    dp[1][i] = 1;
  }
  for (size_t i = 2; i <= n; i++)
  {
    dp[i][1] = (dp[i - 1][2]) % mod;
    dp[i][2] = (dp[i - 1][1] + dp[i - 1][3]) % mod;
    dp[i][3] = ((dp[i - 1][1] + dp[i - 1][2]) % mod + (dp[i - 1][4] + dp[i - 1][5]) % mod) % mod;
    dp[i][4] = (dp[i - 1][3] + dp[i - 1][5]) % mod;
    dp[i][5] = (dp[i - 1][1]) % mod;
  }
  int ans = 0;
  for (size_t i = 1; i <= 5; i++)
  {
    ans = (ans + dp[n][i]) % mod;
  }
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  cout << countVowelPermutation(1) << endl;
  
  return 0;
}