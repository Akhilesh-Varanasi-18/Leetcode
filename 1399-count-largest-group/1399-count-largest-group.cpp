class Solution {
public:
    int getDigitSum(int x) {
        int res = 0;
        while (x) {
            res += x % 10;
            x /= 10;
        }
        return res;
    }

    int countLargestGroup(int n) {
        vector<int> cnt(37, 0);
        for (int i = 1; i <= n; i++)
            cnt[getDigitSum(i)]++;

        int maxFreq = 0;
        int res = 0;
        for (int freq : cnt) {
            if (freq > maxFreq) {
                maxFreq = freq;
                res = 1;
            } else if (freq == maxFreq)
                res++;
        }

        return res;
    }
};