#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  vector<int> vv;
  // int nn, kk, target, ans;
  const int mod_num = 1e9 + 7;
  int dp[32][1010];
  int solve(int n, int k, int target)
  {
    if (target < 1)
      return 0;
    if (n == 1)
    {
      return target <= k ? 1 : 0;
    }
    long long total = (long long)n * (long long)k;
    if (total < target)
      return 0;
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
      dp[n - 1][target - i] = dp[n - 1][target - i] == 0 ? solve(n - 1, k, target - i) : dp[n - 1][target - i];
      ans = (ans + dp[n - 1][target - i]) % mod_num;
    }
    return ans;
  }
  int numRollsToTarget(int n, int k, int target)
  {
    return solve(n, k, target);
  }
};
int main()
{
#ifndef ONLINE_JUDGE
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
#endif
  //  ios::sync_with_stdio(false);
  auto ans = new Solution();
  // cout << ans->numRollsToTarget(1, 6, 3) << endl;
  // cout << ans->numRollsToTarget(2, 6, 7) << endl;
  cout << ans->numRollsToTarget(30, 30, 500) << endl;
  // cout << ans->numRollsToTarget(10, 3, 20) << endl;
  return 0;
}