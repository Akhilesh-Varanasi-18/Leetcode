class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int i, j, n = nums.size();
        vector<int> req(32, 0), bits(32, 0);

        for (i = 0; i < n; i++) {
            for (j = 0; j < 32; j++) {
                if (nums[i] & (1 << j)) {
                    bits[j]++;
                }

                if (k & (1 << j)) {
                    req[j] = 1;
                }
            }
        }

        int cnt = 0;

        for (j = 0; j < 32; j++) {
            if ((bits[j] % 2 == 0 && req[j] == 1) ||
                (bits[j] % 2 == 1 && req[j] == 0)) {
                cnt++;
            }
        }

        return cnt;
    }
};