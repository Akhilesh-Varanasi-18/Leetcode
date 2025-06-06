class Solution {
public:
    bool isPal(string str, int s, int e) {

        while (s <= e) {
            if (str[s++] != str[e--])
                return false;
        }
        return true;
    }

    void sol(int ind, string s, vector<string>& ans,
             vector<vector<string>>& res) {
        if (ind == s.length()) {
            res.push_back(ans);
            return;
        }

        for (int i = ind; i < s.length(); i++) {
            if (isPal(s, ind, i)) {
                ans.push_back(s.substr(ind, i - ind + 1));
                sol(i + 1, s, ans, res);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;
        sol(0, s, ans, res);
        return res;
    }
};