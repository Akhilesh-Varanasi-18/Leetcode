class Solution {
public:
    int maxArea(vector<int>& height) {
        // Two pointer approach
        int st = 0, end = height.size() - 1, area = 0, minHeight;
        while (st < end) {
            minHeight = min(height[st], height[end]);
            area = max(area, (end - st) * minHeight);
            if (minHeight == height[st])
                st++;
            else
                end--;
        }
        return area;
    }
};
