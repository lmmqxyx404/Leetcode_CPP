#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;

int numFactoredBinaryTrees(vector<int> &arr)
{
  const int mod_num = 1e9 + 7;
  sort(arr.begin(), arr.end());
  unordered_map<int, long long int> mp;
  for (auto i : arr)
    mp.insert({i, 1});
  for (int i = 1; i < arr.size(); i++)
  {
    for (size_t j = 0; j < i; j++)
    {
      if (arr[i] % arr[j] == 0)
      {
        int div = arr[i] / arr[j];
        if (!mp.count(div))
          continue;
        mp[arr[i]] = mp[arr[i]] + (mp[div] * mp[arr[j]]) % mod_num;
        mp[arr[i]] %= mod_num;
      }
    }
  }
  long long int ans = 0;
  for (auto i : mp)
    ans = (ans + i.second) % mod_num;
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> a{46, 144, 5040, 4488, 544, 380, 4410, 34, 11, 5, 3063808, 5550, 34496, 12, 540, 28, 18, 13, 2, 1056, 32710656, 31, 91872, 23, 26, 240, 18720, 33, 49, 4, 38, 37, 1457, 3, 799, 557568, 32, 1400, 47, 10, 20774, 1296, 9, 21, 92928, 8704, 29, 2162, 22, 1883700, 49588, 1078, 36, 44, 352, 546, 19, 523370496, 476, 24, 6000, 42, 30, 8, 16262400, 61600, 41, 24150, 1968, 7056, 7, 35, 16, 87, 20, 2730, 11616, 10912, 690, 150, 25, 6, 14, 1689120, 43, 3128, 27, 197472, 45, 15, 585, 21645, 39, 40, 2205, 17, 48, 136};
  cout << numFactoredBinaryTrees(a);
  return 0;
}