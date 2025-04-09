class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> s(nums.begin(), nums.end());
        int small = *min_element(nums.begin(), nums.end());
        if (small < k)
            return -1;
        if (small == k)
            return s.size() - 1;
        return s.size();
    }
};