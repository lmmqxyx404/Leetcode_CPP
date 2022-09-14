#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
    int gcd(int p, int q)
  {
    return q == 0 ? p : gcd(q, p % q);
  }
  int mirrorReflection(int p, int q)
  {
    int gcd_pq = p / gcd(p, q) * q;
    int times = gcd_pq / q;
    if (times % 2)
    {
      return (times * q / p) % 2 ? 1 : 0;
    }
    else
    {
      return 2;
    }
    return -1;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  cout << Solution::mirrorReflection(3, 1);
  return 0;
}