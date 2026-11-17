class Solution {
public:
    int findArea(int a , int b , int i , int j) {
        return min(a , b ) * (j - i);
    }
    int maxArea(vector<int>& h) {
        int l = 0 , r = h.size() - 1 , best = -1;
        while (l < r){
            int area = findArea(h[l] , h[r] , l , r);
            best = max(best , area);
            if (h[l] < h[r]) l++;
            else r--;
        }
        return best;
    }
};
