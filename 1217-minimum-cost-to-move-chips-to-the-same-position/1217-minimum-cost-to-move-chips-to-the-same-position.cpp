class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        vector<int> arr(2, 0);
        for (int i = 0; i < position.size(); i++) {
            arr[position[i] % 2]++;
        }
        return min(arr[0], arr[1]);
    }
};