class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=1;i<=nums.size();i++)mp[i]=0;
        for(int i:nums)mp[i]++;
        nums.clear();
        for(auto i:mp){
            if(i.second==0)nums.push_back(i.first);
        }
        return nums;
    }
};