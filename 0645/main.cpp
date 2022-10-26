#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  bool visit[10024];
  vector<int> findErrorNums(vector<int> &nums)
  {
    vector<int> ans;
    int total = 0;
    for (auto &i : nums)
    {
      if (visit[i])
        ans.push_back(i);
      else
      {
        visit[i] = true;
        total += i;
      }
    }
    ans.push_back(nums.size() * (nums.size() - 1) / 2 - total);
    return ans;
  }
  /*
  vector<int> findErrorNums(vector<int> &nums)
  {
    vector<int> ans;
    for (auto &i : nums)
    {
      if (visit[i])
        ans.push_back(i);
      else
        visit[i] = true;
    }
    for (int i = 1; i <= nums.size(); i++)
    {
      if (!visit[i])
      {
        ans.push_back(i);
      }
    }
    return ans;
  }
  */
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}