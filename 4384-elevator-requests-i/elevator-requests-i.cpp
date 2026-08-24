class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int numRequests = 0, currFloor = 0;
        for (auto& request: requests){
            numRequests += abs(request - currFloor);
            currFloor = request;
        }
        return numRequests;
    }
};