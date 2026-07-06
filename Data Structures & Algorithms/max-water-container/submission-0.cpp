class Solution {
public:
    int maxArea(vector<int>& heights) {

         int leftptr = 0  , rightptr = heights.size()-1;
          int maxarea = 0;

         while( leftptr<rightptr){
             int mini = min ( heights[leftptr] , heights[rightptr]);
             maxarea = max( maxarea , (rightptr-leftptr)*mini);
             if( heights[leftptr]< heights[rightptr]) leftptr++;
             else rightptr--;

         }
         return  maxarea;


        
    }
};
