class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool Bulky;
        bool Heavy;
        long long volume = 1LL * length * width * height;
        string category;

        if (volume >= 1e9 || length >= 1e4 || width >= 1e4 || height >= 1e4) {
            Bulky = 1;
        } else {
            Bulky = 0;
        }

        if (mass >= 100) {
            Heavy = 1;
        } else {
            Heavy = 0;
        }

        if (Bulky == 1 && Heavy == 1) {
            category = "Both";
        } else if (Bulky == 0 && Heavy == 0) {
            category = "Neither";
        } else if (Bulky == 1 && Heavy == 0) {
            category = "Bulky";
        } else if (Bulky == 0 && Heavy == 1) {
            category = "Heavy";
        }

        return category;
    }
};