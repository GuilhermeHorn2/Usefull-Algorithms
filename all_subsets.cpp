#include <stdio.h>
#include <iostream>
#include <vector>

void ger_subsets(std::vector<int> &set, std::vector<int> &curr, int k);

void ger_subsets(std::vector<int> &set);

int main()
{

 std::vector<int> set = {1, 2, 3};

 /*std::vector<std::vector<int>> subsets = ger_subsets(set);

 for (int i = 0; i < subsets.size(); i++)
 {
  for (int j = 0; j < subsets[i].size(); j++)
  {
   std::cout << subsets[i][j] << ' ';
  }
  std::cout << '\n';
 }*/

 ger_subsets(set);

 return 0;
}

void ger_subsets(std::vector<int> &set, std::vector<int> &curr, int k)
{

 if (k == set.size())
 {
  for (int i = 0; i < curr.size(); i++)
  {
   std::cout << curr[i];
  }
  std::cout << '\n';
  return;
 }

 ger_subsets(set, curr, k + 1); // subset will not include set[k]
 curr.push_back(set[k]);
 ger_subsets(set, curr, k + 1); // subset will include set[k]
 curr.pop_back();               // avoid acumulating elements of other subsets into new ones
}

void ger_subsets(std::vector<int> &set)
{
 std::vector<int> curr;
 ger_subsets(set, curr, 0);
}
