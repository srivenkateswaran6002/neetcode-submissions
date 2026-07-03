class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>freq;
        for (int n : nums) {
            freq[n]++;
        }
        int s = nums.size();
        vector<vector<int>>arr(s + 1);
        for (auto &pair : freq){
            int freq = pair.second;
            int val = pair.first;
            arr[freq].push_back(val);
        }
        vector<int>result;
        for (int i = s ; i >= 0 ; i--){
            if (arr[i].empty()) continue;
            for (int num : arr[i]) result.push_back(num);
            if (result.size() == k) {
                return result;
            }
        }
        return result;
        
    }
};
