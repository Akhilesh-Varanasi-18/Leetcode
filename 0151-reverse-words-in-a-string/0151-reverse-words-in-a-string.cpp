class Solution {
public:
    string reverseWords(string s) {
        string j;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') j+=s[i];
            else{
                reverse(j.begin(),j.end());
                ans+=j;
                if(j.size()) ans+=" ";
                j="";
            }
        }
        reverse(j.begin(),j.end());
        ans+=j;
        while(ans.back()==' ') ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};