class Solution {
public:
    int bSearch(int l , int r , vector<int>& nums , int target){
        if (l > r) return -1;
        int m = l + (r - l) /2;
        if (nums[m] == target) return m;
        return ((target < nums[m]) ? 
                bSearch(l , m - 1 , nums , target)
                :
                bSearch(m + 1 , r , nums , target)
        );
    }
    int search(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int size = nums.size();
        return bSearch(0 , nums.size() - 1 , nums , target);
    }
};
