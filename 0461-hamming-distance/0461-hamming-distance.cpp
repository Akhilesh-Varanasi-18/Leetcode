class Solution {
public:
    int countSetBits(int x) {
        int count = 0;
        while (x > 0) {
            x = x & (x - 1);
            count++;
        }
        return count;
    }

    int hammingDistance(int x, int y) {
        int num = x ^ y;
        return countSetBits(num);
    }
};
