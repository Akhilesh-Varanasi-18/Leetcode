class Solution {
public:
    string ns(string es, vector<char>&v){
        string ans =es;
        for(auto i:es){
            char nw = v[(lower_bound(v.begin(), v.end(), i) - v.begin())+1];
            ans+=nw;
        }
        return ans;
    }
    char kthCharacter(int k) {
       vector<char>alpha;
       for(char ch='a';ch<='z';ch++)alpha.push_back(ch);
       string word ="a";
       while(word.size()<k){
        word = ns(word,alpha);
       }
       return word[k-1];
    }
};