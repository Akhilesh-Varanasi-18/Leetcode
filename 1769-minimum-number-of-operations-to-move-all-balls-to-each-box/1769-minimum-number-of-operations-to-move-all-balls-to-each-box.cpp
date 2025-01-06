class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        vector<int>ind;
        int c=0;
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i]=='1'){
                ind.push_back(i);
            }
        }
        for(int i=0;i<boxes.size();i++)
        {
            c=0;
            for(int j=0;j<ind.size();j++)
            {
                c+=abs(i-ind[j]);
                // cout<<c;
            }
            ans.push_back(c);
        }
        for(int i=0;i<ind.size();i++){
            cout<<ind[i]<<" ";
        }
        return ans;
    }
};