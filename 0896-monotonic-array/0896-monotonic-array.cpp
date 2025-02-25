class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>res=nums;
        sort(res.begin(),res.end());
        if(res==nums)return true;
        reverse(res.begin(),res.end());
        if(res==nums)return true;
        return false;
    }
};