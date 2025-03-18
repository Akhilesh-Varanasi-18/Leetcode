class Solution {
public:
    static bool compare(pair<int, char>& a, pair<int, char>& b) {
        return a.first > b.first;
    }

    string frequencySort(string s) {
        vector<int> hash(256, 0);
        string result;
        for (auto u : s) {
            hash[u]++;
        }
        vector<pair<int, char>> charFreq;
        for (int i = 0; i < 256; i++) {
            if (hash[i] > 0) {
                charFreq.push_back({hash[i], char(i)});
            }
        }
        sort(charFreq.begin(), charFreq.end(), compare);

        for (auto u : charFreq) {
            result.append(u.first, u.second);
        }
        return result;
    }
};
