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
        int rep=-1;
        int mis=-1;
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(mp[i]==2)rep=i;
            if(mp[i]==0)mis=i;
        }
        res.push_back(rep);
        res.push_back(mis);
        return res;   
    }
};