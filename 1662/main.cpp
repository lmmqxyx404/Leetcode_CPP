#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
class Solution
{
public:
  bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
  {
    int word1_index = 0, word2_index = 0, char1_index = 0, char2_index = 0;
    while (true)
    {
      if (word1[word1_index][char1_index] == word2[word2_index][char2_index])
      {
        char1_index++;
        char2_index++;
        if (char1_index == word1[word1_index].size())
        {
          word1_index++;
          char1_index = 0;
        }
        if (char2_index == word2[word2_index].size())
        {
          word2_index++;
          char2_index = 0;
        }
        if (word1_index == word1.size() || word2_index == word2.size())
        {
          return word1_index == word1.size() && word2_index == word2.size();
        }
      }
      else
        return false;
    }
    return true;
  }
};
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}