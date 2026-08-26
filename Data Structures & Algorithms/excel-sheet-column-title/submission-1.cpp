class Solution {
public:
    string convertToTitle(int columnNumber) {
        if (columnNumber <= 26) {
            string s;
            s.push_back(columnNumber - 1 + 'A');
            return s;
        }
        int rem = columnNumber % 26;
        int sup = columnNumber / 26;
        string res = convertToTitle(sup) + convertToTitle(rem);
        return res;
    }
};