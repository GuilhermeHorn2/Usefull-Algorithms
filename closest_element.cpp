#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>

int find_closest(int x, std::set<int> &s);

int main()
{

 std::set<int> s = {1, 2, 3, 5, 6, 10, 12, 15};

 std::cout << find_closest(11, s);

 return 0;
}

int find_closest(int x, std::set<int> &s)
{
 auto it = s.lower_bound(x);
 if (it == s.begin())
 {
  // the lower bound is == x
  return *it;
 }
 else if (it == s.end())
 {
  // the lower bound is == end-1
  it--;
  return *it;
 }
 else
 {
  // we have to check wich ine has the smallest distance from x
  int a = *it;
  it--;
  int b = *it;
  if (abs(x - a) > abs(x - b))
  {
   return b;
  }
  return a;
 }
}
