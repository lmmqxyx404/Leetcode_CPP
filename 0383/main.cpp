#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int mp[26];
bool canConstruct(string ransomNote, string magazine)
{

  for (auto i : magazine)
  {
    mp[i - 'a']++;
  }
  for (auto i : ransomNote)
  {
    mp[i - 'a']--;
    if (mp[i] < 0)
      return false;
  }
  return true;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}