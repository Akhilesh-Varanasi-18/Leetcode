class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> mystack;
        int n = s.size();
        int i = 0;
        while (i < n) {
            if (mystack.empty()) {
                mystack.push(s[i]);
                i++;
            } else {
                if (s[i] == mystack.top()) {
                    mystack.pop();
                    i++;
                } else {
                    mystack.push(s[i]);
                    i++;
                }
            }
        }
        vector<char> v;
        while (!mystack.empty()) {
            v.push_back(mystack.top());
            mystack.pop();
        }
        reverse(v.begin(), v.end());
        string result(v.begin(), v.end());
        return result;
    }
};
