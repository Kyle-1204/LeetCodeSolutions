class ProductOfNumbers {
public:
    vector<int> vect;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        for (int i = 0; i < vect.size(); i++) vect[i] *= num;
        vect.push_back(num);
    }
    
    int getProduct(int k) {
        return vect[vect.size() - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */