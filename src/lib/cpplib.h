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
  int findKthSmallest(const vector<vector<int> > &input, int k);

  private : 
};

#endif
