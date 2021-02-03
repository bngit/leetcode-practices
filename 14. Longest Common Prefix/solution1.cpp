#include <cstdlib>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // check strs are valid
        if (strs.empty()) {
            return "";
        }

        // find prefix
        int i = 0;
        string prefix;
        auto abort_flag = false;
        while (true) {
            // check size
            for (auto & s : strs) {
                if (i >= s.size()) {
                    abort_flag = true;
                    break;
                }
            }
            if (abort_flag) {
                break;
            }

            // check letter
            char letter = strs[0][i];
            for (auto idx = 1; idx < strs.size(); ++idx) {
                if (strs[idx][i] != letter) {
                    abort_flag = true;
                    break;
                }
            }
            if (abort_flag) {
                break;
            }

            // append letter
            prefix.push_back(letter);

            // move to next location
            i += 1;
        }
        return prefix;
    }
};
