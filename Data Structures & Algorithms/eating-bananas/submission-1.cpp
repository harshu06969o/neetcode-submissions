class Solution {
public:
  int count( vector<int>& piles , int numOfBananas){
       int cnt =0;
       for( int ind =0; ind<piles.size(); ind++){
        cnt+= ceil(( (double)piles[ind]/(double)numOfBananas));

       }
        return cnt;

  }
    int minEatingSpeed(vector<int>& piles, int h) {
          int minNoOfBananas = *min_element( piles.begin(), piles.end());
          int maxNoOfBananas = *max_element( piles.begin(), piles.end());
          int start = 1;
          int end = maxNoOfBananas;
           int ans =0;
          while( start<=end){
             int mid = start+ ( end- start)/2;
              int numOfhours = count( piles , mid );
               if( numOfhours <=h ){
                ans = mid;
                 
                end = mid-1;
               }
                else start = mid+1;
          }
           return    ans;
        
    }
};
