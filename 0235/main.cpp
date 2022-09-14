#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
  if (p->val > q->val)
    swap(p, q);
  if (p->val <= root->val && root->val <= q->val)
  {
    return root;
  }
  else if (q->val < root->val)
  {
    return lowestCommonAncestor(root->left, p, q);
  }
  else
  {
    return lowestCommonAncestor(root->right, p, q);
  }
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(6);
  root->left = new TreeNode(2, new TreeNode(0), new TreeNode(4));
  root->right = new TreeNode(8, new TreeNode(7), new TreeNode(9));
  auto p = new TreeNode(3);
  auto q = new TreeNode(5);
  root->left->right = new TreeNode(4, p, q);
  auto res = lowestCommonAncestor(root, root->left, root->right);
  auto res2 = lowestCommonAncestor(root, p, q);
  return 0;
}