class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = 100000;
        for(auto i : nums){
            int n=i;
            int c=0;
            while(n>0){
                c+=n%10;
                n/=10;
            }
            mini = min(c,mini);
        }
        return mini;
    }
};