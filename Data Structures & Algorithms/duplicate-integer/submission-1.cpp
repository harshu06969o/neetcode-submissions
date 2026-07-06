class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort( nums.begin(),nums.end());
         if( nums.size()<=1) return false;
         for( int i =1 ; i< nums.size();i++){
            if( nums[i-1]==nums[i]) return true;
         }
          return false;

    }
};