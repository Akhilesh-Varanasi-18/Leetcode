class Solution {
public:
    int passwordStrength(string password) {
        int c=0;
        unordered_map<char,int>mp;
        for(int i=0;i<password.size();i++){
            mp[password[i]]++;
        }
        for(auto i : mp){
            if(i.first >= 'a'  && i.first <= 'z') c+=1;
            else if(i.first >= 'A'  && i.first <= 'Z') c+=2;
            else if(i.first >= '0'  && i.first <= '9') c+=3;
            else if(i.first == '!' || i.first == '@' || i.first == '#' || i.first == '$')c+=5;
        }
        return c;
    }
};