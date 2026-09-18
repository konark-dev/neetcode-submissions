class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> up;
        for(auto i : nums) {
            up[i]++;
        }
        for(auto i : up) {
            if(i.second > 1) {
                return true;
            }
        }
        return false;
    }
};