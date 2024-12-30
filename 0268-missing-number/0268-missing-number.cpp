class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=accumulate(nums.begin(), nums.end(), 0);;
        int c=0;
        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            c+=i;
        }
        cout<<sum<<" "<<c<<endl;
        return(abs(sum-c));
        
    }
};