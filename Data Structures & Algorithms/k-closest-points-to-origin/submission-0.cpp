class Solution {
public:
    struct cord{
        int x;
        int y;
        int distance;
        cord(int p , int q) {
            x = p;
            y = q;
            distance = (x * x) + (y * y);
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<cord>cords;
        for (vector<int> c : points){
            cords.push_back(cord(c[0] , c[1]));
        }
        auto comp = [](const cord& c1 , const cord& c2) {
            return c1.distance < c2.distance;
        };
        priority_queue<cord , vector<cord> , decltype(comp)>heap;
        for (auto i : cords) heap.push(i);
        while (heap.size() > k) heap.pop();
        vector<vector<int>>result;
        while (!heap.empty()){
            result.push_back({heap.top().x , heap.top().y});
            heap.pop();
        }
        return result;
    }
};
