class Solution {
public:
    void dfs(int index , vector<int>& nums , int& target , int sum , vector<int>& curr , vector<vector<int>>& res){
        if (sum == target){
            res.push_back(curr);
            return;
        }
        if (sum > target || index >= nums.size()){
            return;
        }
        curr.push_back(nums[index]);
        dfs(index + 1 , nums , target , sum + nums[index] , curr , res);
        while (index < nums.size() && nums[index] == curr.back()){
            index++;
        }
        curr.pop_back();
        dfs(index, nums , target , sum , curr , res);
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        sort(nums.begin() , nums.end());
        dfs(0 , nums , target , 0 , curr , res);
        return res;
    }
};
