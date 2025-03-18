class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int temp;
        for (int i = 0; i < nums.size(); ++i) {
            temp = abs(nums[i]);
            if (nums[temp - 1] < 0) {
                res.push_back(temp);
            } else
                nums[temp - 1] *= -1;
        }
        return res;
    }
};
