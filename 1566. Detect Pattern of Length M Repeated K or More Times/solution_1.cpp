#include <vector>

using std::vector;

class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        if (arr.size() < m * k) {
            return false;
        }

        bool curr_pos_not_match = false;
        for (auto i = 0; i <= arr.size() - m * k; ++i) {
            curr_pos_not_match = false;
            for (auto j = 1; j < k; ++j) {
                for (auto im = 0; im < m; ++im) {
                    if (arr[i + im] != arr[i + j * m + im]) {
                        curr_pos_not_match = true;
                        break;
                    }
                }
                if (curr_pos_not_match) {
                    break;
                }
            }
            if (!curr_pos_not_match) {
                return true;
            }
        }

        return false;
    }
};
