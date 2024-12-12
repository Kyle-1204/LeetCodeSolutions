class MapSum {
public:
    unordered_map<string, int> mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) { mp[key] = val; }
    
    int sum(string prefix) {
        int len = prefix.length(), sum = 0;
        for (auto& element: mp){
            if (element.first.substr(0,len) == prefix) sum += element.second;
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */