#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int ans;
long long int dp[1024], ans2;
void DFS(vector<int> &nums, int target, vector<int> &tmp, int tmpsum = 0)
{
  if (tmpsum == target)
  {
    ans++;
    return;
  }
  else if (tmpsum < target)
  {
    for (auto i : nums)
    {
      tmp.push_back(i);
      DFS(nums, target, tmp, tmpsum + i);
      tmp.pop_back();
    }
  }
}

int calc(vector<int> &nums, int target)
{
  if (target == 0)
  {
    return 1;
  }
  else if (target < 0)
  {
    return 0;
  }
  else
  {
    if (dp[target] != 0)
    {
      return dp[target];
    }
    for (auto i : nums)
    {
      if (target < i)
      {
        break;
      }
      dp[target] += calc(nums, target - i);
    }
    // cout << "target is " << target << " val is " << dp[target] << endl;
    return dp[target];
  }
}
int combinationSum4(vector<int> &nums, int target)
{
  sort(nums.begin(), nums.end());
  for (auto i = nums.begin(); i != nums.end(); i++)
  {
    if (*i > target)
    {
      nums.erase(i, nums.end());
      break;
    }
  }
  dp[0] = 1;
  for (int i = 0; i <= target; i++)
  {
    if (dp[i] > 0)
    {
      for (auto j : nums)
      {
        if (j + i <= target)
          dp[j + i] += dp[i];
      }
    }
  }
  return dp[target];
  /*
  for (int i = 0; i <= target; i++)
  {
    for (auto j : nums)
    {
      if (j > i)
        break;
      else
      {

        dp[i] += dp[i - j];
        if (dp[i] > (1 << 30))
        {
          dp[i] = 1;
        }
      }
    }
    cout << i << " is " << dp[i] << endl;
  }
  */
  return dp[target];
}

int combinationSum5(vector<int> &nums, int target)
{
  int ans = 0;
  if (target == 0)
    return 1;
  if (target < 0)
    return ans;
  for (auto i : nums)
  {
    if (target - i < 0)
      return ans;
    ans += combinationSum5(nums, target - i);
  }
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> v;
  while (true)
  {
    int tmp;
    scanf("%d", &tmp);
    if (tmp != 4)
    {
      v.push_back(tmp);
    }
    else
    {
      break;
    }
  }
  cout << combinationSum4(v, 4) << endl;
  return 0;
}