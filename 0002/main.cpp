
#include "bits/stdc++.h"
18 -78903
using namespace std;

ListNode *addNum(ListNode *ph, int num)
{
  ListNode *tmp = new ListNode(num);
  ListNode *pl = ph;
  if (pl)
  {
    while (pl->next)
    {
      pl = pl->next;
    }
    pl->next = tmp;
  }
  else
  {
    ph = tmp;
  }
  return ph;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
  ListNode *p = nullptr;
  int jinwei = 0;
  while (l1 || l2 || jinwei)
  {
    if (l1)
    {
      jinwei += l1->val;
      l1 = l1->next;
    }
    if (l2)
    {
      jinwei += l2->val;
      l2 = l2->next;
    }
    p = addNum(p, jinwei % 10);
    jinwei /= 10;
  }

  return p;
}

int main()
{
  freopen("Text.txt", "r", stdin);
  freopen("Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  int a = 0;
  ListNode *p = nullptr, *q = nullptr, *ph, *qh;
  ph = p;
  qh = q;
  for (size_t j = 0; j < 3; j++)
  {
    cin >> a;
    ph = addNum(ph, a);
  }
  for (size_t j = 0; j < 3; j++)
  {
    cin >> a;
    qh = addNum(qh, a);
  }
  ListNode *p = addTwoNumbers(ph, qh);
  vector<int> fin;
  while (p)
  {
    fin.push_back(p->val);
    p = p->next;
  }
  for (size_t i = 0; i < fin.size(); i++)
  {
    printf("%s%d", i > 0 ? "," : "", fin[i]);
  }
  return 0;
}