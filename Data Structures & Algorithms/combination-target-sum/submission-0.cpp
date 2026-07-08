class Solution {
public:
 void  func( vector<int>&nums , int target , set<vector<int>>&st, int ind, vector<int>temp){

    if( target==0){
        st.insert( temp);
        return;
    }
     if( ind==nums.size()|| target<0){
        return ;
     }
     temp.push_back( nums[ind]);
     func( nums, target-nums[ind], st , ind, temp);
      func( nums , target-nums[ind], st , ind+1, temp);
     temp.pop_back();
     func( nums, target , st , ind+1, temp);
 }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        vector<int>temp;
        func( nums , target , st , 0, temp);
        vector<vector<int>>ans( st.begin(), st.end());
        return ans;
    }
};
