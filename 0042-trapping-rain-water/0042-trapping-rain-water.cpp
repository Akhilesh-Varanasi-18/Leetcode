class Solution {
public:
    int trap(vector<int>& height) {
        int l =0 , r= height.size()-1;
        int lmax = height[l], rmax = height[r];
        int w = 0;
        while(l<r){
            if(lmax < rmax){
                l++;
                lmax = max(lmax,height[l]);
                w += lmax-height[l];
            }
            else{
                r--;
                rmax = max(rmax,height[r]);
                w += rmax-height[r];
            }
        }
        return w;
    }
};