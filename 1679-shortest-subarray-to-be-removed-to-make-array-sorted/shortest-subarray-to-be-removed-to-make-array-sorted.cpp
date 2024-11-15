class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int size = arr.size() - 1, left = 0, right = size, minVal = size;
        if (arr[left] > arr[right]) { //help lol
            while (left < size && arr[left] <= arr[left + 1]) left++;
            while (right > 0 && arr[right] >= arr[right-1]) right--;
            if (left == 0 && right == size) return size;
            return min(right, size - left);
        }
        while (left < size && arr[left] <= arr[left + 1]) left++;
        if (left == right) return 0;
        while (right > 0 && arr[right] >= arr[right-1]) right--;
        if (arr[right] >= arr[left]) return right - left - 1;
        minVal = min(size - left, right);
        int rightStart = right;
        while (left >= 0){
            while (right < size && arr[right] < arr[left]){
                right++;
            }
            cout << "Left: " << left << "  " << " Right:" << right << endl;
            if (arr[right] >= arr[left]) minVal = min(right - left - 1, minVal);
            right = rightStart;
            left--;
        }
        return minVal;
    }
};