class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l = 0;
        int h = s.size();
        vector<int> ans;
        for (auto c : s) {
            if (c == 'I') {
                ans.push_back(l++);
            } else {
                ans.push_back(h--);
            }
        }
        ans.push_back(l);
        return ans;
    }
};
