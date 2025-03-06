class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        vector<int>res;
        vector<int>check;
        int n=grid.size();
        int rep,mis=-1;
        int k=n*n;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(mp[grid[i][j]]==1)rep=grid[i][j];
                mp[grid[i][j]]++;
            }
        }
        for(int i=1;i<=k;i++){
            if(mp[i]==0)mis=i;
        }
        res.push_back(rep);
        res.push_back(mis);
        return res;   
    }
};