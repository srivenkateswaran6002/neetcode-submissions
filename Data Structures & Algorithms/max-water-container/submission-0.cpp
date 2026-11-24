class Solution {
public:
    int findArea(int a , int b , int i , int j) {
        int m = min(a , b );
        int d = j - i;
        return m * d;
    }
    int maxArea(vector<int>& heights) {
        int a , b , c = -1;
        for (int i = 0 ; i < heights.size() ; i++){
            for (int j = i + 1 ; j < heights.size() ; j++){
                int area = findArea(heights[i] , heights[j] , i , j);
                if (area > c){
                    c = area;
                    a = i;
                    b = j;
                }
            }
        }
        cout << a << " " << b;
        return c;
    }
};
