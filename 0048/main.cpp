#include "bits/stdc++.h"
#include "../common/common.h"
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
  int row = matrix.size();
  for (size_t i = 0; i < row; i++)
  {
    for (size_t j = i; j < row; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
  int left = 0, right = row - 1;
  while (left < right)
  {
    for (size_t i = 0; i < row; i++)
    {
      swap(matrix[i][left], matrix[i][right]);
    }
    left++;
    right--;
  }
}
int main()
{
  freopen("./Text.txt", "r", stdin);
  freopen("./Text1.txt", "w", stdout);
  //  ios::sync_with_stdio(false);
  vector<vector<int>> matrix;
  for (size_t i = 0; i < 3; i++)
  {
    vector<int> num_tmp;
    for (size_t j = 0; j < 3; j++)
    {
      int tmp;
      scanf("%d", &tmp);
      num_tmp.push_back(tmp);
    }
    matrix.push_back(num_tmp);
  }
  rotate(matrix);
  for (size_t i = 0; i < 3; i++)
  {

    for (size_t j = 0; j < 3; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}