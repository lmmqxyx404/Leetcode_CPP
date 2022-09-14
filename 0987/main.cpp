#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
struct val_node
{
  int val, x, y;
};
vector<val_node> store;
void dfs(TreeNode *root, int x = 0, int y = 0)
{
  if (root == nullptr)
    return;
  val_node vnode{root->val, x, y};
  store.push_back(vnode);
  dfs(root->left, x + 1, y - 1);
  dfs(root->right, x + 1, y + 1);
}
vector<vector<int>> verticalTraversal(TreeNode *root)
{
  dfs(root);
  val_node vnode{INT_MAX, INT_MAX, INT_MAX};
  store.push_back(vnode);
  sort(store.begin(), store.end(), [](val_node aa, val_node ss)
       { return aa.y == ss.y ? (aa.x == ss.x ? (aa.val < ss.val) : aa.x < ss.x) : aa.y < ss.y; });
  vector<vector<int>> ans;
  vector<int> tmp;
  for (int i = 0; i < store.size() - 1; i++)
  {
    tmp.push_back(store[i].val);
    if (store[i].y != store[i + 1].y)
    {
      ans.push_back(tmp);
      tmp.clear();
    }
  }
  return ans;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}