class Solution {
public:
    int numberOfSpecialChars(string word) {
        int c,s_cnt =0;
        unordered_map<char,int>mp,mp2;
        for(auto i: word)mp[i]++;
        string smalls = "abcdefghijklmnopqrstuvwxyz";
        string caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(auto i : mp){
            if(i.first >= 'A' and i.first <= 'Z'){
                char ch = i.first;
                ch = tolower(ch);
                mp2[ch]++;
            }
            else mp2[i.first]++;
        }  
        for(auto i : mp2){
            cout<<i.first<<" "<<i.second<<endl;
            if(i.second >= 2)s_cnt++;
        };
        return s_cnt; 
    }
};