class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> charToWord;
        unordered_set<string> seenWords;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            const string& w = words[i];

            if (charToWord.count(c)) {
                if (charToWord[c] != w)
                    return false;
            } else {
                if (seenWords.count(w))
                    return false;

                charToWord[c] = w;
                seenWords.insert(w);
            }
        }
        return true;
    }
};