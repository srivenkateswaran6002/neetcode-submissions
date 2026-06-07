class Solution {
public:
    bool isAnagram(string a , string b) {
        if (a.length() != b.length()) return false;
        int n = a.length();
        unordered_map<char , int>mA , mB;
        for(int i = 0 ; i < n ; i++){
            mA[a[i]]++;
            mB[b[i]]++;
        }
        for(char c : a) if (mA[c] != mB[c]) return false;
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_set<string>visited;
        vector<vector<string>>result;
        for (int i = 0 ; i < strs.size() ; i++ ){
            if (visited.contains(strs[i])) continue;
            visited.insert(strs[i]);
            vector<string>bucket;
            bucket.push_back(strs[i]);
            for (int j = i + 1 ; j < strs.size() ; j++ ){
                if (isAnagram(strs[i] , strs[j])){
                    visited.insert(strs[j]);
                    bucket.push_back(strs[j]);
                }
            }
            result.push_back(bucket);

        }
        return result;
    }
};
