class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                            "--.",  "....", "..",   ".---", "-.-",  ".-..",
                            "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                            "...",  "-",    "..-",  "...-", ".--",  "-..-",
                            "-.--", "--.."};
        set<string> ans;
        for (auto i : words) {
            string temp;
            for (auto c : i) {
                temp += v[c - 'a'];
            }
            ans.insert(temp);
        }
        return ans.size();

    }
};