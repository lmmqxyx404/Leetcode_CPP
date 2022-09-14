#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
bool is_palindrome(int x)
{
  string s = "";
  while (x)
  {
    s = s + (char)(x % 10 + '0');
    x /= 10;
  }
  string ss = s;
  reverse(begin(s), end(s));
  return ss == s;
}
bool isPalindrome(int x)
{
  if (x < 0)
    return false;
  if (x == 0)
    return true;
  return is_palindrome(x);
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}