class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        vector<int> ans(nums.size(), 0);
        int even = 0;
        int odd = 1;

        cout << "Hello";
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                ans[even] = nums[i];
                if (even + 2 <= nums.size() - 1) {
                    even += 2;
                }
            } else {
                ans[odd] = nums[i];
                if (odd + 2 <= nums.size() - 1) {
                    odd += 2;
                }
            }
        }

        return ans;
    }
};
