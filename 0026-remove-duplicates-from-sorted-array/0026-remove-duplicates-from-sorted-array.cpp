class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for (auto i : nums)mp[i]++;
        vector<int>res;
        for(auto i : mp)res.push_back(i.first);
        nums = res;
        return nums.size();
    }
};