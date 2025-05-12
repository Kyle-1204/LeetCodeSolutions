class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> mp;
        for (auto& chr: s) mp[chr]++;
        int numChars = mp.size();
        if (numChars <= k) return 0;
        vector<int> counts;
        for (auto& count: mp) counts.push_back(count.second);
        sort(counts.begin(), counts.end());
        int ans = 0, i = 0;
        while (k < numChars){
            cout << counts[i] << endl;
            ans += counts[i++];
            numChars--;
        }
        return ans;
    }
};