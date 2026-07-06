  #define P  pair<int,pair<int,int>> 
   
  class Solution {
public:
  int bfs( vector<vector<int>>& grid,int row , int col, vector<vector<int>>&vis ){
    priority_queue< P,  vector<P>,greater<P>> pq;
     vis[row][col]=1;
    pq.push({0,{row,col} });
     int cnt = 2147483647;
     int delrow[] = { -1, 0 , 1, 0};
      int delcol[]= { 0, 1, 0, -1};
    while(!pq.empty()){
         auto it = pq.top();
         pq.pop();
          int dis = it.first;
          int crow = it.second.first;
          int ccol = it.second.second;
           if( grid[crow][ccol]==0) cnt = min( cnt , dis);
          for( int i =0; i<4 ; i++){
                int nrow = crow + delrow[i];
                int ncol = ccol + delcol[i];
                 if( nrow>=0 && nrow<grid.size() && ncol>=0 && ncol < grid[0].size() && !vis[nrow][ncol] && grid[nrow][ncol]!=-1){
                    vis[nrow][ncol]=1;
                    pq.push({dis+1, { nrow, ncol}});
                 }


    }

  }
  return cnt;
  }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int  INF = 2147483647;
        int rows = grid.size();
        int cols = grid[0].size();
        for( int i=0; i<rows; i++){
            for( int j=0; j< cols ; j++){
                if( grid[i][j]==INF){
                    vector<vector<int>>vis( grid.size(), vector<int>( grid[0].size(), 0));
                    grid[i][j]= bfs( grid , i , j ,vis );
                }
            }
        }

        
    }
};
