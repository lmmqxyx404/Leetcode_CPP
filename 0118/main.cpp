281 5 16 82#include "bits/stdc++.h"
using namespace std;
vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> a;
  vector<int> tmp;
  tmp.push_back(1);
  a.push_back(tmp);
  for (int i = 1; i < numRows; i++)
  {
    tmp.clear();
    for (size_t j = 0; j <= i; j++)
    {
      if (j == 0 || j == i )
      {
        tmp.push_back(1);
      }else {
        tmp.push_back(a[i-1][j-1]+a[i-1][j]);
      }
    }
    a.push_back(tmp);
  }
  return a;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<vector<int>> a=generate(5);
  return 0;
}