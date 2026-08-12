class Solution {
private:
    int solve(vector<int>& nums, int k) {
        int left = 0, right = 0, n = nums.size(), result = 0;
        unordered_map<int, int> mp;
        while (right < n) {
            mp[nums[right]]++;

            while (mp[nums[right]] > k) {
                mp[nums[left]]--;
                if (mp[nums[left]] == 0)
                    mp.erase(nums[left]);
                left++;
            }

            // now it is safe
            result = max(result, right - left + 1);
            right++;
        }
        return result;
    }

public:
    int maxSubarrayLength(vector<int>& nums, int k) { return solve(nums, k); }
};