class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            int fre=min(i.second,2);
            while(fre--){
                nums[k++]=i.first;
            }
        }
        return k;
    }
};