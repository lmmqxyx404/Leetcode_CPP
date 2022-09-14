#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;

void replaceme(vector<int> &nums, int m)
{
  int index = nums.size() / 2;
  int fen = index;
  if (index == 0)
  {
    nums[index] = m;
    return;
  }
  while (true)
  {
    if (nums[0] >= m)
    {
      nums[0] = m;
      return;
    }
    if (nums[index - 1] == m || nums[index] == m)
      return;
    if (nums[index - 1] < m && nums[index] > m)
    {
      nums[index] = m;
      return;
    }
    else if (nums[index - 1] < m && nums[index] < m)
    {
      fen /= 2;
      fen = fen == 0 ? 1 : fen;
      index = index + fen;
    }
    else if (nums[index - 1] > m && nums[index] > m)
    {
      fen /= 2;
      fen = fen == 0 ? 1 : fen;
      index = index - fen;
    }
    else
    {
      cout << "error";
      return;
    }
  }
}
int lengthOfLIS(vector<int> &nums)
{
  vector<int> tmp;
  tmp.push_back(nums[0]);
  int tail = 0;
  for (size_t i = 1; i < nums.size(); i++)
  {
    if (nums[i] > tmp.back())
    {
      tmp.push_back(nums[i]);
    }
    else if (nums[i] < tmp.back())
    {
      replaceme(tmp, nums[i]);
    }
  }
  return tmp.size();
}

int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  /*   vector<int> a{10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(a) << endl;
    vector<int> b{0, 1, 0, 3, 2, 3};
    cout << lengthOfLIS(b) << endl; */
  vector<int> c{4, 10, 4, 3, 8, 9};
  cout << lengthOfLIS(c) << endl;
  return 0;
}