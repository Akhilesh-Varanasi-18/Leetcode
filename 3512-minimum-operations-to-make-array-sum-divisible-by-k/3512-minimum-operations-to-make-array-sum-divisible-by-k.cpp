class Solution {
public:
    int ArraySum(vector<int>& arr){
        int s=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
        }
        return s;
    }
    int minOperations(vector<int>& nums, int k) {
        int SumofElements = ArraySum(nums);
        return(SumofElements % k);
    }
};