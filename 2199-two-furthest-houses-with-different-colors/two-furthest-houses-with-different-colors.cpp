class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDiff = 0, left = 0, end = colors.size() - 1;
        while (end - left > maxDiff){
            int startHouse = colors[left], right = end;
            while (colors[right] == startHouse) right--;
            cout << left << "   " << right << endl;
            maxDiff = max(maxDiff, right - left);
            left++;
        }
        return maxDiff;
    }
};