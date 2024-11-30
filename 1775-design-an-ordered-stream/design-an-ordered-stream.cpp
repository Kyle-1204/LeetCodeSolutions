class OrderedStream {
public:
    vector<string> stream;
    int currIndex = 0, size;
    OrderedStream(int n) {
        stream = vector<string>(n);
        size = n;
    }
    
    vector<string> insert(int idKey, string value) {
        stream[idKey-1] = value;
        vector<string> ans;
        while (currIndex < size && stream[currIndex] != ""){
            ans.push_back(stream[currIndex]);
            currIndex++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */