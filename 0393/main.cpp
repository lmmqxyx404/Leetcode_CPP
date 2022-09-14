#include "bits/stdc++.h"
using namespace std;
string num_to_binary(int s)
{

  if (s == 0)
    return "00000000";
  string ans = "";
  while (s)
  {
    ans += s % 2 ? "1" : "0";
    s /= 2;
  }
  for (int i = ans.size(); i < 8; i++)
  {
    ans += "0";
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

bool judge(vector<int> &data, int &index, int num)
{
  for (int i = 0; i < num; index++, i++)
  {
    if (index >= data.size())
      return false;
    auto binary_string = num_to_binary(data[index]).substr(0, 2);
    if (binary_string != "10")
      return false;
  }
  return true;
}
bool validUtf8(vector<int> &data)
{
  for (int i = 0; i < data.size();)
  {
    auto cur = num_to_binary(data[i]);
    if (cur[0] == '0')
    {
      i++;
      continue;
    }
    else if (cur.substr(0, 3) == "110")
    {
      if (!(judge(data, ++i, 1)))
        return false;
    }
    else if (cur.substr(0, 4) == "1110")
    {
      if (!(judge(data, ++i, 2)))
        return false;
    }
    else if (cur.substr(0, 5) == "11110")
    {
      if (!(judge(data, ++i, 3)))
        return false;
    }
    else
      return false;
  }
  return true;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<int> tmp{197, 130, 1};
  if (validUtf8(tmp))
    cout << num_to_binary(29);
  return 0;
}