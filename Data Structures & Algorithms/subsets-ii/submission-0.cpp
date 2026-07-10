class Solution {
public:
       void func( vector<int>&nums,set<vector<int>>&st,vector<int>&temp,int ind   ){
        if( ind==nums.size()){
            st.insert( temp);
            return;
        }
        temp.push_back( nums[ind]);
        func( nums, st , temp , ind+1);
        temp.pop_back();
        func( nums, st, temp, ind+1);
       }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort( nums.begin(), nums.end());
        set<vector<int>>st;
        vector<int>temp;
        func( nums , st , temp , 0);
        vector<vector<int>> ans( st.begin(), st.end());
        return ans;
        
    }
};
