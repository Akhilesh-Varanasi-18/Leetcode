class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int b=0;
        int tg=0;
        int cg=0;
        for(int i=0;i<cost.size();i++){
            int g=gas[i]-cost[i];
            tg+=g;
            cg+=g;
            if(cg<0){
                cg=0;
                b=i+1;
            }
        }
        if(tg<0)return -1;
        else return b;
    }
};