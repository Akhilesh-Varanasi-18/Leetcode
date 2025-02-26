class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>res;
        map<int,int>mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i: mp){
            if(i.second==1){
                res.push_back(i.first);
            }
            else{
                res.push_back(i.first);
                res.push_back(i.first);
            }
        }
        for(int i=0;i<res.size();i++){
            nums[i]=res[i];
        }
        return res.size();
    }
};