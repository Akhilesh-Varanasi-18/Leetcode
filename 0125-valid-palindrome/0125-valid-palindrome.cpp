class Solution {
public:
bool reverse(int idx,string &ans){
    //base case
    if(idx>=ans.size()/2)return true;
    //sub problem
    if(ans[idx]!=ans[ans.size()-idx-1])return false;
    return reverse(idx+1,ans);
}
    bool isPalindrome(string s) {
        if(s==" ")return true;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                ans += tolower(s[i]);
            }
            else if(s[i] >= 'a' && s[i] <= 'z') ans+=s[i];
            else if(s[i] >= '0' && s[i] <= '9') ans += s[i];
        }
        cout<<ans;
        return reverse(0,ans);
    }
};