class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, s = 0;
        int idx_cnt = 0;
        int maxi = 0;
        for(int j = 0;j<nums.size();j++){
            s += nums[j];
            idx_cnt++;
            if(idx_cnt == s){
                int sl = (j-i)+1;
                maxi = max(maxi,sl);
            }
            else{
                i = j+1;
                idx_cnt = 0;
                s = 0;
            }
        }
        return maxi; 
    }
};