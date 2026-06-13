class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        string alphabets = "zyxwvutsrqponmlkjihgfedcba";
        for(int i=0;i<words.size();i++){
            int s=0;
            string word = words[i];
            for(int j=0;j<word.size();j++){
                int index = word[j] - 'a';
                s+=weights[index];
            }
            res+='z' - (s%26);
        }
        return res;
    }
};