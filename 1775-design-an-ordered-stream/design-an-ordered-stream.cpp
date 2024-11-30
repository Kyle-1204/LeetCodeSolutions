class OrderedStream {
public:
    vector<string> stream;
    int currIndex = 0;
    OrderedStream(int n) {
        stream = vector<string>(n);
    }
    
    vector<string> insert(int idKey, string value) {
        stream[idKey-1] = value;
        vector<string> ans;
        for (int i = currIndex; i < stream.size(); i++){
            if (stream[i] == "") break;
            else {
                ans.push_back(stream[i]);
                currIndex++;
            }
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */