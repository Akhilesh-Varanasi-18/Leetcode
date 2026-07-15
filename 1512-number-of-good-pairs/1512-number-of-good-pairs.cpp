class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c =0;
        map<int,int>mp;
        for(auto i : nums)mp[i]++;
        for(auto i : mp){
            int n = i.second-1;
            c += n*(n+1)/2;
        }
        return c;
    }
};