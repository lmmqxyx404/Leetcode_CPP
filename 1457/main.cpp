#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int ans, mmmp[11];
bool is_palindromic2()
{
  int odd_num = 0;
  for (int i = 1; i < 10; i++)
  {
    if (mmmp[i] % 2)
    {
      odd_num++;
      if (odd_num > 1)
        return false;
    }
    /* code */
  }
  return true;
}
void dfs(TreeNode *root)
{
  mmmp[root->val]++;
  bool flag_left = false, f_right = false;
  if (root->left != nullptr)
  {
    dfs(root->left);
  }
  else
  {
    flag_left = true;
  }
  if (root->right != nullptr)
  {
    dfs(root->right);
  }
  else
  {
    f_right = true;
  }
  ans += flag_left && f_right && is_palindromic2();
  mmmp[root->val]--;
}
int pseudoPalindromicPaths(TreeNode *root)
{
  if (root == nullptr)
    return 0;
  dfs(root);
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto rll = new TreeNode(1, new TreeNode(1), new TreeNode(3, nullptr, new TreeNode(1)));
  auto rrr = new TreeNode(1);
  auto root = new TreeNode(2, rll, rrr);
  // cout << pseudoPalindromicPaths(new TreeNode(9));
  cout << pseudoPalindromicPaths(root);
  return 0;
}