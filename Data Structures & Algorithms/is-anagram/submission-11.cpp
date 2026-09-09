#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        if (s == t) return true;
        std::unordered_map<char , int>mS , mT;
        int n = s.length();
        for (int i = 0 ; i < n ; i++) {
            mS[s[i]]++;
            mT[t[i]]++;
        }
        for (char c : s) if (mS[c] != mT[c]) return false;
        return true;
    }
};
