class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int maxi=INT_MIN;
        int res=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>maxi){
                maxi=i.second;
                res=i.first;
            }
        }
        return res;
    }
};