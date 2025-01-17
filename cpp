class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        int m = arr.size();
        if (n != m) {
            return false;
        }
        vector<int> map(1001, 0);
        for (int i = 0; i < n; i++) {
            map[target[i]]++;
            map[arr[i]]--;
        }
        for (int i = 0; i < n; i++) {
            if (map[target[i]] != 0 || map[arr[i]] != 0) {
                return false;
            }
        }
        return true;
    }
};
