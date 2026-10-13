class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int>seen;
        for (int& i : nums) {
            seen[i]++;
            if (seen[i] > 1) return true;
        }
        return false;
    }
};