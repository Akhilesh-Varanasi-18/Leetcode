class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp,mp1;
        int c = 0;
        for(auto i : words1)mp[i]++;
        for(auto i : words2)mp1[i]++;
        for(auto i : mp){
            if(i.second == 1 and mp1[i.first]==1)c++;
        }
        return c;
    }
};