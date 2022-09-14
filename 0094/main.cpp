#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
void inorder(TreeNode *root, vector<int> &res)
{
  if (root == nullptr)
    return;
  inorder(root->left, res);
  res.push_back(root->val);
  inorder(root->right, res);
}
vector<int> inorderTraversal(TreeNode *root)
{
  vector<int> res;
  inorder(root, res);
  return res;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3, nullptr, nullptr), nullptr));
  auto result = inorderTraversal(root);
  return 0;
}