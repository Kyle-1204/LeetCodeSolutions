class Solution {
public:
    int countTriples(int n) {
        unordered_set<int> numSet;
        int ans = 0;
        for (int i = 1; i <= n; i++){
            int numSquared = i * i;
            for (auto& num: numSet){
                if (numSet.find(numSquared - num) != numSet.end()) ans++;
            }
            numSet.insert(numSquared);
        }
        return ans;
    }
};