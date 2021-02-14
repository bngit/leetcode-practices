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

// https://leetcode.com/problems/valid-parentheses/discuss/9252/2ms-C%2B%2B-sloution
class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char& c : s) {
            switch (c) {
                case '(': 
                case '{': 
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;
    }
};