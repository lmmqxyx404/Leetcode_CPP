#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
bool dfs(TreeNode *root)
{
  if (root == nullptr)
    return false;

  bool flag = true, flag2 = true;
  if (!dfs(root->left))
  {
    flag = false;
    root->left = nullptr;
  }
  if (!dfs(root->right))
  {
    flag2 = false;
    root->right = nullptr;
  }
  if (root->val == 1)
    return true;
  return flag || flag2;
}
TreeNode *pruneTree(TreeNode *root)
{
  return dfs(root) ? root : nullptr;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}