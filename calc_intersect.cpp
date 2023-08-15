
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int calc_intersect(std::vector<int> &a, std::vector<int> &b);

int main()
{

 std::vector<int> a = {5, 2, 8, 9, 4};
 std::vector<int> b = {3, 2, 9, 5};

 std::cout << calc_intersect(a, b);

 return 0;
}

int calc_intersect(std::vector<int> &a, std::vector<int> &b)
{
 // remove repeated elements
 std::set<int> set_a(a.begin(), a.end());
 std::set<int> set_b(b.begin(), b.end());

 int count = 0;
 for (auto x : set_a)
 {
  count += set_b.count(x);
 }

 return count;
}
