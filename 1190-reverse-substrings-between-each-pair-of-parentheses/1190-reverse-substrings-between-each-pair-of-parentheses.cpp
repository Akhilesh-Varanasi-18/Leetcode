class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != ')')
            {
                st.push(s[i]);
            }
            else
            {
                string temp;
                while(!st.empty() && st.top() != '(')
                {
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for(auto ch : temp)
                {
                    st.push(ch);
                }
            }
        }
        string res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};