class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = nums[0];
        for (int i = 0 ; i < nums.size() ; i++){
            int sum = nums[i];
            for (int j = i + 1 ; j < nums.size() ; j++){
                sum += nums[j];
                m = max(m , sum);
            }
            m = max(m , sum);
        }
        return m;
    }
};
