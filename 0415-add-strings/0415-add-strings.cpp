class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size(), m = num2.size();
        string ans = "";

        char a = '0';
        char b = '0';
        if (n != m) {
            while (n < m) {
                num1 = '0' + num1;
                n++;
            }
            while (m < n) {
                num2 = '0' + num2;
                m++;
            }
        }
        int i = n - 1, j = m - 1;
        while (i >= 0) {
            if (a != '0') {
                num1[i] = num1[i] + a - 48;
                a = '0';
            }
            if (num1[i] + num2[j] - 48 >= 58) {
                a = '1';
                b = (((((num1[i] + num2[j] - 48) % 10) + 2) % 10) +
                     48); // this line is an absolute magic, pure mathematics:)
                ans = b + ans;
            }
            if (num1[i] + num2[j] - 48 <= 57) {
                ans = (char)(num1[i] + num2[j] - 48) + ans;
            }
            i--;
            j--;
        }
        if (a != '0') {
            ans = a + ans;
        }
        return ans;
    }
};
