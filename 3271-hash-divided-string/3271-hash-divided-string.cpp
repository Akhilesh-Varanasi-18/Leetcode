class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";
        for (int i = 0; i < s.size(); i += k) {
            int sum = 0;
            for (int j = 0; j < k; ++j)
                sum += s[i + j] - 'a';
            sum = sum % 26;
            ans += (char)(sum + 'a');
        }
        return ans;
    }
};
