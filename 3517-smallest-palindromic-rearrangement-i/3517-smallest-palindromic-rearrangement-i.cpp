class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> m(26, 0);
        for (auto i : s) {
            m[i - 'a']++;
        }

        string ans;
        char middle = '-';
        for (int i = 0; i < 26; i++) {
            if (m[i] > 0) {
                int num = m[i] / 2;
                if (m[i] % 2 != 0)
                    middle = i + 'a';
                m[i] = m[i] / 2;
                char ch = i + 'a';
                while (num) {
                    ans.push_back(ch);
                    num--;
                }
            }
        }
        if (middle != '-')
            ans.push_back(middle);
        for (int i = 25; i >= 0; i--) {
            while (m[i]) {
                ans.push_back(i + 'a');
                m[i]--;
            }
        }
        return ans;
    }
};