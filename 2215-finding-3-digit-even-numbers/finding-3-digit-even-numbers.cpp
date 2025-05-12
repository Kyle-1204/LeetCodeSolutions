class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> digitCount(10), ans;
        for (auto& digit: digits) digitCount[digit]++;
        for (int i = 1; i < 10; i++){
            if (digitCount[i] == 0) continue;
            digitCount[i]--;
            for (int j = 0; j < 10; j++){
                if (digitCount[j] == 0) continue;
                digitCount[j]--;
                for (int k = 0; k < 10; k += 2){
                    if (digitCount[k] == 0) continue;
                    ans.push_back(i * 100 + j * 10 + k);
                }
                digitCount[j]++;
            }
            digitCount[i]++;
        }
        return ans;
    }
};