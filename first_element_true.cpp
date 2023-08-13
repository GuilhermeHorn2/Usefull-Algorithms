#include <stdio.h>
#include <iostream>
#include <vector>

int find_smallest(std::vector<int> &v);

int main()
{

 std::vector<int> v = {0, 0, 0, 0, 0, 1, 1, 1};

 std::cout << find_smallest(v);

 return 0;
}

int find_smallest(std::vector<int> &v)
{
 // find the first idx that contains 1

 int x = 0;
 int n = v.size();
 for (int i = n / 2; i >= 1; i /= 2)
 {
  while (!v[x + i])
  {
   x += i;
  }
 }
 return x + 1;
}
