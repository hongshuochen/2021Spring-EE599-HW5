#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

using namespace std;

class CPPLib {
 public:
  //q1
  int ConvertToNumber(vector<int> &nums);

  //q2
  vector<vector<int> > Permute(vector<int> &nums, int k);

  //q3
  std::vector<std::string> AllPossibleStrings(const std::string &in);
 
  //q4
  bool DoesPathExist(std::vector<std::vector<int>> &maze, int start_i, int start_j, int end_i, int end_j);

  private : 
};

#endif
