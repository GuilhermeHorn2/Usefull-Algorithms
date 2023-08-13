#include <stdio.h>
#include <iostream>
#include <vector>

int find_max(std::vector<int> &v);

int main()
{

 // its a function that first increases then decreases
 std::vector<int> v = {1, 2, 3, 5, 6, 5, 4, 3, 2, 1};
 std::cout << find_max(v);

 return 0;
}
// for this algorithm work it is not allowed that 2 consecutives values of v are equal

int find_max(std::vector<int> &v)
{
 int x = 0;
 int n = v.size();
 for (int i = n / 2; i >= 1; i /= 2)
 {
  while (v[i + x] < v[i + x + 1])
  {
   x += i;
  }
 }
 return x + 1;
}
