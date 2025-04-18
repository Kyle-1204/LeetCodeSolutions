class Solution {
public:
    string countAndSay(int n) {
        return recursiveBuild("1", n);
    }
private:
    string recursiveBuild(string sequence, int n){
        if (n == 1) return sequence;
        int count = 0;
        char currChr = sequence[0];
        string newSeq;
        for (auto& chr : sequence){
            if (chr == currChr) count++;
            else {
                newSeq += to_string(count) + currChr;
                currChr = chr;
                count = 1;
            }
        }
        newSeq += to_string(count) + currChr;
        return recursiveBuild(newSeq, n - 1);
    }
};