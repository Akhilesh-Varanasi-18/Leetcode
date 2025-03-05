class Solution {
public:
    void combinations(int index, vector<vector<int>>& ans,
                      vector<int>& candidates, int target, vector<int>& list) {
        if (index == candidates.size()) {
            if (target == 0) {
                ans.push_back(list);
            }
            return;
        }
        if (candidates[index] <= target) {
            list.push_back(candidates[index]);
            combinations(index, ans, candidates, target - candidates[index],
                         list);
            list.pop_back();
        }
        combinations(index + 1, ans, candidates, target, list);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> list;
        combinations(0, ans, candidates, target, list);
        return ans;
    }
};