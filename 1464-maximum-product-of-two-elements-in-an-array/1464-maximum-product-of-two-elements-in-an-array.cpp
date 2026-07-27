class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 = INT_MIN;
        int m2  = INT_MIN;
        for(int  i=0;i<nums.size();i++){
            if(nums[i]>m1){
                m1 = nums[i];
            }
        }
        nums.erase(find(nums.begin(),nums.end(),m1)); 
        for(int i = 0; i<nums.size();i++){
            if(nums[i]>m2){
                m2 = nums[i];
            }
        }
        return((m1-1)*(m2-1));
        
    }
};