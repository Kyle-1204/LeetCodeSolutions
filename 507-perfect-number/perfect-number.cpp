class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return false;
        int sum = 1, end = num/2;
        unordered_map<int, int> mp;
        for (int i = 2; i < end; i++){
            if (num % i == 0){
                if (mp.find(i) != mp.end()) return (sum == num);
                sum += i;
                sum += (num / i);
                mp[num/i]++;
            }
        }
        return (sum == num);
    }
};