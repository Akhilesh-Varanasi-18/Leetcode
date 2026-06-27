class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>w;
        string word = "";
        for (int i=0;i<text.size();i++){
            if(text[i] == ' '){
                w.push_back(word);
                word = "";
            }
            else{
                word+=text[i];
            }
        }
        w.push_back(word);
        vector<string>res;
        for(int i=2 ; i<w.size();i++){
            if(w[i-1] == second and w[i-2] == first)res.push_back(w[i]); 
        }
        return res;
        
    }
};