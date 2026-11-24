class Solution {
public:
    double myPow(double x, int n) {
        if ( x == 0) return 0;
        if (x == 1 || x == -1) return x;
        if (n == 0) return 1;
        if (n == 1) return x;

        if (n % 2 == 0) {
            if ( n > 1) return myPow(x , n / 2) * myPow(x , n / 2);
            else return myPow( 1 / x , (n * -1) / 2) * myPow( 1 / x , (n * -1) / 2);
        }
        else {
            if (n > 1) return x * myPow(x , (n - 1) / 2) * myPow(x , (n - 1 ) / 2);
            else return (1 / x) * myPow( 1 / x , ((n * -1) - 1) / 2) * myPow( 1 / x , ((n * -1) - 1 ) / 2);
        }
    }
};
