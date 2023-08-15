
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

int calc_intersect_1(std::vector<int> &a, std::vector<int> &b);

int calc_intersect_2(std::vector<int> &a, std::vector<int> &b);

int calc_intersect_3(std::vector<int> &a, std::vector<int> &b);

int main()
{

 std::vector<int> a = {5, 2, 8, 9, 4};
 std::vector<int> b = {3, 2, 9, 5};

 std::cout << calc_intersect_1(a, b) << '\n';

 std::cout << calc_intersect_2(a, b) << '\n';

 std::cout << calc_intersect_3(a, b) << '\n';

 return 0;
}

int calc_intersect_1(std::vector<int> &a, std::vector<int> &b)
{
 // O(nlogn)

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

int calc_intersect_2(std::vector<int> &a, std::vector<int> &b)
{
 // O(n)

 // remove repeated elements
 std::unordered_set<int> set_a(a.begin(), a.end());
 std::unordered_set<int> set_b(b.begin(), b.end());

 int count = 0;
 for (auto x : set_a)
 {
  count += set_b.count(x);
 }

 return count;
}

int calc_intersect_3(std::vector<int> &a, std::vector<int> &b)
{
 // assuming that both lists have unique elements
 //  O(nlogn),but for some reason this is actually faster than the algorithm 2

 for (int i = 0; i < b.size(); i++)
 {
  a.push_back(b[i]);
 }

 std::sort(a.begin(), a.end());
 // std::sort(b.begin(), b.end());

 int count = 0;
 for (int i = 1; i < a.size(); i++)
 {
  if (a[i] == a[i - 1])
  {
   count++;
  }
 }
 return count;
}
