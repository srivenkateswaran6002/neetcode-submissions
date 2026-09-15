#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int>s;
        for (int i : nums ) {
            if (!s.contains(i)) s.insert(i);
            else return true;
        }
        return false;
    }
};