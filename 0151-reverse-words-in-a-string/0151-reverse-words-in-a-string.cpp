class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int i = s.length() - 1;

        while (i >= 0) {
            // skip spaces
            while (i >= 0 && s[i] == ' ') i--;

            if (i < 0) break;

            int j = i;

            // find word
            while (i >= 0 && s[i] != ' ') i--;

            // add space before next word (if needed)
            if (!res.empty()) res += " ";

            // add word
            res += s.substr(i + 1, j - i);
        }

        return res;
    }
};