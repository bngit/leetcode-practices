#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        auto max_wealth = 0;
        for (auto &customer: accounts) {
            auto wealth = 0;
            for (auto &w: customer) {
                wealth += w;
            }
            if (wealth > max_wealth) {
                max_wealth = wealth;
            }
        }
        return max_wealth;
    }
};