class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string s : strs) result += to_string(s.length()) + "#" + s;
        return result;
    }

    vector<string> decode(string s) {
        cout << s;
        vector<string>res;
        int len = s.length() , i = 0;
        while (i < len) {
            string result = "";
            if (isdigit(s[i])){
                string le = "";
                while(s[i] != '#') {
                    le += s[i];
                    i++;
                }
                int l = stoi(le);
                i++;
                for (int n = 0 ; n < l ; n++ ){
                    result += s[i];
                    i++;
                }
            } else i++;
            // cout << result << endl;
            res.push_back(result);
        }
        return res;
    }
};
