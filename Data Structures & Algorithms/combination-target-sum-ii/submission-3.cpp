class Solution {
public:
    void solve(vector<int>& nums, int target, int ind, vector<int>& cur, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(cur);
            return;
        }

        for (int i = ind; i < nums.size(); i++) {
            if (i > ind && nums[i] == nums[i - 1])
                continue;

            if (nums[i] > target)
                break;

            cur.push_back(nums[i]);
            solve(nums, target - nums[i], i + 1, cur, ans);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> cur;

        solve(nums, target, 0, cur, ans);

        return ans;
    }
};