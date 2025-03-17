class Bank {
public:
    unordered_map<int, long long> mp;
    int n;
    Bank(vector<long long>& balance) {
        n = balance.size();
        for (int i = 0; i < n; i++){
            mp[i + 1] = balance[i];
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        if (account1 > n || account1 < 1 || account2 > n || account2 < 1 || mp[account1] < money) return false;
        mp[account1] -= money;
        mp[account2] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if (account > n || account < 1) return false;
        mp[account] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if (account > n || account < 1 || mp[account] < money) return false;
        mp[account] -= money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */