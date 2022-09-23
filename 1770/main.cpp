#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int maximumScore(vector<int> &nums, vector<int> &multipliers)
{
  int ans = 0, lpoint = 0, rmpoints = multipliers.size() - 1, rnpoint = nums.size() - 1;
  // sort(nums.begin(), nums.end());
  sort(multipliers.begin(), multipliers.end());
  while (multipliers[lpoint] < 0 && lpoint <= rmpoints)
  {
    ans += multipliers[lpoint] * nums[lpoint];
    lpoint++;
  }
  while (lpoint <= rmpoints && rmpoints >= 0)
  {
    ans += multipliers[rmpoints] * nums[rnpoint];
    rmpoints--;
    rnpoint--;
  }
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}