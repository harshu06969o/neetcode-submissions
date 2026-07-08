class Solution {
public:
     void func(vector<int>&nums , int ind , set<vector<int>>&st , vector<int>temp ){
        if( ind == nums.size()){
            st.insert( temp);
            return;
        }
        temp.push_back( nums[ind]);
        func( nums, ind+1, st , temp);
        temp.pop_back();
        func( nums, ind+1, st, temp);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
        int sizeofarray= nums.size();
        set<vector<int>> st;
        vector<int>temp;
        func( nums, 0, st, temp);
        vector<vector<int>>ans( st.begin(), st.end());
        return ans;

        
    }
};
