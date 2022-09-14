#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int uniqueMorseRepresentations(vector<string> &words)
{
  string wordsarr[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
  unordered_set<string> st;
  for (auto i : words)
  {
    string s = "";
    for (auto j : i)
    {
      s = s + wordsarr[j - 'a'];
    }
    st.insert(s);
  }
  return st.size();
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}