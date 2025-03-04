class Solution {
public:
    bool checkForEachCharacter(string& str, int& pos1, bool& flag,
                               string& str1) {
        for (int i = 0; i < str.length(); i += 1) {
            pos1 = str1.find(str[i]);
            if (pos1 == string::npos) {
                flag = true;
                break;
            }
        }
        return flag;
    }
    void lowerCase(string& str) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += ('a' - 'A');
            }
        }
    }
    vector<string> findWords(vector<string>& words) {
        string str1 = "qwertyuiop", str2 = "asdfghjkl", str3 = "zxcvbnm", str;
        vector<string> fnlAnswer;
        bool flag = false;
        for (int i = 0; i < words.size(); i++) {
            str = words[i];
            flag = false;

            // convert to lowerCase
            lowerCase(str);

            int pos1 = str1.find(str[0]), pos2 = str2.find(str[0]),
                pos3 = str3.find(str[0]);

            if (pos1 != string::npos) {
                flag = checkForEachCharacter(str, pos1, flag, str1);
            } else if (pos2 != string::npos) {
                flag = checkForEachCharacter(str, pos2, flag, str2);
            } else {
                flag = checkForEachCharacter(str, pos3, flag, str3);
            }

            if (!flag)
                fnlAnswer.push_back(words[i]);
        }
        return fnlAnswer;
    }
};
