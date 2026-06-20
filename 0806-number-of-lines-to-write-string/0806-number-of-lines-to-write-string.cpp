class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line = 1;
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            sum += widths[s[i] - 'a'];
            cout << s[i] << "=" << widths[s[i] - 'a']<<" ";
            if (sum > 100) {
                cout<<endl;
                i--;
                line++;
                sum = 0;
            }
        }
        return {line, sum};
    }
};