class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {

        map<char, int> mp;

        for (int i = 0; i < 26; i++) {
            mp['a' + i] = widths[i];
        }

        int i = 0;

        int cnt = 1, sum = 0;

        while (i < s.size()) {

            cout << mp[s[i]] << " ";
            sum += mp[s[i]];

            if (sum == 100 && i == s.size() - 1) {
                break;

            } else if (sum > 100) {
                sum = mp[s[i]];
                cnt++;
            }
            i++;
        }
        vector<int> ans;

        ans.push_back(cnt);
        ans.push_back(sum);

        return ans;
    }
};
