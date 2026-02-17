class Solution {
public:
    int SumofDigits(int n){
        int s=0;
        while(n>0){
            int lastDigit=n%10;
            s=s+lastDigit;
            n=n/10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(SumofDigits(nums[i])==i){
                return i;
            }
        }

        return -1;
        
    }
};