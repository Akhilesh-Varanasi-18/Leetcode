class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int countEven = 0, countOdd = 0, countAlt = 0;
        int lastParity = -1;
        for (int num : nums) {
            int parity = num % 2;
            if (parity == 0) countEven++;
            else countOdd++;
            if (parity != lastParity) {
                countAlt++;
                lastParity = parity;
            }
        }
        return max({countEven, countOdd, countAlt});
    }
};