class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(), st = -1, en = -1, left = 0, right = n - 1, mid;
        if (n == 0) {
            return {st, en};
        }
        // Checking if there is an occurance of target in array
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (target == nums[mid]) {
                st = en = mid;
                break;
            } else if (target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        int r = right;
        right = mid;
        // Finding left most occurance of target in array
        while (left <= right && st != -1) {
            int mid = left + (right - left) / 2;
            if (target <= nums[mid]) {
                right = mid - 1;
                st = mid;
            } else {
                left = mid + 1;
            }
        }
        right = r;
        left = mid;
        // Finding right most occurance of target in array
        while (left <= right && st != -1) {
            int mid = left + (right - left) / 2;
            if (target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
                en = mid;
            }
        }
        return {st, en};
    }
};