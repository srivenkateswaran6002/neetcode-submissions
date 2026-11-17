class Solution {
public:
    void dfs(int i , int target , int sum , vector<int>& nums , vector<vector<int>>& res , vector<int>& current){
        if ( i >= nums.size() || sum > target){
            return;
        }
        else if (sum == target){
            res.push_back(current);
            return;
        }

        int val = nums[i];
        sum += val;
        current.push_back(val);
        dfs(i , target , sum , nums , res , current);
        sum -= val;
        current.pop_back();
        dfs(i + 1 , target , sum , nums , res , current);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        dfs(0 , target , 0 , nums , res , curr);
        return res;
    }
};
