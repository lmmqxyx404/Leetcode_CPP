#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int minSetSize(vector<int> &arr)
{
  int target = arr.size() / 2, ans = 0;
  unordered_map<int, int> mp;
  vector<int> v;
  for (auto i : arr)
  {
    mp[i]++;
  }
  for (auto i : mp)
  {
    v.push_back(i.first);
  }
  sort(v.begin(), v.end(), [&mp](int x, int y) -> bool
       { return mp[x] > mp[y]; });
  for (auto i : v)
  {
    target -= mp[i];
    ans++;
    if (target <= 0)
    {
      return ans;
    }
  }
  return -1;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> v{3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
  cout << minSetSize(v);
  return 0;
}