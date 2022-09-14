#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
const long long int MAX_NUM = 10e12;
const long long int MIN_NUM = -10e12;

bool DFSpre(TreeNode *root, long long int max_num = 10e12, long long int min_num = -10e12)
{
  if (root != nullptr)
  {
    return root->val > min_num && root->val < max_num && DFSpre(root->left, root->val, min_num) && DFSpre(root->right, max_num, root->val);
  }
  else
  {
    return true;
  }
}

bool isValidBST(TreeNode *root)
{
  return DFSpre(root);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(5);
  auto root2 = new TreeNode(4);
  auto root3 = new TreeNode(6);
  auto root4 = new TreeNode(3);
  auto root5 = new TreeNode(7);
  root->left = root2;
  root->right = root3;
  root3->left = root4;
  root3->right = root5;
  cout << isValidBST(root);
  return 0;
}