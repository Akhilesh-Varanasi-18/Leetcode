class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> res;
        int val;
        prefix=nums;
        suffix=nums;
        for (int i = 1; i < n; i++) {
            prefix[i]*=prefix[i - 1];
        }
        for (int i = n - 2; i > -1; i--) {
            suffix[i]*=suffix[i + 1];
        }
        for(int i=0;i<n;i++){
            if(i==0)val=suffix[i+1];
            else if(i==n-1)val=prefix[i-1];
            else val=prefix[i-1]*suffix[i+1];
            res.push_back(val);
        }
        return res;
    }
};
