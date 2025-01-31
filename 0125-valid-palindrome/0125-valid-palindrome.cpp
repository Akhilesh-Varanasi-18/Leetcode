class Solution {
public:
void reverse(int idx,string &ans){
    //base case
    if(idx>=ans.size()/2)return;
    //sub problem
    swap(ans[idx],ans[ans.size()-idx-1]);
    reverse(idx+1,ans);
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
        string fin=ans;
        reverse(0,ans);
        if(fin==ans)return true;
        return false;
    }
};