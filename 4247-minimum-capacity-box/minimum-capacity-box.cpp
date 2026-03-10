class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minIndex = -1, minCapacity = INT_MAX;
        for (int i = 0; i < capacity.size(); i++){
            if (minIndex == -1){
                if (capacity[i] >= itemSize){
                    minIndex = i;
                    minCapacity = capacity[i];
                }
            }
            else if (capacity[i] >= itemSize && capacity[i] < minCapacity){
                minIndex = i;
                minCapacity = capacity[i];
            }
        }
        return minIndex;
    }
};