#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int res;

void dfs(TreeNode *root, int max_val = -10024)
{
  if (root == nullptr)
  {
    return;
  }
  else
  {
    if (root->val >= max_val)
    {
      max_val = root->val;
      res++;
    }
    dfs(root->left, max_val);
    dfs(root->right, max_val);
  }
}
int goodNodes(TreeNode *root)
{
  dfs(root);
  return res;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}