class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        if (arr.size() == 0) return 0;

        sort(arr.begin(), arr.end());

        int ans = 1;
        int maxi = 1;

        for (int i = 1; i < arr.size(); i++) {

            // Ignore duplicates
            if (arr[i] == arr[i - 1]) {
                continue;
            }

            // Consecutive
            if (arr[i] == arr[i - 1] + 1) {
                ans++;
            }
            // Break in sequence
            else {
                ans = 1;
            }

            maxi = max(maxi, ans);
        }

        return maxi;
    }
};

