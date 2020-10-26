// test case:
// 534236469
// 2147483647
// -2147483648
// -123
// 1563847412

// WARING: there is better solution online !!

#include <vector>

using namespace std;

class Solution {
public:
    int reverse(int x) {
		unsigned y = 0;
		unsigned z = 0;

        // special case
		if (x == INT_MIN)
			return 0;

		// remove the minus
		bool is_negtive = false;
		if (x < 0) {
			is_negtive = true;
			x = -x;
		}

        // reverse only the positive
		while (x) {
			if (y > INT_MAX / 10)
				return 0;

			y *= 10;
			y += x % 10;

			if (y > INT_MAX)
				return 0;

			x = x / 10;
		}

        // add the minus back
		if (is_negtive)
			return -1 * y;
		else
			return y;
    }
};