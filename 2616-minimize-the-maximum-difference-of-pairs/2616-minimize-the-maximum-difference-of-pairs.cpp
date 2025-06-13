class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int c=0;
        int z_cnt=0;
        int maxi=INT_MIN;
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0 ;i<nums.size();i++)mp[nums[i]]++;
        for(auto i:mp){
            int check=i.second;
            if(check>=2 && check%2==0){
                z_cnt+=check/2;
                mp[i.first]=-1;
            }
            else if(check>=2 && check%2 !=0){
                z_cnt+=(check-1)/2;
                mp[i.first]=1;
            }
        }
        if(z_cnt>=p)return 0;
        else p=p-z_cnt;
        for(auto i:mp){
            if(i.second>0)res.push_back(i.first);
        }
        sort(res.begin(),res.end());
        for(int i=1;i<res.size();i+=2){
            int ans=abs(res[i]-res[i-1]);
            maxi=max(maxi,ans);
            c+=1;
            if(c==p)break;
        }
        return maxi;

        // cout<<z_cnt<<endl;
        // for(auto i: mp)cout<<i.second<<" ";
        // cout<<endl;
        // return 0;
        
    }
};