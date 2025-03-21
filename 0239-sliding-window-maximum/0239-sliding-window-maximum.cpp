class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        res.push_back(mp.rbegin()->first);
        int pos=0;
        for(int i=k;i<nums.size();i++){
            mp[nums[pos]]--;
            if(mp[nums[pos]]==0)mp.erase(nums[pos]);
            mp[nums[i]]++;
            res.push_back(mp.rbegin()->first);
            pos++;
        }
        return res;
    }
};