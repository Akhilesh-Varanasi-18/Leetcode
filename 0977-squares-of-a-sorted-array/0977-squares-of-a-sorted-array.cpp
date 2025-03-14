class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0)
                break;
            nums[i] = abs(nums[i]);
        }
        int neg = 0, pos = n - 1;
        for (int i = pos; i >= 0; i--) {
            if ((nums[neg] & 0xffff) > (nums[pos] & 0xffff)) {
                nums[i] |= (nums[neg] & 0xffff) << 16;
                neg++;
            } else {
                nums[i] |= (nums[pos] & 0xffff) << 16;
                pos--;
            }
        }
        for (int i = 0; i < n; i++) {
            nums[i] >>= 16;
            nums[i] *= nums[i];
        }
        return nums;
    }
};