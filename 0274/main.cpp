#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int hIndex(vector<int> &citations)
{
  sort(citations.begin(), citations.end());
  auto len = citations.size();
  // citations.push_back(10244);
  int ans = -1;
  for (size_t i = 0; i <= len; i++)
  {
    if (i == 0)
    {
      
    }
    if (citations[i] == citations[i - 1])
      continue;
    int rr = len - i;
  }
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}