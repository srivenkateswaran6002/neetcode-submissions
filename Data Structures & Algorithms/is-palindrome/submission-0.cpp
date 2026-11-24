class Solution {
public:
    bool isPalindrome(string s) {
        int a = 0 , b = s.size() - 1 , n = b;
        cout << int('A');
        for (int i = 0 ; i < n ; i++ ) if ((int)s[i] < 97) s[i] = (char) s[i] + 32;
        while (a < b) {
            if (s[a] != s[b]) {
                if (s[a] == ' ' || (int)s[a] < 65 ) {
                    a++;
                    continue;
                }
                if (s[b] == ' ' || (int)s[b] < 65 ) {
                    b--;
                    continue;
                }
                cout << s[a] << " " << s[b];
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};
