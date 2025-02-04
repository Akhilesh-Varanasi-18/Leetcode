class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int s=nums[0];
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                s+=nums[i];
            }
            else{
                maxi=max(maxi,s);
                s=nums[i];
            }
        }
        maxi=max(maxi,s);
        return maxi;
        
    }
};