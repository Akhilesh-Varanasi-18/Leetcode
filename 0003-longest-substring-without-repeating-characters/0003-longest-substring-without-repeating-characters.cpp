class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0)return 0;
        //how to generate all substrings simple use i and j=i+1 and traverse
        int maxyy  = INT_MIN;
        for(int i=0;i<s.size();i++){
            string a = "";
            unordered_map<char,int>mp;
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                if(mp[s[j]]>1)break;
                else{
                    a+=s[j];
                    maxyy = max(maxyy, (int)a.size());
                }
            }
        }
        return maxyy;
    }
};