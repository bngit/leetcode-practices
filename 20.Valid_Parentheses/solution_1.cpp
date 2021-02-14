#include <cstdlib>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <sstream>
#include <map>
#include <typeinfo>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        for (auto &c : s) {
            if (!bracket.empty()) {
                if ((bracket.top() == '(' && c == ')')  // 这里写成and也是可以的
                    || (bracket.top() == '[' && c == ']')
                    || (bracket.top() == '{' && c == '}')) {
                    bracket.pop();
                }
                else {
                    if (c == ')' || c == ']' || c == '}') {
                        return false;
                    }
                    else {
                        bracket.push(c);
                    }
                }
            }
            else {
                bracket.push(c);
            }
        }
        if (!bracket.empty()) {
            return false;
        }
        return true;
    }
};
