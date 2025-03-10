class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string ans = "asdfghjklqwertyuio";
        int a[27] = {0}, temp = licensePlate.size();
        for (int i = 0; i < temp; ++i)
            if (isalpha(licensePlate[i]))
                ++a[toupper(licensePlate[i]) - 'A'];
        for (string it : words) {
            int b[26] = {0};
            int ls = it.size();
            bool flag2 = false;
            for (int i = 0; i < ls; ++i)
                if (a[toupper(it[i]) - 'A']) {
                    ++b[toupper(it[i]) - 'A'];
                    flag2 = true;
                }
            bool flag = true;
            if (flag2)
                for (int i = 0; i < 26; ++i)
                    if (b[i] < a[i]) {
                        flag = false;
                        break;
                    }
            if (flag)
                if (flag2)
                    if (ans.size() > ls)
                        ans = it;
        }
        return ans;
    }
};