class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res;
        for(int i=0;i<m;i++){
            if(nums1[i]!=0)res.push_back(nums1[i]);
        }
        for(int i=0 ; i<n ; i++){
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        nums1=res;
        // for(int i=0;i<res.size();i++){
        //     cout<<res[i]<<" ";
        // }
        // cout<<endl;
    }
};