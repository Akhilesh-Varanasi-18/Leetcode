class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        for (int i = 0; i < s.size(); i++) {
            string ans = "";
            for (int j = i; j < s.size(); j++) {
                ans += s[j];
                if (ans.size() < 2) {
                    continue;
                }
                if (rev.find(ans) != string::npos) {
                    return true;
                }
            }
        }
        return false;
    }
};