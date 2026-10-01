class Solution {
public:
    bool isValid(string s) {
        std::stack<char> SP;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                SP.push(s[i]);
            } else if (s[i] == ')') {
                if (!SP.empty() && SP.top() == '(') {
                    SP.pop();
                } else
                    return false;
            } else if (s[i] == '}') {
                if (!SP.empty() && SP.top() == '{') {
                    SP.pop();
                } else
                    return false;
            } else if (s[i] == ']') {
                if (!SP.empty() && SP.top() == '[') {
                    SP.pop();
                } else
                    return false;
            }
        }

        if (SP.empty()) {
            return true;
        } else {
            return false;
        }
    }
};