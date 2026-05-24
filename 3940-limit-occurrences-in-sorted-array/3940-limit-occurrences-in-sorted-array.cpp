class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]<=k)res.push_back(nums[i]);
        }
        
        return res;
        
    }
};