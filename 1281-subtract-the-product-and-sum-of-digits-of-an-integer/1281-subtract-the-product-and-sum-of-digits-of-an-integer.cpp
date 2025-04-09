class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        for (; n != 0; n /= 10) {
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;
        }
        int answer = prod - sum;
        return answer;
    }
};