class Solution {
public:
    string convertToTitle(int columnNumber) {
        if (columnNumber <= 26) {
            return string(1, char((columnNumber - 1 + 'A')));
        }
        int rem = columnNumber % 26;
        int sup = columnNumber / 26;
        return convertToTitle(sup) + convertToTitle(rem);
    }
};