class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int  i =0;
        long long s = 0;
        long long maxi = 0;
        for(int j =0;j<k;j++){
            mp[nums[j]]++;
            s += nums[j];
        }
        if(mp.size() == k){
            maxi = max(maxi,s);
        }
        for(int a = k;a<nums.size();a++){
            mp[nums[i]]--;
            if(mp[nums[i]]==0)mp.erase(nums[i]);
            s -= nums[i];
            i++;
            mp[nums[a]]++;
            s += nums[a];
            if(mp.size() == k)maxi = max(maxi,s);
        }
        return maxi;
    }
};