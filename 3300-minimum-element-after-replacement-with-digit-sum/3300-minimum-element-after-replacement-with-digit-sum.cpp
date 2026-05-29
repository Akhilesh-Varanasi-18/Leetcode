class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = 100000;
        for(auto i : nums){
            int c=0;
            while(i>0){
                c+=i%10;
                i/=10;
            }
            mini = min(c,mini);
        }
        return mini;
    }
};