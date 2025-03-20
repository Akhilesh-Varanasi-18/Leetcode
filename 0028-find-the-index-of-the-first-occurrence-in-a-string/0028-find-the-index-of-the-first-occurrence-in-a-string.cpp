class Solution {
public:
    int strStr(string haystack, string needle) {
       int a=haystack.size(),b=needle.size();
       string j;
       for(int i=0;i<b;i++){
        j+=haystack[i];
       }
       if(j==needle)return 0;
       else{
        int pos=1;
        for(int i=b;i<a;i++){
            j.erase(0, 1);
            j+=haystack[i];
            if(j==needle)return pos;
            pos++;
        }
        return -1;
       }
    }
};