#include <stdio.h>
#include <iostream>
#include <vector>

int max(int a, int b);
int max_subarray(std::vector<int> &v);

int main()
{

 std::vector<int> v = {-1, 2, 4, -3, 5, 2, -5, 2};
 std::cout << max_subarray(v);

 return 0;
}

int max(int a, int b)
{
 if (a > b)
 {
  return a;
 }
 return b;
}

int max_subarray(std::vector<int> &v)
{

 int best = 0;
 int sum = 0;

 for (int i = 0; i < v.size(); i++)
 {
  sum = max(v[i], sum + v[i]);
  best = max(sum, best);
 }
 return best;
}
