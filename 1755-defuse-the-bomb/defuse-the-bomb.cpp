class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int size = code.size();
        vector<int> ans(size);
        if (k > 0){
            for (int i = 0; i < size; i++){
                int sum = 0;
                for (int j = 1; j <= k; j++) sum += code[(i + j) % size];
                ans[i] = sum;
            }
        }
        else if (k < 0){
            for (int i = 0; i < size; i++){
                int sum = 0;
                for (int j = -1; j >= k; j--) sum += code[(i - j) % size];
                ans[(size + i - k + 1) % size] = sum;
            }
        }
        return ans;
    }
};