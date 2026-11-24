class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        while( i < nums.size()){
            if (nums[i] == 0) {
                break;
            }
            i += nums[i];
        }
        cout << i;
        return i >= nums.size() - 1;
    }
};
