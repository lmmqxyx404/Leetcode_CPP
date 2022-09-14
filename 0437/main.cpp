#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int ans;
int initialTareget;
vector<int> tmppath;

void dfs(TreeNode *root, int targetSum, bool select = true)
{
  if (root == nullptr)
  {
    for (auto i : tmppath)
    {
      cout << i << " ";
    }
    cout << endl;
    return;
  }
  else
  {
    if (targetSum == 0)
    {
      for (auto i : tmppath)
      {
        cout << i << " ";
      }
      cout << endl;
      ans++;
      // dfs(root->left, initialTareget, false);
      // dfs(root->right, initialTareget, false);
    }

    tmppath.push_back(root->val);
    dfs(root->left, targetSum - root->val);
    dfs(root->right, targetSum - root->val);
    tmppath.pop_back();
    dfs(root->left, initialTareget);
    dfs(root->right, initialTareget);
  }
}

int pathSum(TreeNode *root, int targetSum)
{
  initialTareget = targetSum;
  dfs(root, targetSum, false);
  return ans;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(10);
  root->left = new TreeNode(5);
  root->right = new TreeNode(15);
  root->left->left = new TreeNode(15);
  root->left->left->left = new TreeNode(15);
  cout << pathSum(root, 15);
  return 0;
}