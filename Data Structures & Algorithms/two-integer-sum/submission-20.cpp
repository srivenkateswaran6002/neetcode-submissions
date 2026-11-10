class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>m;
        for (int i = 0 ; i < nums.size() ; i++ ){
            int d = target - nums[i];
            if (!m.contains(d)) m[nums[i]] = i;
            else return {m[d] , i};
        }
    }
};
