class Solution {
public:
    string convertToTitle(int columnNumber) {
        if (columnNumber <= 26) {
            return string(1, char((columnNumber - 1 + 'A')));
        }
        return convertToTitle(columnNumber/26)+convertToTitle(columnNumber%26);
    }
};