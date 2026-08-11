class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        int seqSum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1)
                seqSum = seqSum + nums[i];
            else
                break;
        }

        while (true) {
            bool found = false;

            for (int num : nums) {
                if (num == seqSum) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return seqSum;
            }

            seqSum++;
        }
        return -1;
    }
};