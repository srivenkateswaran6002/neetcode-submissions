class Solution {
public:
    int smash(int x , int y){
        if (x == y) return 0;
        if ( x < y) return y - x;
        return x - y;
    }
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) return stones[0];
        else if (stones.size() == 0) return 0;

        int sm = smash(stones[0] , stones[1]);
        for (int i = 2; i <= stones.size() - 1 ; i++ ){
            sm = smash(sm , stones[i]);
            cout << sm << endl;
        }
        return sm;
    }
};
