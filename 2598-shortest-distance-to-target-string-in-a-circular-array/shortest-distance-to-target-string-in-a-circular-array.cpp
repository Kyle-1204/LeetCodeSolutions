class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int size = words.size(), minDist = size;
        for (int i = 0; i < size; i++){
            if (words[i] == target){
                int dist = abs(startIndex - i);
                minDist = min(minDist, min(dist, size - dist));
            }
        }
        return (minDist == size ? -1 : minDist);
    }
};