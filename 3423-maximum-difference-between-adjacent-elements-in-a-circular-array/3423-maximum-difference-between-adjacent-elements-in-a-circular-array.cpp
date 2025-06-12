class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++){
            int dif=abs(nums[i]-nums[i-1]);
            if(dif>maxi)maxi=dif;
        }
        int l=abs(nums[0]-nums[nums.size()-1]);
        if(l>maxi)maxi=l;
        return maxi;
    }
};