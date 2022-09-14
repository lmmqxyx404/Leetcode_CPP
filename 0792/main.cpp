#include "bits/stdc++.h"
using namespace std;
class Solution
{
public:
  bool isSub(unordered_multimap<char, int> mp, string sub)
  {
    for (auto i : sub)
    {
      auto j = mp.find(i);
      if (j != mp.end())
      {
        mp.erase(j);
      }
      else
      {
        return false;
      }
    }
    return true;
  }
  bool search(string s, string sub)
  {
    int slen = s.size(), subl = sub.size();
    int s1 = 0, s2 = 0;
    while (s1 < slen && s2 < subl)
    {
      if (s[s1] == sub[s2])
      {
        s1++;
        s2++;
      }
      else
      {
        s1++;
      }
    }
    return s2 == subl;
  }
  int numMatchingSubseq(string s, vector<string> &words)
  {
    int res = 1;
    unordered_multimap<char, int> ump;
    for (auto i : s)
    {
      ump.insert({i,-`7 res++});
    }
    res = 0;

    unordered_map<string, int> mp;
    for (auto i : words)
      mp[i]++;
    for (auto i : mp)
    {
      if (search(s, i.first))
      {
        res = res + i.second;
      }
    }
    return res;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}