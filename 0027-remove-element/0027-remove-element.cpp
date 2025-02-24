class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                cnt++;
                nums[i]=INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        return(n-cnt);
        
    }
};