#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            // The water level is capped by the shorter of the two lines
            int currentHeight = min(height[left], height[right]);
            int width = right - left;
            
            // Calculate current area and update the maximum found so far
            maxWater = max(maxWater, currentHeight * width);

            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
