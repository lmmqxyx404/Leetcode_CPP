#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int sum;
void dfs(TreeNode *root, bool isLeft = false)
{
  if (root == nullptr)
    return;
  else
  {
    if (root->left == nullptr && root->right == nullptr)
    {
      if (isLeft)
      {
        sum += root->val;
      }
      return;
    }
    /* else if (root->left == nullptr)
    {
      dfs(root->right, false);
    }
    else if (root->right == nullptr)
    {
      dfs(root->left, true);
    } */
    else
    {
      dfs(root->right, false);
      dfs(root->left, true);
    }
  }
}
int sumOfLeftLeaves(TreeNode *root)
{
  dfs(root);
  return sum;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(5);
  cout << sumOfLeftLeaves(root) << endl;
  root->right = new TreeNode(6);
  cout << sumOfLeftLeaves(root) << endl;

  return 0;
}