class Solution {
public:
    bool checkAnagram(string& s1, string& s2) {
        int freq[26] = {0};
        for (char& ch : s1) {
            freq[ch - 'a']++;
        }

        for (char& ch : s2) {
            freq[ch - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }
        return true;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> res;

        res.push_back(words[0]);
        for (int i = 1; i < n; i++) {
            if (!checkAnagram(words[i], res.back()))
                res.push_back(words[i]);
        }
        return res;
    }
};