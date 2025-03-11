class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int c=0;
        int k=nums.size()-1;
        while(i<nums.size()){
           if(i>c)return false;
            c=max(c,i+nums[i]);
            i++;
        }
        return true;
    }
};