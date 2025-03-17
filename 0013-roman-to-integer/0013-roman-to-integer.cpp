class Solution {
public:
    int romanToInt(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I')c+=1;
            if(s[i]=='V')c+=5;
            if(s[i]=='X')c+=10;
            if(s[i]=='L')c+=50;
            if(s[i]=='C')c+=100;
            if(s[i]=='D')c+=500;
            if(s[i]=='M')c+=1000;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]=='V' and s[i-1]=='I') c-=2;
            else if(s[i]=='X' and s[i-1]=='I')c-=2;
            else if(s[i]=='L' and s[i-1]=='X')c-=20;
            else if(s[i]=='C' and s[i-1]=='X')c-=20;
            else if(s[i]=='D' and s[i-1]=='C')c-=200;
            else if(s[i]=='M' and s[i-1]=='C')c-=200;
            else continue;
        }
        return c;
    }
};