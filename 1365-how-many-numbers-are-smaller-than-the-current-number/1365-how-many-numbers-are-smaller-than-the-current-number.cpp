class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> pos;
        for (int i = 0; i < sorted.size(); i++) {
            if (pos.find(sorted[i]) == pos.end()) {
                pos[sorted[i]] = i;
            }
        }
        vector<int> result;
        for (int x : nums) {
            result.push_back(pos[x]);
        }
        return result;
    }
};