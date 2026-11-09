class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>result;
        for (int i = 0 ; i < nums.size() ; i++ ){
            int target = nums[i] * -1;
            unordered_map<int , int>m;
            for (int j = i + 1 ; j < nums.size() ; j++){
                int diff = target - nums[j];
                if (!m.contains(diff)) m[nums[j]] = j;
                else {
                    vector<int> temp = {nums[i] , nums[m[diff]] , nums[j]};
                    sort(temp.begin() , temp.end());
                    result.insert(temp);
                }
            }
        }
        return vector<vector<int>>(result.begin() , result.end());
    }
};
