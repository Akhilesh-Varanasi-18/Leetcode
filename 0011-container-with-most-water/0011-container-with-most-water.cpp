class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = INT_MIN;
        int n = height.size();
        int l=0,r = n-1;
        while(l<r){
            if(height[l]<=height[r]){
                int m = height[l]*(r-l);
                maxi = max(m,maxi);
                l++;
            }
            else{
                int m = height[r]*(r-l);
                maxi = max(m,maxi);
                r--;
            }
        }
        return maxi;
    }
};