class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            char x = s[i];
            if (x == '(')
                st.push(x);
            else {
                if (st.empty())
                    ans++;
                else
                    st.pop();
            }
        }
        if (st.empty())
            return ans;
        return ans + st.size();
    }
};