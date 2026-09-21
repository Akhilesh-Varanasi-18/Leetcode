class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ansAry;
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] %= k;
        }
        for (int i = 0; i < k; ++i) {
            long long ans = 0;
            solve(ans, nums, k, i, 0, nums.size() - 1);
            ansAry.push_back(ans);
        }
        return ansAry;
    }
    void solve(long long& ans, const vector<int>& nums, const int k, int idx,
               int l, int r) {
        if (l > r)
            return;
        if (l == r) {
            if (nums[l] == idx)
                ++ans;
            return;
        }
        int m = (l + r) / 2;
        solve(ans, nums, k, idx, l, m);
        solve(ans, nums, k, idx, m + 1, r);
        vector<long long> lAry(k, 0);
        vector<long long> rAry(k, 0);
        vector<long long> aAry(k, 0);
        int lVal = 1, rVal = 1;
        int cur = m;
        while (cur >= l) {
            lVal *= nums[cur];
            lVal %= k;
            ++lAry[lVal];
            --cur;
        }
        cur = m + 1;
        while (cur <= r) {
            rVal *= nums[cur];
            rVal %= k;
            ++rAry[rVal];
            ++cur;
        }
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < k; ++j) {
                aAry[i * j % k] += (rAry[i] * lAry[j]);
            }
        }
        ans += aAry[idx];
    }
};