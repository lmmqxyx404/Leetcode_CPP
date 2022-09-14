#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
bool isPossible(vector<int> &nums)
{
  unordered_map<int, int> nc, tail;
  for (auto i : nums)
  {
    nc[i]++;
  }

  for (auto num : nums)
  {
    if (nc[num] == 0)
      continue;
    else if (nc[num] > 0 && tail[num - 1] > 0)
    {
      nc[num]--;
      tail[num - 1]--;
      tail[num]++;
    }
    else if (nc[num] > 0 && nc[num + 1] > 0 && nc[num + 2] > 0)
    {
      nc[num]--;
      nc[num + 1]--;
      nc[num + 2]--;
      tail[num + 2]++;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> nums{1, 2, 3, 3, 4, 5};
  isPossible(nums);
  return 0;
}