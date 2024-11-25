class Solution {
    bool isPrefixAndSuffix(string smaller, string larger){
        int sLen = smaller.length(), lLen = larger.length();
        if (sLen > lLen) return false;
        for (int i = 0; i < sLen; i++){
            if (smaller[i] != larger[i] || smaller[i] != larger[lLen - sLen + i]) return false;
        }
        return true;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int size = words.size(), numPairs = 0;
        for (int i = 0; i < size - 1; i++){
            for (int j = i + 1; j < size; j++){
                if (isPrefixAndSuffix(words[i], words[j])) numPairs++;
            }
        }
        return numPairs;

    }
};