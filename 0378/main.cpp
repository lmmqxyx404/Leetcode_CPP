#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  int kthSmallest(vector<vector<int>> &matrix, int k)
  {
    vector<int> tmp;
    for (auto i : matrix)
    {
      for (auto j : i)
      {
        tmp.push_back(j);
      }
    }
    sort(tmp.begin(), tmp.end());
    return tmp[ k - 1];
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}