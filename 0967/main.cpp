#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
vector<int> store, ans;

void dfs(int root, int k, int n)
{
  if (root >= 0 && root < 10)
  {
    store.push_back(root);
    if (store.size() == n)
    {
      int num = 0;
      for (auto i : store)
      {
        num = num * 10 + i;
      }
      ans.push_back(num);
    }
    else
    {
      if (k)
      {
        dfs(root + k, k, n);
      }
      dfs(root - k, k, n);
    }
    store.pop_back();
  }
  else
    return;
}
vector<int> numsSameConsecDiff(int n, int k)
{
  for (int i = 1; i < 10; i++)
  {
    dfs(i, k, n);
  }
  return ans;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto res = numsSameConsecDiff(3, 0);
  return 0;
}