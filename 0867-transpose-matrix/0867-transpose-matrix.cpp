class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>res(matrix[0].size(),vector<int>(matrix.size()));
        for(int i=0; i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                res[i][j]=matrix[j][i];
            }
        }
        return res;
    }
};