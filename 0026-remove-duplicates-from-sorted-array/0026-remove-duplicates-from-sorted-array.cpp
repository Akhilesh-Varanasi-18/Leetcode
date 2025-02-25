class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            res.push_back(i.first);
        }
        for(int i=0;i<res.size();i++)nums[i]=res[i];
        return mp.size();
    }
};