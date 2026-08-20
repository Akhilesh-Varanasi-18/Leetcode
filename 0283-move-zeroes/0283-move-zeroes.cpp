class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>res;
        int z = 0;
        for(auto i : nums){
            if (i != 0) res.push_back(i);
            else z++;
        }
        for(int i = 0;i<z;i++)res.push_back(0);
        nums = res;
    }
};