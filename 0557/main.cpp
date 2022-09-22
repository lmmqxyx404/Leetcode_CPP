#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
string reverseWords(string s)
{
  s = s + " ";
  int ll = 0;
  string res;
  for (size_t i = 0; i < s.size(); i++)
  {
    if (s[i] == ' ')
    {
      auto str = s.substr(ll, i - ll);
      reverse(str.begin(), str.end());
      if (res == "")
      {
        res += str;
      }
      else
      {
        res = res + " " + str;
      }
      ll = i + 1;
    }
  }
  return res;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}