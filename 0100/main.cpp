
#include "bits/stdc++.h"
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool isSameTree(TreeNode *p, TreeNode *q)
{
  if (p == nullptr && q == nullptr)
    return true;
  else if (p != nullptr && q != nullptr)
  {
    if (p->val == q->val)
      return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    return false;
  }
  else
    return false;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  TreeNode *q = new TreeNode(4);
  TreeNode *p = nullptr;

  return 0;
}