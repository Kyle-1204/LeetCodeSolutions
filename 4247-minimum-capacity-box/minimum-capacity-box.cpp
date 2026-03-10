class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minIndex = -1, minCapacity = INT_MAX;
        for (int i = 0; i < capacity.size(); i++){
            if (capacity[i] >= itemSize && capacity[i] < minCapacity){
                minIndex = i;
                minCapacity = capacity[i];
            }
        }
        return minIndex;
    }
};