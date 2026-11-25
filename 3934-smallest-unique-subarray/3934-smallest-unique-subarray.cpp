class Solution {
public:
    bool check(vector<int>& nums, int k) {
        unordered_map<long long, int> mp;
        long long b = 100001, mod = 1000000007;
        long long h = 0, p = 1;
        for (int i = 0; i < k - 1; i++) {
            p = (p * b) % mod;
        }
        for (int i = 0; i < k; i++) {
            h = (h * b + nums[i]) % mod;
        }
        mp[h]++;
        for (int i = k; i < nums.size(); i++) {
            h = (h - (nums[i - k] * p) % mod + mod) % mod;
            h = (h * b + nums[i]) % mod;
            mp[h]++;
        }
        for (auto& i : mp) {
            if (i.second == 1)
                return true;
        }
        return false;
    }
    int smallestUniqueSubarray(vector<int>& nums) {
        int l = 1, h = nums.size();
        while (l <= h) {
            int m = l + ((h - l) / 2);
            if (check(nums, m))
                h = m - 1;
            else
                l = m + 1;
        }
        return l;
    }
};