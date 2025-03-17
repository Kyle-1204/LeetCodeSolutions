class Solution {
public:
    int countTime(string time) {
        int ans = 1;
        if (time[4] == '?') ans *= 10;
        if (time[3] == '?') ans *= 6;
        if (time[1] == '?'){
            if (time[0] == '?') return ans * 24;
            else if (time[0] == '2') return ans * 4;
            else return ans * 10;
        }
        if (time[0] == '?'){
            if (time[1] - '0' > 3) return ans * 2;
            else return ans * 3;
        }
        return ans;
    }
};