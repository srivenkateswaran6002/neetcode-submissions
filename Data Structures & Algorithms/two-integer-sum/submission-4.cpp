#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 2) {
            vector<int>s = {0 , 1};
            return s;
        }
        unordered_map<int , int>m;
        vector <int> res;
        for (int i = 0 ; i < n ; i++){
            int diff = target - nums[i];
            if (!m.contains(diff)){
                m[nums[i]] = i;
            }
            else {
                int a = m[diff] , b = i;
                if (a > b) swap(a , b);
                res.push_back(a);
                res.push_back(b);
                break;
            }
        }
        return res;
    }
};
