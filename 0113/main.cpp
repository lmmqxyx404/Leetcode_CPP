#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int target, total;

vector<vector<int>> ans;
vector<int> tmp;
void dfs(TreeNode *root)
{
  tmp.push_back(root->val);
  total += root->val;
  if (root->left == nullptr && root->right == nullptr)
  {
    if (total == target)
      ans.push_back(tmp);
  }
  if (root->left != nullptr)
    dfs(root->left);
  if (root->right != nullptr)
    dfs(root->right);
  total -= root->val;
  tmp.pop_back();
}
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
  target = targetSum;
  if (root != nullptr)
    dfs(root);
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}