class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> u1;
        for(char c : s) {
            u1[c]++;
        }
        unordered_map<char, int> u2;
        for(char c : t) {
            u2[c]++;
        }

        if(u1 == u2) {
            return true;
        }
        return false;
    }
};
