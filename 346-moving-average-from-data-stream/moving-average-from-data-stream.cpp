class MovingAverage {
public:
    int sizeVal, numVals = 0;
    queue<int> q;
    double sum = 0;
    MovingAverage(int size) {
        sizeVal = size;
    }
    
    double next(int val) {
        if (numVals == sizeVal){
            sum -= q.front();
            q.pop();
        }
        else numVals++;
        sum += val;
        q.push(val);
        return sum/numVals;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */