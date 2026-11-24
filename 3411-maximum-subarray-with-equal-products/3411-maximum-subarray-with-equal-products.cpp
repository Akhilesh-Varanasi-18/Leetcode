class Solution {
public:
    int maxLength(vector<int>& nums) {
        vector<int> res;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            res.clear();
            for (int j = i; j < nums.size(); j++) {
                res.push_back(nums[j]);
                int g = accumulate(res.begin(), res.end(), 0, __gcd<int>);
                int l = accumulate(res.begin(), res.end(), 1, lcm<int, int>);
                const int MOD = 1e9 + 7;
                long long p = accumulate(
                    res.begin(), res.end(), 1LL,
                    [&](long long acc, int x) { return (acc * x) % MOD; });
                if (p == l * g) {
                    if (res.size() > ans)
                        ans = res.size();
                }
            }
        }
        return ans;
    }
};