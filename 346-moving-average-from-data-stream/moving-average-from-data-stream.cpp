class MovingAverage {
public:
    int numVals;
    queue<int> q;
    double sum = 0;
    MovingAverage(int size) {
        numVals = size;
    }
    
    double next(int val) {
        if (q.size() == numVals){
            sum -= q.front();
            q.pop();
        }
        sum += val;
        q.push(val);
        return sum/q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */