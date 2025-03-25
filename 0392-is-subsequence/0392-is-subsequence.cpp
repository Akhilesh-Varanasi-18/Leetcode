class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int cnt = 0;
        while (i < t.length()) {
            if (t[i] == s[cnt])
                cnt++;
            i++;
        }
        if (cnt != s.length())
            return false;
        else
            return true;
    }
};