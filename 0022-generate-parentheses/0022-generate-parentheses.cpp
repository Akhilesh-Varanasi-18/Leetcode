class Solution {
public:
    void temp(string op, vector<string>& v, int n, int o, int c) {
        if (o == c && o == n) {
            v.push_back(op);
            return;
        }
        if (o < n) {
            op += '(';
            temp(op, v, n, o + 1, c);
            op.pop_back();
        }
        if (c < o) {
            op += ')';
            temp(op, v, n, o, c + 1);
            op.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string op = "";
        temp(op, v, n, 0, 0);
        return v;
    }
};