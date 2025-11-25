class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> Pos;
        for (int i = 0; i < nums.size(); i++) {
            Pos[nums[i]] = -1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (Pos[nums[i]] == -1)
                Pos[nums[i]] = i;
        }
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            if (map[nums[i]] >= 2) {
                if (abs(i - Pos[nums[i]]) <= k)
                    return true;
                else
                    Pos[nums[i]] = i;
            }
        }
        return false;
    }
};