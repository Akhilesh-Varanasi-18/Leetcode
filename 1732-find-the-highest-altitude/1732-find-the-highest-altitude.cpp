class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int g, m = 0;
        for(auto i: gain){
            g+=i;
            m = max(m,g);
        }
        return m;
    }
};