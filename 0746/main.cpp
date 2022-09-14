
#include "bits/stdc++.h"
using namespace std;
vector<int> a;
int getMin(int index)
{
  if (index <= 2)
    return 0;
  return min(a[index - 2] + getMin(index - 2), a[index - 1] + getMin(index - 1));
}
int minCostClimbingStairs(vector<int> &cost)
{
  int result[2048];
  result[0]=0;
  result[1]=0;
  result[2]=0;
  a.push_back(0);
  for (size_t i = 2; i <= cost.size(); i++)
  {
    result[i]=min(cost[i-1]+result[i-1],cost[i-2]+result[i-2]);
  }
  2
  return result[cost.size()];
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}