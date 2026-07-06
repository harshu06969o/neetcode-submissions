class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int  low = 0;
         int high = n-1;
          int ans = INT_MAX;
          int ind = -1;
         while( low<=high){
             int mid = low+ ( high- low)/2;
            if(nums[low]<=nums[high]){
                  if( nums[low]<=ans){
                ans = nums[low];
                ind = low;
                break;}
            }
            if(  nums[low]<=nums[mid]){
                 if( nums[low]<= ans){
                    ans = nums[low];
                    ind = low;
                 }
                  low = mid+1;

            }
             else{
                if( nums[mid]<=nums[high]){
                     if( nums[mid]<= ans){
                        ans = nums[mid];
                        ind = mid;

                     }
                      high = mid-1;
                }
             }

         }
          return ans;

        
    }
};
