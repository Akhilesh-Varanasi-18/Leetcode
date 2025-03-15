class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(s.size());
        int last = -n;
        for (int i = 0; i < n; i++) {
            if (s[i] == c)
                last = i;

            ans[i] = (i - last);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c)
                last = i;

            ans[i] = (min(abs(last - i), ans[i]));
        }
        return ans;
    }
};
