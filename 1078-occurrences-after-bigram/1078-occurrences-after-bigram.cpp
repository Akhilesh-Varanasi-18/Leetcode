class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> words;
        vector<string> ans;
        string word;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word = word + text[i];
            }
        }
        words.push_back(word);

        for (int i = 0; i < words.size() - 2; i++) {
            if (words[i] == first && words[i + 1] == second) {
                ans.push_back(words[i + 2]);
            }
        }
        return ans;
    }
};
