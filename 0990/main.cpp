#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
// union set find
class Solution
{
public:
  int father[27];
  int find_father(int x)
  {
    return x == father[x] ? x : (father[x] = find_father(father[x]));
  }
  bool equationsPossible(vector<string> &equations)
  {
    for (int i = 0; i < 27; i++)
      father[i] = i;
    for (auto &ii : equations)
    {
      if (ii[1] == '=')
      {

        father[find_father(ii[3] - 'a')] = find_father(ii[0] - 'a');
      }
    }
    for (auto &ii : equations)
    {
      if (ii[1] == '!')
      {
        if (find_father(ii[0] - 'a') == find_father(ii[3] - 'a'))
          return false;
      }
    }
    return true;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  auto a = new Solution();

  vector<string> sdf{"a==b", "e==c", "b==c", "a!=e"};
  cout << a->equationsPossible(sdf);
  return 0;
}