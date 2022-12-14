#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;

void quick_sort(vector<int> &arr, int ll, int rr)
{
  if (ll > rr)
    return;
  
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> p;
  while (true)
  {
    int tmp;
    cin >> tmp;

    if (tmp == -1 || p.size() > 1000)
      break;
    p.push_back(tmp);
  }
  quick_sort(p, 0, p.size() - 1);
  for (auto i : p)
  {
    cout << i << endl;
  }

  return 0;
}