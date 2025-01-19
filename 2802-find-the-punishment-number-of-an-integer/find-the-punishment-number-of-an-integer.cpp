class Solution {
private:
    bool canPartition(string s,int target) {
    if (s=="" && target==0) return true;
    if (target<0) return false;

    for(int i=0;i<s.size();i++){
        if (canPartition(s.substr(i + 1) , target - stoi(s.substr(0, i + 1)))) {return true;}
    }
    return false;
}
public:
    int punishmentNumber(int n) {
        int pNum = 0;
        for (int num = 1; num <= n; num++){
            int sqr = num * num;
            if (canPartition(to_string(sqr), num)) {
                pNum += sqr;
            }
        }
        return pNum;
    }
};