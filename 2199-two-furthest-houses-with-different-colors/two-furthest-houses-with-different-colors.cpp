class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDiff = 0, left = 0, end = colors.size() - 1;
        unordered_map<int, int> mp;
        while (end - left > maxDiff){
            int startHouse = colors[left], right = end;
            mp[startHouse]++;
            while (colors[right] == startHouse) right--;
            maxDiff = max(maxDiff, right - left);
            left++;
            while (left < end && mp.find(colors[left]) != mp.end()) left++;
        }
        return maxDiff;
    }
};