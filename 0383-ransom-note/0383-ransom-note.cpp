class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;

        for (char& a : ransomNote) {
            mpp1[a]++;
        }

        for (char& a : magazine) {
            mpp2[a]++;
        }

        for (char& a : ransomNote) {
            if (mpp1[a] > mpp2[a]) {
                return false;
            }
        }
        return true;
    }
};