class Solution {
public:
    void rec(vector<vector<int>>& u, vector<int>& p, int l, int n, int k) {

        if (p.size() == k) {
            u.push_back(p);
            return;
        }

        for (int i = l; i <= n; i++) {
            p.push_back(i);
            rec(u, p, i + 1, n, k);
            p.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> u;
        vector<int> p;
        int l = 1;
        rec(u, p, l, n, k);
        return u;
    }
};