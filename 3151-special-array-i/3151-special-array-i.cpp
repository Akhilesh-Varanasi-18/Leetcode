class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1)return true;
        if(nums.size()==3){
            if((nums[0]+nums[1])%2==1 && (nums[1]+nums[2])%2==1)return true;
            else return false;
        }
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]+nums[i+1])%2==0)return false;
        }
        return true;
        
    }
};