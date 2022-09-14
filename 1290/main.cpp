#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
int getDecimalValue(ListNode *head)
{
  int ans = 0;
  while (head != nullptr)
  {
    ans = ans * 2 + head->val;
    head = head->next;
  }
  return ans;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}