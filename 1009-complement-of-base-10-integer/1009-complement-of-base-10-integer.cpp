class Solution {
public:
    int bitwiseComplement(int num) {

        if (num == 0) {
            return 1;
        } else {
            int i = 0, ans = 0;
            while (num != 0) {
                int bit = num & 1;
                num = num >> 1;
                int complement_bit = bit ^ 1;
                if (complement_bit == 1) {
                    ans += pow(2, i);
                }
                i++;
            }
            return ans;
        }
    }
};