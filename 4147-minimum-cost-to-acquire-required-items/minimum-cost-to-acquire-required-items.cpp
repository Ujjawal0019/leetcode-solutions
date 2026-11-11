#include <algorithm>

using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1 = cost1, c2 = cost2, cb = costBoth;
        long long n1 = need1, n2 = need2;
        
        // Option 1: Buy everything separately
        long long opt1 = n1 * c1 + n2 * c2;
        
        // Option 2: Buy bundles for the overlapping amount, rest separately
        long long common = min(n1, n2);
        long long opt2 = common * cb + (n1 - common) * c1 + (n2 - common) * c2;
        
        // Option 3: Buy bundles to cover the larger requirement completely
        long long opt3 = max(n1, n2) * cb;
        
        return min({opt1, opt2, opt3});
    }
};
