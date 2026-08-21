class Solution {
public:
    bool isValid(string str) {
        if (str.length() % 2 != 0 ) return false;
        stack<char> s;
        unordered_map<char , char>m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';
        cout << (int) '[' << " " << (int) ']' << " " << '{' - '}';
        for (char& c : str) {
            if (c == ')' || c == '}' || c == ']'){
                if (s.empty()) return false;
                else if (s.top() != m[c]) return false;
                s.pop();
            }
            else {
                s.push(c);
            }
        }
        return s.empty();
    }
};
