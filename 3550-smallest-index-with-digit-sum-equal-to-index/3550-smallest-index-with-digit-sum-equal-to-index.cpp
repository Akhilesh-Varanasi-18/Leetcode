class Solution {
public:
    int sumOfDigits(int n){
        int s=0;
        while (n>0){
            int rem=n%10;
            s+=rem;
            n=n/10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            if(sumOfDigits(nums[i])==i) return i;
        }
        return -1;
    }
};