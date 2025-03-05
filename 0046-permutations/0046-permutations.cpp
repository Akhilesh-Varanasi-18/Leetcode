class Solution {
public:
    void permutations(vector<int>& nums, vector<int>& sub,
                      vector<vector<int>>& result) {
        if (sub.size() == nums.size()) {
            result.push_back(sub);
        }
        for (int element : nums) {
            if (find(sub.begin(), sub.end(), element) == sub.end()) {
                sub.push_back(element);
                permutations(nums, sub, result);
                sub.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> result;
        permutations(nums, sub, result);
        return result;
    }
};