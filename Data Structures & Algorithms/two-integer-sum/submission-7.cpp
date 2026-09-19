class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for(int i = 0; i < nums.size(); i++) {
            int remaining = target - nums[i];
            if(um.count(remaining)) {
                return {um[remaining], i};
            }
            um[nums[i]] = i;
        }
        return {};
    }
};
