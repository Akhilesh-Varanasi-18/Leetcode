class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])) s[i]=tolower(s[i]);
            if((s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9')) res+=s[i];
        }
        string ans=res;
        cout<<ans<<endl;
        reverse(res.begin(),res.end());
        cout<<res;
        if(res==ans)return true;
        else return false;
    }
};