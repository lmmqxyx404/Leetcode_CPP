#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int dp[1024][1024];
int findLength(vector<int> &nums1, vector<int> &nums2)
{
  if (nums1.size() > nums2.size())
    swap(nums1, nums2);
  int len_nums1 = nums1.size(), len_nums2 = nums2.size(), ans = 0;
  for (int i = 0; i < len_nums1; i++)
  {
    for (int j = 0; j < len_nums2; j++)
    {
      if (nums1[i] == nums2[j])
      {
        if (i - 1 >= 0 && j - 1 >= 0)
        {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        }
        else
        {
          dp[i][j] = 1;
        }
        ans = max(ans, dp[i][j]);
      }
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