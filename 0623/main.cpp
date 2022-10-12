#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  int value, ddd;
  void dfs(TreeNode *&root, int cur_depth = 1)
  {
    if (root == nullptr)
      return;
    if (cur_depth == ddd - 1)
    {
      auto left_child = new TreeNode(value, root->left, nullptr);
      auto right_child = new TreeNode(value, nullptr, root->right);
      root->left = left_child;
      root->right = right_child;
      return;
    }
    else
    {
      dfs(root->left, cur_depth + 1);
      dfs(root->right, cur_depth + 1);
    }
  }
  TreeNode *addOneRow(TreeNode *root, int val, int depth)
  {
    if (depth == 1)
    {
      auto res = new TreeNode(val);
      res->left = root;
      return res;
    }
    value = val;
    ddd = depth;
    dfs(root);
    return root;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}