class Solution {
public:
    int binaryConverter(int n) {
        string x = "";
        while (n > 0) {
            x.push_back(char('0' + (n % 2)));
            n /= 2;
        }
        int val = 0;
        for (char c : x) {
            val = val * 2 + (c - '0');
        }
        return val;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int, int>> temp;
        for (int ele : nums) {
            temp.push_back({ele, binaryConverter(ele)});
        }
        sort(temp.begin(), temp.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.second == b.second)
                     return a.first < b.first;
                 return a.second < b.second;
             });
        vector<int> ans;
        for (auto& p : temp) {
            ans.push_back(p.first);
        }
        return ans;
    }
};