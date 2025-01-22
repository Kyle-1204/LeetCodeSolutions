class Solution {
public:
   int dp[10][1001];
    bool istrue(int i, int sum, string s, int req) {
    // Base case
    if (i == s.size()) {
        if (sum == req) return true;
        return false;
    }

    // If the sum exceeds the required sum, return false
    if (sum > req) return false;

    // Memoization: If the result for this state is already calculated, return it
    if (dp[i][sum] != -1) return dp[i][sum];

    bool ans = false;

    // Iterate through all possible substrings starting from index i
    for (int k = i; k < s.size(); k++) {
        // Determine the substring and convert it to an integer
        int len = k - i + 1;
        string f = s.substr(i, len);
        int pp = stoi(f);

        // Recursively check if the sum of the substring and sum so far equals req
        ans = ans || istrue(k + 1, sum + pp, s, req);

        // If we find a valid partition, no need to continue, return true
        if (ans == true) return true;
    }

    // Memoize the result for future reference and return
    return dp[i][sum] = ans;
}

    int punishmentNumber(int n) {
        int ans=0;
      
        for(int i=1;i<=n;i++){
            
            int sq = i*i;
            int num_digits = 0;
             string s="";
            int k=sq;
            while(k>0){
                num_digits++;
                int p = k%10;
                string kap = to_string(p);
                s+=kap;
                k=k/10;                
            }
            reverse(s.begin(),s.end());
            memset(dp,-1,sizeof(dp));
            if(istrue(0,0,s,i)){
                ans+=sq;
            }
        }
        return ans;
    }
};