class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int median = nums[size / 2];

        int left_sum = 0;
        int right_sum = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] < median) {
                left_sum +=
                    (median - nums[i]);
            } else if (nums[i] > median) {
                right_sum +=
                    (nums[i] - median); 
            }
        }
        return left_sum + right_sum; 
    }
};