class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        vector<int>res;
        vector<int>check;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
            }
        }
        for(auto i:mp){
            if(i.second>1){
                res.push_back(i.first);
            }
            check.push_back(i.first);
        }
        sort(check.begin(),check.end());
        for(int i=1;i<check.size();i++){
            if(check[i]-check[i-1]>1)res.push_back(check[i]-1);
        }
        if(res.size()<2 && check[0]!=1)res.push_back(1);
        if(res.size()<2 && check[0]==1)res.push_back(check[check.size()-1]+1);
        return res;   
    }
};