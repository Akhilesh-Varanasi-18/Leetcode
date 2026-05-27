class Solution {
    int lo(string word, char x){
        int n= word.size();
        for(int i=n-1; i>-1;i--){
            if(word[i] == x)return i;
        }
        return 0;
    }
    int fo(string word, char x){
        for(int i=0;i<word.size();i++){
            if(word[i]==x)return i;
        }
        return 0;
    }
public:
    int numberOfSpecialChars(string word) {
        int s_cnt = 0;
        map<char,int>mp,mp2;
        for(auto i : word)mp[i]++;
        for (auto i : mp){
            char ch = i.first;
            if(ch>='A' and ch <= 'Z'){
                ch = tolower(ch);
                mp2[ch]++;
            }
            else mp2[ch]++;
        }
        for(auto i : mp2){
            char ch = i.first;
            int l = lo(word, ch);
            int f = fo(word, toupper(ch));
            if(l<f and i.second >= 2)s_cnt++;
        }
        return s_cnt;
        
    }
};