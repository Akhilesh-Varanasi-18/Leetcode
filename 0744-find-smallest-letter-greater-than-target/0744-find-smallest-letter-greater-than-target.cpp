class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;
        int mid, pos = -1;

        while (start <= end) {
            mid = start + (end - start) / 2;
            if (letters[mid] > target) {
                pos = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return pos == -1 ? letters[0] : letters[pos];
    }
};
