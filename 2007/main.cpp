#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
vector<int> findOriginalArray(vector<int> &changed)
{
  vector<int> ans;
  if (changed.size() % 2)
    return ans;
  sort(changed.begin(), changed.end());
  unordered_map<int, int> mp;
  for (auto &i : changed)
    mp[i]++;
  for (auto &i : changed)
  {
    if (mp[i] == 0)
      continue;
    mp[i]--;
    mp[i * 2]--;
    if (mp[i * 2] < 0)
      return {};
    else
    {
      ans.push_back(i);
    }
  }
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}