#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
const int mindiff = 0x7fffffff;
vector<int> vec;
void dfs(TreeNode *root)
{
  if (root == nullptr)
  {
    return;
  }
  else
  {
    dfs(root->left);
    vec.push_back(root->val);
    dfs(root->right);
  }
}
int minDiffInBST(TreeNode *root)
{
  dfs(root);
  for (size_t i = 1; i < vec.size(); i++)
  {
    mindiff = min(mindiff, abs(vec[i] - vec[i - 1]));
  }
  return mindiff;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}