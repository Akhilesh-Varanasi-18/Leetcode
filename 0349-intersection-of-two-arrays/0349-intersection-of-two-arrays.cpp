class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> arr(nums1.begin(), nums1.end()); 
        unordered_set<int> res;
        for(int i:nums2){
            if(arr.count(i))res.insert(i);
        }
        return vector<int>(res.begin(),res.end());
    }
};