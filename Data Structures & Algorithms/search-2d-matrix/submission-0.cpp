class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int numOfRows = matrix.size();
        int numOfCol = matrix[0].size();
        int startInd = 0;
         int endInd = ( (numOfRows*numOfCol) -1);
          while( startInd<= endInd){
             int midInd = startInd+ ( endInd- startInd)/2;
               int currrow = midInd/ numOfCol;
               int currcol = midInd % numOfCol;
               if( matrix[currrow][currcol] == target) return true;
               else if( matrix[currrow][currcol]>  target) endInd= midInd-1;
               else startInd = midInd+1;

          }
           return false;



        
    }
};
