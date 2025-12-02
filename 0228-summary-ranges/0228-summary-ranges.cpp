class Solution {
public:
    vector<string> summaryRanges(const vector<int>& nums) {
        vector<string> result;
        if (nums.empty()) return result;

        int start = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 == nums.size() || nums[i] + 1 != nums[i + 1]) {
                if (start == i) result.push_back(to_string(nums[start]));
                else result.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
                start = i + 1;
            }
        }

        return result;
    }
};