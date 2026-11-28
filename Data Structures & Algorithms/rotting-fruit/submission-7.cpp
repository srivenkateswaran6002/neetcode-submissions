class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(!grid.size() || !grid[0].size()) return -1;
        int level = -1, fruits = 0;
        queue<pair<int,int>>q;
        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if (grid[i][j] == 1){
                    fruits++;
                }
                if (grid[i][j] == 2) {
                    q.emplace(i , j);
                    grid[i][j] = 0;
                }
            }
        }
        if (fruits == 0){
            return 0;
        }
        while(!q.empty()){
            int size = q.size();
            for (int i = 0 ; i < size ; i++ ){
                auto [r , c ] = q.front();
                q.pop();
                for (auto& [dr, dc] : dirs){
                    int row = r + dr , col = c + dc;
                    if (row >= 0 && col >= 0 && 
                    row < grid.size() && 
                    col < grid[0].size() && 
                    grid[row][col] == 1) {
                        q.emplace(row, col);
                        grid[row][col] = 0;
                        fruits--;
                    }
                }
            }
            level+= 1;
        }
        if (fruits > 0){
            return -1;
        }
        return level;
    }
};
