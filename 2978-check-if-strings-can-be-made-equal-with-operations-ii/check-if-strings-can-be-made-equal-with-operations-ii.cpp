class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char, int> evens1, odds1, evens2, odds2;
        int len = s1.length();
        for (int i = 0; i < len; i++){
            if (i % 2){
                odds1[s1[i]]++;
                odds2[s2[i]]++;
            }
            else{
                evens1[s1[i]]++;
                evens2[s2[i]]++;
            }
        }
        return evens1 == evens2 && odds1 == odds2;
    }
};