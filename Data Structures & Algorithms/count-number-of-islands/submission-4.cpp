class Solution {
public:
    void bfs(int row , int col , vector<vector<char>>& grid , vector<pair<int,int>>& dir){
        queue<pair<int ,int>>q;
        q.push({row  , col});
        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();
            for (auto& [dr , dc] : dir){
                int tr = r + dr, tc = c + dc;
                if (tr >= 0 && tr < grid.size() && tc >=0 && tc < grid[0].size() && grid[tr][tc] == '1'){
                    grid[tr][tc] = 0;
                    q.push({tr, tc});
                }

            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        set<pair<int , int>>seen;
        int islands = 0;
        vector<pair<int,int>> dir = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}};
        for (int i = 0 ; i < grid.size() ; i++){
            for (int j = 0 ; j < grid[0].size() ; j++){
                if (grid[i][j] == '1'){
                    islands++;
                    bfs(i , j , grid , dir);
                }
            }
        }
        return islands;
    }
};
