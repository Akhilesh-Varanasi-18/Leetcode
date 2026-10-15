class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[nums.size()-1];
        int b = nums[0];
        while(a>0 and b>0){
            if(a>b) a = a % b;
            else b = b % a;
        }
        return (a==0)? b : a;        
    }
};