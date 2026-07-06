class Solution {
public:
    bool canJump(vector<int>& nums) {
         int maxi =0;
          int n = nums.size();
         for( int i =0; i<nums.size(); i++){
            maxi = max( maxi, i+nums[i]);
             if( nums[i]==0){
                 if( (i==n-1&& maxi<i)|| ( i!=n-1&&maxi<=i))
                 return false; 


             } 
         }
           return true;
    }
};
