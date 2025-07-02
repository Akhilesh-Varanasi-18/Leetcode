class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int size=matrix.size()*matrix[0].size();
        k=size-k;
        for(auto i:matrix)
        {
            for(auto j:i)
            {
                pq.push(j);
            }
        }
        while(k>0)
        {
            pq.pop();
            // cout<<pq.top()<<" ";
            k-=1;
        }
        return pq.top();
    }
};