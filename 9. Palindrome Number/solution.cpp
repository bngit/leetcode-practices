class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long s = 0;
        auto origin = x;
        while (x > 0) {
            s *= 10;
            s += x % 10;
            x /= 10;
        }

        if (s == origin)
            return true;
        else
            return false;
    }
};
