class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {return nums.insert(nums.end() , nums.begin() , nums.end());}
};