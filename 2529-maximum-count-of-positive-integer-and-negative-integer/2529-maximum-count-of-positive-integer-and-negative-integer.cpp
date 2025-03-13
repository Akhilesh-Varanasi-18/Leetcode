class Solution {
public:
    int maximumCount(vector<int>& nums) {
        map<char,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)mp['n']++;
            else if (nums[i]>0)mp['p']++;
        }
        return max(mp['n'],mp['p']);
    }
};