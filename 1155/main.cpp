#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  vector<int> vv;
  int nn, kk, target, ans;
  int solve(int n, int k, int target)
  {
    if (target < 0)
      return 0;

    if ((n == 0 && target != 0) || (n != 0 && target == 0))
      return 0;

    if (n == 0 && target == 0)
      return 1;

    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
      ans = ans + solve(n - 1, k, target - i);
    }

    int mod = 1e+7;
    return ans % mod;
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
  //  cout << ans->numRollsToTarget(2, 6, 7) << endl;
  cout << ans->numRollsToTarget(10, 3, 20) << endl;
  return 0;
}