class Solution {
public:
     
   
    void bfs( vector<vector<char>>& grid , vector<vector<int>> &visited, int  row , int col){
        queue<pair<int,int>>q;
        q.push({row, col});
         int delrow[] = { -1, 0 , 1, 0};
      int delcol[]= { 0, 1, 0, -1};
        while(!q.empty()){
             auto[currrow, currcol]= q.front();
             q.pop();
             for( int i =0; i<4 ; i++){
                int nrow = currrow + delrow[i];
                int ncol = currcol + delcol[i];
                if( nrow>=0 && nrow<grid.size() && ncol>=0 && ncol < grid[0].size() && !visited[nrow][ncol] && grid[nrow][ncol]=='1'){
                    visited[nrow][ncol]=1;
                    q.push({ nrow, ncol});
                }
             }


        }
    }
    int numIslands(vector<vector<char>>& grid) {
         vector<vector<int>> visited( grid.size(), vector<int>( grid[0].size(),0 ));
          int numOfIslands =0;
         for( int i =0; i< grid.size();i++){
            for( int j =0 ; j<grid[0].size(); j++){
                if( !visited[i][j] && grid[i][j]=='1'){
                    visited[i][j]=1;
                  bfs( grid, visited , i , j);
                   numOfIslands++;
                }
            }
         }
          return numOfIslands;

        
    }
};
