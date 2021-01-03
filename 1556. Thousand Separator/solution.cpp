#include <string>

using namespace::std;

class Solution {
public:
    string thousandSeparator(int n) {
        string nstr = to_string(n);
        int nstr_len = nstr.size();
        int count = 0;
        char sep = '.';
        for (int idx = nstr_len - 1; idx >= 0; --idx) {
            if (count > 0 && count % 3 == 0) {
                nstr.insert(idx + 1, ".");
            }
            ++count;
        }

        return nstr;
    }
};
