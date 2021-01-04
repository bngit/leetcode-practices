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
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};