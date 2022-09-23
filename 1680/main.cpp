#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
const int mod = 1e9 + 7;
int get_mod(int exp)
{
  return exp ? 2 * get_mod(exp - 1) % mod : 1;
  /* long long int ans = 1;
  while (exp > 30)
  {
    ans = (ans * (long long int)(pow(2, 30)) % mod) % mod;
    exp -= 30;
  }
  return (ans * (long long int)(pow(2, exp)) % mod) % mod; */
}
string num_string(int ii, string ans = "")
{
  return ii ? num_string(ii / 2) + (ii % 2 ? "1" : "0") : ans;
}
int num_bit(int xx)
{
  return xx ? 1 + num_bit(xx / 2) : 0;
}
int concatenatedBinary(int n)
{
  long long int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    auto bin_len = num_bit(i);
    
    ans = ((ans << bin_len) % mod + i) % mod;
  }

  /* string str;
  for (int i = 1; i <= n; i++)
  {
    str += num_string(i);
  }
  int str_len = str.size(), ans = 0;

  for (int i = 0; i < str_len; i++)
  {
    if (str[i] == '1')
    {
      int exp = str_len - i - 1;
      ans = (ans + get_mod(exp)) % mod;
    }
  } */
  return ans;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  cout << concatenatedBinary(12) << endl;
  cout << concatenatedBinary(3);
  return 0;
}