#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    if (nums.size() < 3)
      return false;
    int left_num = INT_MAX, mid_num = INT_MAX;
    for (size_t i = 0; i < nums.size(); i++)
    {
      if (nums[i] > mid_num)
        return true;
      else if (nums[i] > left_num && nums[i] < mid_num)
      {
        mid_num = nums[i];
      }
      else if (nums[i] < left_num)
      {
        left_num = nums[i];
      }
    }
    return false;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto pp = new Solution;

  vector<int> oo{5, 4, 3, 2, 1};
  cout << pp->increasingTriplet(oo);
  return 0;
}