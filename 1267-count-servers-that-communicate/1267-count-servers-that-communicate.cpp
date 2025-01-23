class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        unordered_map<int,int>row,col;
        for(int i=0;i<grid.size();i++){
           for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1){
                row[i]++;
                col[j]++;
            }
           }
        }
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0 ; j<grid[0].size();j++){
                if(grid[i][j]==1){
                    if(row[i]>1||col[j]>1) c++;
                }
            }
        }
        return c;
        
    }
};