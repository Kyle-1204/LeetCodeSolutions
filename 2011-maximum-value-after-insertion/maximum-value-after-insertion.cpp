class Solution {
public:
    string maxValue(string n, int x) {
        bool positive;
        char xChr = (char) x + '0';
        int i, len = n.length();
        if (n[0] == '-') {
            positive = false;
            i = 1;
        }
        else {
            positive = true;
            i = 0;
        }
        while (i < len){
            if ((positive && n[i] < xChr) || (!positive && n[i] > xChr)) return n.substr(0, i) + xChr + n.substr(i, len - i );
            i++;
        }
        return n + xChr;
    }
};