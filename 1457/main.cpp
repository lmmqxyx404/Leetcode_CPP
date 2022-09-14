#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int ans;
bool is_palindromic(vector<int> &sss)
{
  int mp[11] = {0};
  unordered_set<int> st;
  for (auto &i : sss)
  {
    mp[i]++;
    st.insert(i);
  }
  int odd_num;
  for (auto &i : st)
  {
    if (mp[i] % 2)
    {
      odd_num++;
      if (odd_num > 1)
        return false;
    }
  }
  return true;
}
void dfs(TreeNode *root, vector<int> &store)
{
  store.push_back(root->val);
  bool flag_left = false, f_right = false;
  if (root->left != nullptr)
  {
    dfs(root->left, store);
  }
  else
  {
    flag_left = true;
  }
  if (root->right != nullptr)
  {
    dfs(root->right, store);
  }
  else
  {
    f_right = true;
  }
  ans += flag_left && f_right && is_palindromic(store);
  store.pop_back();
}
int pseudoPalindromicPaths(TreeNode *root)
{
  vector<int> store;
  if (root == nullptr)
    return 0;
  dfs(root, store);
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