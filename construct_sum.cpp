
#include <iostream>
#include <vector>

void how_sum(std::vector<int> &v, int k, int s, std::vector<int> &curr);

void how_sum(std::vector<int> &v, int s);

int main()
{
 std::vector<int> v = {2, 3, 6, 7};
 int s = 7;
 how_sum(v, 7);
 return 0;
}

void print_list(std::vector<int> &v)
{
 for (int i = 0; i < v.size(); i++)
 {
  std::cout << v[i];
 }
 std::cout << '\n';
}

void how_sum(std::vector<int> &v, int k, int s, std::vector<int> &curr)
{
 if (s == 0)
 {
  print_list(curr);
  return;
 }
 if (k == v.size() || s < 0)
 {
  return;
 }

 how_sum(v, k + 1, s, curr);//not add v[k] and move to next
 curr.push_back(v[k]);
 how_sum(v, k, s - v[k], curr);
 curr.pop_back();
}

void how_sum(std::vector<int> &v, int s)
{

 std::vector<int> curr;
 how_sum(v, 0, s, curr);
}
