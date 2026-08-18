class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<set<int>>res;
        vector<int>sub;
        unordered_map<int,int>mp;
        vector<int>fin;
        for(int i = 0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                sub.push_back(nums[j]);
                if(sub.size()==k){
                    set<int>my_set(sub.begin(),sub.end());
                    res.push_back(my_set);
                }
            }
            // res.push_back(sub);
            sub.clear();
        }
        for(int i =0;i<res.size();i++){
            for(auto a: res[i]){
                mp[a]++;
            }
        }
        for(auto i : mp){
            if(i.second==1)fin.push_back(i.first);
        }
        if(fin.size()==0)return -1;
        else return *max_element(fin.begin(),fin.end());

    }
};