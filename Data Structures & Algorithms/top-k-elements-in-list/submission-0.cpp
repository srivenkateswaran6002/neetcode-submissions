class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> arr(k);
        int maxi = INT_MIN;
        unordered_map<int , int>freq;
        for (int n : nums) {
            freq[n]++;
            if (maxi < freq[n]){
                maxi = freq[n];
                if (!arr.empty()) arr.erase(arr.begin());
                arr.push_back(n);
            }
        }
        return arr;
    }
};
