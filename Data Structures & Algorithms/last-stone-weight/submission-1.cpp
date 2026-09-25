class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        int res;
        for ( int i : stones){
            q.push(i);
        }
        while (q.size() > 1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            res = a - b;
            if (res < 0) res*= -1;
            q.push(res);
        }
        return res;
    }
};
