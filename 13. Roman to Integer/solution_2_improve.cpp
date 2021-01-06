/*
题目指出是由大至小书写，利用这一特点，省略条件判断和并且每个字母只做一次加减法
*/

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
    int romanToInt(string s) {
        map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int val = 0;
        for (auto i = 0; i < s.size() - 1; ++i) {
            if (roman[s[i]] < roman[s[i + 1]]) {
                val -= roman[s[i]];
            }
            else {
                val += roman[s[i]];
            }
        }
        val += roman[s.back()];
        return val;
    }
};