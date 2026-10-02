class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int l  = 0 , r = 0 , len = 0;
        while (r < s.size()){
            if (seen.find(s[r]) == seen.end()){
                seen.insert(s[r]);
                r++;
                len = max(len , r - l);
            } else {
                seen.erase(s[l]);
                l++;
            }
        }
        return len;
    }
};
