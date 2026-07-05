class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int maxi = 0, e = 0, o = 0, z = 0, prev;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                e++;
            } else {
                o++;
            }
            if (i == 0 || (nums[i] + prev) % 2 != 0) {
                z++;
                prev = nums[i];
            }
        }
        return max({e, o, z});
    }
};