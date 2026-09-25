class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int flip_end = flips[0];
        int res = 0;

        for (int i = 0; i < flips.size(); i++) {
            if (flips[i] > flip_end) {
                flip_end = flips[i];
            }

            res += (flip_end == i + 1);
        }

        return res;
    }
};