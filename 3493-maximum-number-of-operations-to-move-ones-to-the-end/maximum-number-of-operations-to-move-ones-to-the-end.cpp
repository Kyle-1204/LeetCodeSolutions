class Solution {
public:
    int maxOperations(string s) {
        int len = s.length() - 1, numOnes = 0, index = 0, numOpps = 0;
        while (index < len){
            if (s[index] == '1'){
                numOnes++;
                if (s[index+1] == '0') numOpps += numOnes;
            }
            index++;
        }
        return numOpps;
    }
};