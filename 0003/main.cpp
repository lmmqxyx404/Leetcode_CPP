#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int lengthOfLongestSubstring(string s)
{
  unordered_map<char, int> mp;
  int left = 0;
  int ans = 0;
  for (size_t i = 0; i < s.size(); i++)
  {
    if (mp.count(s[i]))
      if (mp[s[i]] < left)
        ans = max(ans, (int)i - left + 1);
      else
        left = mp[s[i]] + 1;
    else
      ans = max(ans, (int)i - left + 1);
    mp[s[i]] = i;
  }
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  deque<int> dq;
  dq.push_back(1);
  dq.push_back(12);
  dq.push_back(32);
  dq.push_back(41);
  cout << lengthOfLongestSubstring("pwwkew") << endl;
  cout << lengthOfLongestSubstring("abcabcbb") << endl;
  cout << lengthOfLongestSubstring("tmmzuxt") << endl;
  return 0;
}