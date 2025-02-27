class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int st=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[st]);
                st++;
            }
        }
    }
};