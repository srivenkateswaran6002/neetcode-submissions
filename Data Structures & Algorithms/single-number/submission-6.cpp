class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int>result;
        for (int i : nums){
            if (result.find(i) != result.end()) result.erase(result.find(i));
            else result.insert(i);
        }
        return *result.begin();
    }
};
