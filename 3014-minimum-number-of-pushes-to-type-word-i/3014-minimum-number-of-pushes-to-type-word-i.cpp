class Solution {
public:
    int minimumPushes(string word) {
        int c = 0;
        if(word.size()<=8)return word.size();
        for(int i = 0;i<word.size();i++){
            if(i<8)c++;
            else if(i<16)c+=2;
            else if(i<24)c+=3;
            else c += 4;
        }
        return c;
    }
};