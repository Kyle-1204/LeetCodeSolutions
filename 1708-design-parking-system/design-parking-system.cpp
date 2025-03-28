class ParkingSystem {
public:
    vector<int> slots = {0};
    ParkingSystem(int big, int medium, int small) {
        slots.push_back(big);
        slots.push_back(medium);
        slots.push_back(small);
    }
    
    bool addCar(int carType) {
        if (slots[carType]){
            slots[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */