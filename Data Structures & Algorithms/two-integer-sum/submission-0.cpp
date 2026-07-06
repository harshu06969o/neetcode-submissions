class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n = nums.size();
        for( int ind = 0 ; ind<n-1;ind++){
            for( int comp = ind+1; comp<n;comp++){
                 if( nums[ind]+nums[comp]==target) return{ind, comp};

            }

        }
        return {-1,-1};

        
    }
};
