class Solution {
public:
    int maxProduct(int n) {
        map<int,int>mp;
        while(n != 0){
            mp[n%10]++;
            n /= 10;
        }
        // for(auto i : mp)cout<<i.first<<" "<<i.second<<endl;
        auto maxi = mp.rbegin();
        if(maxi -> second > 1) return (maxi -> first)*(maxi -> first);
        else{
            int pro = maxi -> first;
            mp.erase(maxi -> first);
            auto m = mp.rbegin();
            return pro*m->first;
        } 
    }
};