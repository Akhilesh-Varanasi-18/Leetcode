class Solution {
public:
    int sumCounts(vector<int>& nums) {
        set<int>s;
        int summation = 0;
        for(int i=0;i<nums.size();i++){
            s.clear();
            for(int j=i;j<nums.size();j++){
                s.insert(nums[j]);
                int n = s.size();
                summation += n*n;
            }
        }
        return summation;
    }
};