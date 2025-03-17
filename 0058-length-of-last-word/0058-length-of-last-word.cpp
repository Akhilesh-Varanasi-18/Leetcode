class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0, cnt = 0;
        int i = s.size() - 1;
        while (s[i] == ' ') {
            i--;
        }
        while (i>=0 and s[i] != ' ') {
            c++;
            i--;
        }
        return c;
    }
};