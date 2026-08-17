class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long ans = 0;

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 2;

        while (i < j) {
            ans += nums[j];
            j -= 2;
            i++;
        }

        return ans;
    }
};