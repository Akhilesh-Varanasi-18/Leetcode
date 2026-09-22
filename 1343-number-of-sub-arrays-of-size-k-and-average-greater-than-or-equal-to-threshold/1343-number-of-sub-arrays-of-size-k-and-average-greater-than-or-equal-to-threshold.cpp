class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int t = threshold;
        int i = 0;
        int s = 0 , c =0;
        for(int j =0;j<k;j++){
            s += arr[j];
        }
        if(s/k >= t)c++;
        for(int a = k;a<arr.size();a++){
            s -= arr[i];
            i++;
            s += arr[a];
            if(s/k >= t)c++;
        }
        return c;
    }
};