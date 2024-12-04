class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> sMP, targetMP;
        int numCopies = INT_MAX;
        for (auto& chr: target) {
            targetMP[chr]++;
            sMP[chr] = 0;
        }
        for (auto& chr: s){
            if (targetMP.find(chr) != targetMP.end()) sMP[chr]++;
        }
        for (auto val: sMP) numCopies = min(numCopies, val.second/targetMP[val.first]);
        return numCopies;
    }
};