#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int maxtrue, maxfalse;
tuple<int, int> dfsrob(TreeNode *root, bool status = true)
{
  if (root == nullptr)
  {
    return tuple<int, int>{0, 0};
  }
  else
  {
    auto [a, b] = dfsrob(root->left);
    auto [c, d] = dfsrob(root->right);
    int robroot = root->val + b + d;
    int skiproot = max(a, b) + max(c, d);
    return tuple<int, int>{robroot, skiproot};
  }
}
int rob(TreeNode *root)
{
  auto [a, s] = dfsrob(root);
  return max(a, s);
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(10);
  cout << rob(root);
  return 0;
}