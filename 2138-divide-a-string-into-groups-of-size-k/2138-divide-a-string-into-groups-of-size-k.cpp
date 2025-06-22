class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int c=0;
        int si=s.size();
        vector<string>res;
        if((s.size())%k==0)c=-1;
        else{
            while(si){
                si+=1;
                c+=1;
                if(si%k==0)break;
            }
        }
        for(int i=0;i<c;i++)s+=fill;
        string adder;
        for(int i=0;i<s.size();i++){
            adder+=s[i];
            if((i+1)%k==0){
                res.push_back(adder);
                adder="";
            }
        }
        cout<<s<<endl;
        return res;
    }
};