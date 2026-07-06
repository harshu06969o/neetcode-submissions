class Solution {
public:
    int search(vector<int>& nums, int target) {
        int  startInd = 0;
        int endInd = nums.size()-1;
        while( startInd<=endInd){
            int midInd = startInd+ (endInd-startInd)/2;
            if( nums[midInd]==target) return midInd;
            else if( nums[startInd]<=nums[midInd]){
                if( nums[startInd]<=target && nums[midInd]>=target){
                    endInd = midInd-1;
                }
                 else startInd = midInd+1;
            }
            else{
                if( target>=nums[midInd] && target<=nums[endInd]){
                    startInd = midInd+1;
                }
                 else endInd = midInd-1;
            }
        }
         return -1;
        
    }
};
