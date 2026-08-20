class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        i=0;
        j=1;
        while(i < nums.size()-1){
            if(nums[i]==0){
                if(j<nums.size() and nums[j] != 0){
                    int temp = 0;
                    nums[i] = nums[j];
                    nums[j] = temp;
                    i++;
                    j=i+1;
                }
                else if (j<nums.size()){
                    j++;
                    continue;
                }
                else break;
            }
            else{
                i++;
                j = i+1;
            }
        }
    }
};