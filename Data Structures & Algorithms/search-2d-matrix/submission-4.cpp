class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        if (nums.empty()) return false;
        int baseSize = nums[0].size();
        int totalSize = nums.size() * baseSize;
        int l = 0 , r = totalSize - 1 , m;
        while (l <= r){
            m = (l + r)/2; 
            if (nums[m/baseSize][m % baseSize] == target) return true;
            if (nums[m/baseSize][m % baseSize] > target){
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return false;
    }
};
