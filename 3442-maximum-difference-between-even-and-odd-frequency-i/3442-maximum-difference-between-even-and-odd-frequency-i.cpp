class Solution {
public:
    int maxDifference(string s) {
        sort(s.begin(), s.end());
        int count{1}, odd{0}, even{INT_MAX};
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1])
                count++;
            else {
                if (count % 2 == 0)
                    even = min(even, count);
                else
                    odd = max(odd, count);
                count = 1;
            }
        }
        if (count % 2 == 0)
            even = min(even, count);
        else
            odd = max(odd, count);
        return odd - even;
    }
};