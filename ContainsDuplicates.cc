#include <unordered_set>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
      bool containsDuplicate(vector<int>& nums)
    {
          unordered_set<int> crossoff;
          for(int x: nums)
          {
              if (crossoff.count(x))
              {
                  return true;
              }
              crossoff.insert(x);
          }
              return false;
      }
  };

  int main()
{
  Solution solution;
  vector<int> nums1 = {1, 2, 3, 4};
  cout << (solution.containsDuplicate(nums1) ? "true" : "false") << endl;

  vector<int> nums2 = {1, 2, 3, 1};
  cout << (solution.containsDuplicate(nums2) ? "true" : "false") << endl;

  vector<int> nums3 = {};
  cout << (solution.containsDuplicate(nums3) ? "true" : "false") << endl;

  vector<int> nums4 = {1, 1, 1, 1};
  cout << (solution.containsDuplicate(nums4) ? "true" : "false") << endl;
  return 0;
}