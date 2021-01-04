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
        int low = 0;
        int high = nums.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return high;  // or return low; They are the same
    }
};