class Solution {
public:
    bool check(string s, unordered_map<char,int>mp){
        for(auto i : s){
            if(mp[i] >= 1){
                mp[i]--;
            }
            else return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int c = 0;
        for(auto i : chars)mp[i]++;
        for(auto i : words){
            bool res = check(i,mp);
            if(res)c+=i.size();
        }
        return c;
    }
};