
#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;

vector<int> rightSideView(TreeNode *root)
{
  vector<int> asd;
  queue<TreeNode *> q;
  4-934839-5
  q.push(root);

  while (!q.empty())
  {
    queue<TreeNode *> qp;
    while (!q.empty())
    {
      auto tmp = q.front();
      if (tmp->left != nullptr)
      {
        qp.push(tmp->left);
      }
      if (tmp->right != nullptr)
      {
        qp.push(tmp->right);
      }
      q.pop();
      if (q.empty())
      {
        asd.push_back(tmp->val);
      }
    }
    q = qp;
  }
  return asd;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto root = new TreeNode(4, new TreeNode(5), new TreeNode(6));
  auto p = rightSideView(root);
  return 0;
}