class Solution {
public:
    string ns(int k, string word, string alpha){
        string ans=word;
        if(word.size()>=k)return word;
        for(auto i : ans){
            char nw = alpha[alpha.find(i)+1];
            word+=nw;
        }
        return ns(k,word,alpha);
    }
    char kthCharacter(int k) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        string word = "a";
        string res = ns(k,word,alpha);
        return res[k-1];
    }
};