class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a1,a2;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(a1[a1.size()-1]>a2[a2.size()-1])a1.push_back(nums[i]);
            else a2.push_back(nums[i]);
        }
        for(int i=0;i<a2.size();i++){
            a1.push_back(a2[i]);
        }
        return a1;
    }
};