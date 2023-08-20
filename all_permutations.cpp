
#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

void ger_perms(std::vector<int> &v, int k);

void ger_perms(std::vector<int> &v);

int main()
{

 std::vector<int> v = {0, 1, 2};
 ger_perms(v);

 return 0;
}

void ger_perms(std::vector<int> &v, int k)
{
 if (k == v.size())
 {
  for (int i = 0; i < v.size(); i++)
  {
   std::cout << (char)(v[i] + 'a');
  }
  std::cout << '\n';
  return;
 }

 for (int i = k; i < v.size(); i++)
 {
  std::swap(v[k], v[i]);
  ger_perms(v, k + 1);
  std::swap(v[k], v[i]);
 }
}

void ger_perms(std::vector<int> &v)
{
 ger_perms(v, 0);
}
