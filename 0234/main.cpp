#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
bool isPalindrome(ListNode *head)
{
  vector<int> store;
  while (head != nullptr)
  {
    store.push_back(head->val);
    head = head->next;
  }
  int store_size = store.size();
  for (size_t i = 0; i < store_size; i++)
  {
    int right = store_size - i - 1;
    if (i > right)
    {
      return true;
    }
    else
    {
      if (store[i] != store[right])
      {
        return false;
      }
    }
  }
  return true;
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);

  return 0;
}