class Solution {
public:
    int search(vector<int>& nums, int target) {
        int b=0,e=nums.size()-1;
        while(b<=e){
            int m=b+(e-b)/2;
            if(nums[m]==target)return m;
            if(nums[b]<=nums[m]){
                if(nums[b]<=target && nums[m]>=target)e=m-1;
                else b=m+1;
            }
            else{
                if(nums[m]<=target && nums[e]>=target)b=m+1;
                else e=m-1;
            }
        }
        return -1;
        
    }
};