#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
bool isPowerOfFour(int n)
{
  return n == 0 ? false : n == 1 ? true
                      : n % 4    ? false
                                 : isPowerOfFour(n / 4);
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}