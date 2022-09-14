#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int firstUniqChar(string s)
{
  unordered_map<char, int> mp;
  unordered_map<char, int> pos;
  int index = 0;
  for (auto i : s)
  {
    mp[i]++;
    if (mp[i] == 1)
    {
      pos[i] = index;
    }
    index++;
  }
  for (auto i : s)
  {
    if (mp[i] == 1)
      return pos[i];
  }
  return -1;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}