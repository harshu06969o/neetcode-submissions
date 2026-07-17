class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh =0;
        int minutes=0;
         
         int n = grid.size();
         int m = grid[0].size();
         vector<vector<bool>>vis( n, vector<bool>(m,0));
        for( int i =0;i<n;i++){
            for( int j =0; j<m;j++){
                if( grid[i][j]==0) continue;
                else if( grid[i][j]==1) fresh++;
                else q.push({i,j});
            }
        }
         int delrow []= {-1,0,1,0};
         int delcol[]= {0,1, 0 , -1};
          while(!q.empty()){
               bool visited = false;
                int sz= q.size();
            for( int i =0;i<sz;i++){

                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                 vis[row][col]=1;
                for( int j =0;j<4;j++){
                    int drow = row+ delrow[j];
                    int dcol = col+ delcol[j];
                    if(  drow>=0 && drow<n && dcol>=0 && dcol<m && !vis[drow][dcol] && grid[drow][dcol]==1){
                        fresh--;
                        q.push({drow,dcol});
                        visited = true;
                        vis[drow][dcol]=1;
                    }
                }
            }
            if( visited) minutes++;
          }
          if( fresh==0) return minutes ;
          else return -1;
        
        
        
    }
};
