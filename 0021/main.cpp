
#include "bits/stdc++.h"
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
  ListNode *ph = new ListNode(-1);
  ListNode **pt = &(ph->next);
  while (list1 != nullptr || list2 != nullptr)
  {
    int l1val = list1 == nullptr ? -1 : list1->val;
    int l2val = list2 == nullptr ? -1 : list2->val;
    if (list1 == nullptr)
    {
      *pt = new ListNode(l2val);
      pt = &((*pt)->next);
      list2 = list2->next;
    }
    else if (list2 == nullptr)
    {
      *pt = new ListNode(l1val);
      pt = &((*pt)->next);
      list1 = list1->next;
    }
    else
    {
      if (l1val > l2val)
      {
        *pt = new ListNode(l2val);
        pt = &((*pt)->next);
        list2 = list2->next;
      }
      else
      {
        *pt = new ListNode(l1val);
        pt = &((*pt)->next);
        list1 = list1->next;
      }
    }
  }
  return ph->next ;
}
int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  ListNode *list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
  ListNode *list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
  ListNode *lh = mergeTwoLists(list1, list2);
  return 0;
}