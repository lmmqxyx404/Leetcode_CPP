/*
 * @Author: Lmmqxyx
 * @Date: 2022-07-07 02:03:37
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2022-07-07 02:34:19
 * @FilePath: \Leetcode_C++\0128\main.cpp
 * @Description:
 */

#include "bits/stdc++.h"
using namespace std;
int longestConsecutive(vector<int> &nums)
{
  if (nums.size() < 2)
    return nums.size();
  //
  set<int> tmp;
  for (auto i : nums)
  {
    tmp.insert(i);
  }
  nums.clear();
  for (auto i : tmp)
  {
    nums.push_back(i);
  }
  int pre[10024];
  for (size_t i = 1; i < nums.size(); i++)
  {
    pre[i] = nums[i] - nums[i - 1];
  }
  int ans = -1, tmplength = 1;
  for (size_t i = 1; i < nums.size(); i++)
  {
    if (pre[i] == 1)
    {
      tmplength++;
    }
    else
    {
      ans = ans > tmplength ? ans : tmplength;
      tmplength = 1;
    }
  }
  ans = ans > tmplength ? ans : tmplength;
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> tmp;
  int a;
  while (scanf("%d", &a) != EOF)
  {
    tmp.push_back(a);
  }
  cout << longestConsecutive(tmp);
  return 0;
}