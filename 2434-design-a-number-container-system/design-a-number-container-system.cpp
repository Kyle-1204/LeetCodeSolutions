class NumberContainers {
public:
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> values;
    unordered_map<int, int> currMappings;
    NumberContainers() {
    }
    
    void change(int index, int number) {
        currMappings[index] = number;
        values[number].push(index);
    }
    
    int find(int number) {
        while(!values[number].empty()){
            if (currMappings[values[number].top()] == number) return values[number].top();
            values[number].pop();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */