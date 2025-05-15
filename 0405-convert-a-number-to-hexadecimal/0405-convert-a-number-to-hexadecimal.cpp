class Solution {
public:
    std::string toHex(int num) {
        if (num == 0)
            return "0";
        std::string dec = "0123456789abcdef";
        if (num > 0 && num <= 15)
            return std::string(1, dec[num]);

        std::string result;
        unsigned int n = num;

        do {
            result = dec[n % 16] + result;
            n /= 16;
        } while (n);
        return result;
    }
};