#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int target;
vector<vector<int>> ans;
void dfs(TreeNode *root)
{
}
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
  target = targetSum;
  if (root == nullptr)
    return ans;
  else
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