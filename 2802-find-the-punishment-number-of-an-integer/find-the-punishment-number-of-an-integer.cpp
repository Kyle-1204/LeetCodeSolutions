class Solution {
public:
    int punishmentNumber(int n) {
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            int sq = i * i;
            string s = to_string(sq);

            if (canPartition(s, i)) {
                ans += sq;
            }
        }

        return ans;
    }

private:
    bool canPartition(const string &s, int target) {
        int len = s.size();
        vector<vector<bool>> dp(len + 1, vector<bool>(target + 1, false));
        dp[0][0] = true;

        for (int i = 0; i < len; i++) {
            for (int sum = 0; sum <= target; sum++) {
                if (dp[i][sum]) {
                    int num = 0;
                    for (int k = i; k < len; k++) {
                        num = num * 10 + (s[k] - '0');
                        if (num > target - sum) break;
                        dp[k + 1][sum + num] = true;
                    }
                }
            }
        }

        return dp[len][target];
    }
};