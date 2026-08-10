class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int x : nums)
            mp[x]++;

        int ops = 0;
        int i = 0;

        while (i < n) {
            if (mp.size() == n - i)
                break;

            for (int j = 0; j < 3 && i < n; j++) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                i++;
            }
            ops++;
        }

        return ops;
    }
};