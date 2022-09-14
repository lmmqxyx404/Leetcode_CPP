#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
TreeNode *buildtree(vector<int> &nums, int left, int right)
{
  if (left <= right)
  {
    if (left == right)
    {
      auto root = new TreeNode(nums[left]);
      return root;
    }
    else
    {
      int mid = (left + right) / 2;
      auto root = new TreeNode(nums[mid]);
      root->left = buildtree(nums, left, mid - 1);
      root->right = buildtree(nums, mid + 1, right);
      return root;
    }
  }
  else
  {
    return nullptr;
  }
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
  return buildtree(nums, 0, nums.size() - 1);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> a{-10, -3, 0, 5, 9};
  auto root = sortedArrayToBST(a);
  return 0;
}