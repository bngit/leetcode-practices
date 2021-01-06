/*
    针对所有逆序的情况，额外多做了一次减法
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
        int val = roman[s[0]];
        for (auto i = 1; i < s.size(); ++i) {
            val += roman[s[i]];
            if (s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X')) {
                val -= 2;
            }
            else if (s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C')) {
                val -= 20;
            }
            else if (s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M')) {
                val -= 200;
            }
            else {
                ;
            }
        }
        return val;
    }
};