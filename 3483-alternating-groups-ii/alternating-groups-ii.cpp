class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int numAlts = 0, numCont = 0, size = colors.size(), right = -1;
        while (right < size){
            right++;
            while ((right - k + 1) < size && colors[right % size] != colors[(right+1) % size]){
                numCont++;
                if (numCont >= k) numAlts++;
                right++;
            }
            numCont = 1;
        }
        return numAlts;
    }
};