#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <sstream>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        for (auto i = 0; i < nums.size(); ++i) {
            if (nums[i] >= target) {
                return i;
            }
        }
        return nums.size();
    }
};