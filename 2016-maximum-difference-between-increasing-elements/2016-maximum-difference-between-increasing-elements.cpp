class Solution {
public:
    int maximumDifference(vector<int>& nums) {
      int maxi=INT_MIN;
      for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]<nums[j]){
                int dif=nums[j]-nums[i];
                maxi=max(maxi,dif);
            }
        }
      }
      return (maxi>-1)? maxi : -1;  
    }
};