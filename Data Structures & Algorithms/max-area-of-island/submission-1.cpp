class Solution {
public:
    int bfs(int row , int col , vector<vector<int>>& grid){
        queue<pair<int,int>>q;
        vector<pair<int,int>>dir = {{0 , -1} , {0 , 1} , {-1 , 0} , {1 , 0}};
        q.emplace(row , col);
        grid[row][col] = 0;
        int area = 1;
        while(!q.empty()){
            auto [r , c] = q.front();
            q.pop();
            for(auto& [dr ,dc] : dir){
                int tr = r + dr , tc = c + dc;
                if (tr >= 0 && tc >=0 && tr < grid.size() && tc < grid[0].size() && grid[tr][tc] == 1){
                    q.emplace(tr , tc);
                    grid[tr][tc] = 0;
                    area++;
                }
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        for (int i = 0 ; i < grid.size(); i++ ){
            for (int j = 0 ; j < grid[0].size() ; j++ ){
                if (grid[i][j] == 1){
                    maxArea = max(maxArea , bfs(i , j , grid));
                }
            }
        }
        return maxArea;
    }
};
