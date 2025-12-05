class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for (auto& num : nums) {
            totalSum += num;
        }
        return (totalSum % 2 == 0) ? n - 1 : 0;
    }
};