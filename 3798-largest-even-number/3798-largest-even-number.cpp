class Solution {
public:
    string largestEven(string s) {
        string res = "";
        int index;
        for(int i = s.size()-1; i > -1; i--){
            int a  = s[i] - '0';
            if(a%2 == 0){
                index = i;
                break;
            }
        }
        for(int i = 0; i <= index; i++){
            res += s[i];
        }
        return res;
        
    }
};