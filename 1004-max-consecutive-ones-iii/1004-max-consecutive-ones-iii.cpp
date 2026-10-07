class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,s=0,id=0;
        int p = k;
        int maxi = 0;
        for(int j=0;j<nums.size();j++){
            s += nums[j];
            id++;
            if(s == id){
                int sl = (j-i)+1;
                maxi = max(maxi,sl);
            }
            else if(p != 0){
                s++;
                p--;
                int sl = (j-i)+1;
                maxi = max(maxi,sl);
            }
            else{
                i++;
                j=i-1;
                s = 0;
                id = 0;
                p = k;
            }
        }
        return maxi;
    }
};