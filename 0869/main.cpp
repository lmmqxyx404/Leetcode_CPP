#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;

string num_to_string(int n)
{
  auto s = to_string(n);
  sort(s.begin(), s.end());
  return s;
}
bool reorderedPowerOf2(int n)
{
  auto n_string = num_to_string(n);
  for (int i = 0; i < 32; i++)
  {
    if (n_string == num_to_string(1 << i))
      return true;
  }
  return false;
}

int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  if (reorderedPowerOf2(1) == reorderedPowerOf2(4210))
  {
    cout << "true";
  }
  return 0;
}