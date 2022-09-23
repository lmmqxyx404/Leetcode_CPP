#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int get_even_total(vector<int> &nums)
{
  int res = 0;
  for (auto &i : nums)
  {
    if (!(abs(i) % 2))
      res += i;
  }
  return res;
}
vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
{
  vector<int> ans;
  auto tmp = get_even_total(nums);
  for (auto &qq : queries)
  {
    if (abs(nums[qq[1]]) % 2)
    {
      nums[qq[1]] += qq[0];
      if (abs(qq[0]) % 2)
      {
        tmp += nums[qq[1]];
      }
      ans.push_back(tmp);
    }
    else
    {
      if (abs(qq[0]) % 2)
      {
        tmp -= nums[qq[1]];
      }
      else
      {
        tmp += qq[0];
      }
      nums[qq[1]] += qq[0];
      ans.push_back(tmp);
    }
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